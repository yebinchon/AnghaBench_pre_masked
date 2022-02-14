
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vicodec_q_data {unsigned int coded_width; unsigned int coded_height; int visible_height; int visible_width; scalar_t__ sequence; struct v4l2_fwht_pixfmt_info* info; } ;
struct TYPE_2__ {int * alpha; int * cr; int * cb; int * luma; int * buf; } ;
struct v4l2_fwht_state {unsigned int coded_width; unsigned int coded_height; int stride; int ref_stride; TYPE_1__ ref_frame; int * compressed_frame; int visible_height; int visible_width; scalar_t__ gop_cnt; } ;
struct vicodec_ctx {unsigned int comp_max_size; unsigned int comp_size; scalar_t__ is_stateless; scalar_t__ is_enc; int * last_src_buf; struct v4l2_fwht_state state; } ;
struct vb2_queue {int type; } ;
struct v4l2_fwht_pixfmt_info {unsigned int width_div; unsigned int height_div; scalar_t__ id; int bytesperline_mult; int luma_alpha_step; int components_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 struct vicodec_q_data* FUNC_1 (struct vicodec_ctx*,int ) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int *,int *,unsigned int) ;
 unsigned int FUNC_5 (struct vicodec_q_data*) ;
 struct vicodec_ctx* FUNC_6 (struct vb2_queue*) ;
 int FUNC_7 (struct vb2_queue*,int ) ;

__attribute__((used)) static int FUNC_8(struct vb2_queue *VAR_6,
       unsigned int VAR_7)
{
 struct vicodec_ctx *VAR_8 = FUNC_6(VAR_6);
 struct vicodec_q_data *VAR_9 = FUNC_1(VAR_8, VAR_6->type);
 struct v4l2_fwht_state *VAR_10 = &VAR_8->state;
 const struct v4l2_fwht_pixfmt_info *VAR_11 = VAR_9->info;
 unsigned int VAR_12 = VAR_9->coded_width * VAR_9->coded_height;
 unsigned int VAR_13;
 unsigned int VAR_14;
 u8 *VAR_15 = ((void*)0);

 VAR_13 = VAR_11->width_div * VAR_11->height_div;
 VAR_9->sequence = 0;

 if (FUNC_0(VAR_6->type))
  VAR_8->last_src_buf = ((void*)0);

 VAR_10->gop_cnt = 0;

 if ((FUNC_0(VAR_6->type) && !VAR_8->is_enc) ||
     (!FUNC_0(VAR_6->type) && VAR_8->is_enc))
  return 0;

 if (VAR_11->id == VAR_3 ||
     VAR_11->id == VAR_4) {
  FUNC_7(VAR_6, VAR_5);
  return -VAR_0;
 }
 VAR_14 = FUNC_5(VAR_9);
 VAR_8->comp_max_size = VAR_14;

 VAR_10->visible_width = VAR_9->visible_width;
 VAR_10->visible_height = VAR_9->visible_height;
 VAR_10->coded_width = VAR_9->coded_width;
 VAR_10->coded_height = VAR_9->coded_height;
 VAR_10->stride = VAR_9->coded_width *
    VAR_11->bytesperline_mult;

 if (VAR_8->is_stateless) {
  VAR_10->ref_stride = VAR_10->stride;
  return 0;
 }
 VAR_10->ref_stride = VAR_9->coded_width * VAR_11->luma_alpha_step;

 VAR_10->ref_frame.buf = FUNC_3(VAR_14, VAR_2);
 VAR_10->ref_frame.luma = VAR_10->ref_frame.buf;
 VAR_15 = FUNC_3(VAR_8->comp_max_size, VAR_2);

 if (!VAR_10->ref_frame.luma || !VAR_15) {
  FUNC_2(VAR_10->ref_frame.luma);
  FUNC_2(VAR_15);
  FUNC_7(VAR_6, VAR_5);
  return -VAR_1;
 }




 if (VAR_10->compressed_frame) {
  if (VAR_8->comp_size > VAR_8->comp_max_size)
   VAR_8->comp_size = VAR_8->comp_max_size;

  FUNC_4(VAR_15,
         VAR_10->compressed_frame, VAR_8->comp_size);
 }

 FUNC_2(VAR_10->compressed_frame);
 VAR_10->compressed_frame = VAR_15;

 if (VAR_11->components_num < 3) {
  VAR_10->ref_frame.cb = ((void*)0);
  VAR_10->ref_frame.cr = ((void*)0);
  VAR_10->ref_frame.alpha = ((void*)0);
  return 0;
 }

 VAR_10->ref_frame.cb = VAR_10->ref_frame.luma + VAR_12;
 VAR_10->ref_frame.cr = VAR_10->ref_frame.cb + VAR_12 / VAR_13;

 if (VAR_11->components_num == 4)
  VAR_10->ref_frame.alpha =
   VAR_10->ref_frame.cr + VAR_12 / VAR_13;
 else
  VAR_10->ref_frame.alpha = ((void*)0);

 return 0;
}
