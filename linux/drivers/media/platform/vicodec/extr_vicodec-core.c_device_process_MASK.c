
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct vicodec_q_data {int sizeimage; int info; } ;
struct vicodec_dev {int v4l2_dev; } ;
struct TYPE_8__ {int flags; int size; } ;
struct TYPE_7__ {int * buf; } ;
struct v4l2_fwht_state {TYPE_4__ header; int info; TYPE_3__ ref_frame; int ref_frame_ts; int * compressed_frame; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct vicodec_ctx {unsigned int comp_max_size; struct v4l2_fwht_state state; scalar_t__ is_stateless; scalar_t__ is_enc; TYPE_2__ fh; int hdl; struct vicodec_dev* dev; } ;
struct TYPE_5__ {struct media_request* req; } ;
struct vb2_buffer {scalar_t__ state; TYPE_1__ req_obj; } ;
struct vb2_v4l2_buffer {int flags; struct vb2_buffer vb2_buf; } ;
struct vb2_queue {struct vb2_buffer** bufs; } ;
struct media_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int ,struct v4l2_fwht_state*) ;
 struct vicodec_q_data* FUNC_1 (struct vicodec_ctx*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vicodec_ctx*) ;
 int FUNC_5 (struct media_request*,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct v4l2_fwht_state*,int *,int *) ;
 int FUNC_8 (struct v4l2_fwht_state*,int *,int *) ;
 struct vb2_queue* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct vb2_queue*,int ,int ) ;
 int FUNC_11 (struct vb2_buffer*,int ) ;
 void* FUNC_12 (struct vb2_buffer*,int ) ;
 int FUNC_13 (struct vb2_buffer*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct vicodec_ctx *VAR_8,
     struct vb2_v4l2_buffer *VAR_9,
     struct vb2_v4l2_buffer *VAR_10)
{
 struct vicodec_dev *VAR_11 = VAR_8->dev;
 struct v4l2_fwht_state *VAR_12 = &VAR_8->state;
 u8 *VAR_13, *VAR_14;
 int VAR_15 = 0;

 if (VAR_8->is_enc || VAR_8->is_stateless)
  VAR_13 = FUNC_12(&VAR_9->vb2_buf, 0);
 else
  VAR_13 = VAR_12->compressed_frame;

 if (VAR_8->is_stateless) {
  struct media_request *VAR_16 = VAR_9->vb2_buf.req_obj.req;

  VAR_15 = FUNC_5(VAR_16, &VAR_8->hdl);
  if (VAR_15)
   return VAR_15;
  FUNC_4(VAR_8);

  VAR_8->state.header.size =
   FUNC_2(FUNC_11(&VAR_9->vb2_buf, 0));




  if (!(FUNC_3(VAR_8->state.header.flags) & VAR_2)) {
   struct vb2_buffer *VAR_17;
   int VAR_18;
   struct vb2_queue *VAR_19 =
    FUNC_9(VAR_8->fh.m2m_ctx,
      VAR_5);

   VAR_18 = FUNC_10(VAR_19,
        VAR_8->state.ref_frame_ts, 0);
   if (VAR_18 < 0)
    return -VAR_1;

   VAR_17 = VAR_19->bufs[VAR_18];
   if (VAR_17->state == VAR_7)
    VAR_15 = -VAR_1;
   VAR_8->state.ref_frame.buf =
    FUNC_12(VAR_17, 0);
  } else {
   VAR_8->state.ref_frame.buf = ((void*)0);
  }
 }
 VAR_14 = FUNC_12(&VAR_10->vb2_buf, 0);
 if (!VAR_13 || !VAR_14) {
  FUNC_6(&VAR_11->v4l2_dev,
    "Acquiring kernel pointers to buffers failed\n");
  return -VAR_0;
 }

 if (VAR_8->is_enc) {
  struct vicodec_q_data *VAR_20;
  int VAR_21;

  VAR_20 = FUNC_1(VAR_8, VAR_6);
  VAR_12->info = VAR_20->info;
  VAR_21 = FUNC_8(VAR_12, VAR_13, VAR_14);
  if (VAR_21 < 0)
   return VAR_21;
  FUNC_13(&VAR_10->vb2_buf, 0, VAR_21);
 } else {
  struct vicodec_q_data *VAR_22;
  unsigned int VAR_23 = FUNC_3(VAR_8->state.header.size);

  VAR_22 = FUNC_1(VAR_8, VAR_5);
  if (VAR_23 > VAR_8->comp_max_size)
   return -VAR_1;
  VAR_12->info = VAR_22->info;
  VAR_15 = FUNC_7(VAR_12, VAR_13, VAR_14);
  if (VAR_15 < 0)
   return VAR_15;
  if (!VAR_8->is_stateless)
   FUNC_0(VAR_14, VAR_8->state.info, &VAR_8->state);

  FUNC_13(&VAR_10->vb2_buf, 0, VAR_22->sizeimage);
  if (FUNC_3(VAR_8->state.header.flags) & VAR_2)
   VAR_10->flags |= VAR_3;
  else
   VAR_10->flags |= VAR_4;
 }
 return VAR_15;
}
