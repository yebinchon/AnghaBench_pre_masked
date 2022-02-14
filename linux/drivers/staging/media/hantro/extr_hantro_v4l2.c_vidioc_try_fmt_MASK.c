
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int pixelformat; int num_planes; int width; int height; TYPE_3__* plane_fmt; int field; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct hantro_fmt {scalar_t__ fourcc; int max_depth; scalar_t__ header_size; int frmsize; } ;
struct TYPE_5__ {int width; int height; } ;
struct hantro_ctx {struct hantro_fmt* vpu_src_fmt; TYPE_2__ src_fmt; struct hantro_fmt* vpu_dst_fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ sizeimage; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hantro_ctx* FUNC_1 (void*) ;
 struct hantro_fmt* FUNC_2 (struct hantro_fmt const*,unsigned int,int) ;
 struct hantro_fmt* FUNC_3 (struct hantro_fmt const*,unsigned int,int) ;
 struct hantro_fmt* FUNC_4 (struct hantro_ctx*,unsigned int*) ;
 int FUNC_5 (struct hantro_ctx*) ;
 int FUNC_6 (int*,int*,int *) ;
 int FUNC_7 (struct v4l2_pix_format_mplane*,scalar_t__,int,int) ;
 int FUNC_8 (int,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4,
     bool VAR_5)
{
 struct hantro_ctx *VAR_6 = FUNC_1(VAR_3);
 struct v4l2_pix_format_mplane *VAR_7 = &VAR_4->fmt.pix_mp;
 const struct hantro_fmt *VAR_8, *VAR_9, *VAR_10;
 unsigned int VAR_11;
 bool VAR_12;

 VAR_12 = VAR_5 == FUNC_5(VAR_6);

 FUNC_8(4, "trying format %c%c%c%c\n",
    (VAR_7->pixelformat & 0x7f),
    (VAR_7->pixelformat >> 8) & 0x7f,
    (VAR_7->pixelformat >> 16) & 0x7f,
    (VAR_7->pixelformat >> 24) & 0x7f);

 VAR_8 = FUNC_4(VAR_6, &VAR_11);
 VAR_9 = FUNC_2(VAR_8, VAR_11, VAR_7->pixelformat);
 if (!VAR_9) {
  VAR_9 = FUNC_3(VAR_8, VAR_11, VAR_12);
  VAR_4->fmt.pix_mp.pixelformat = VAR_9->fourcc;
 }

 if (VAR_12) {
  VAR_7->num_planes = 1;
  VAR_10 = VAR_9;
 } else if (FUNC_5(VAR_6)) {
  VAR_10 = VAR_6->vpu_dst_fmt;
 } else {
  VAR_10 = VAR_6->vpu_src_fmt;




  VAR_7->width = VAR_6->src_fmt.width;
  VAR_7->height = VAR_6->src_fmt.height;
 }

 VAR_7->field = VAR_0;

 FUNC_6(&VAR_7->width, &VAR_7->height,
           &VAR_10->frmsize);

 if (!VAR_12) {

  FUNC_7(VAR_7, VAR_9->fourcc, VAR_7->width,
        VAR_7->height);





  if (VAR_6->vpu_src_fmt->fourcc == VAR_1)
   VAR_7->plane_fmt[0].sizeimage +=
    128 * FUNC_0(VAR_7->width, 16) *
          FUNC_0(VAR_7->height, 16);
 } else if (!VAR_7->plane_fmt[0].sizeimage) {





  VAR_7->plane_fmt[0].sizeimage = VAR_9->header_size +
   VAR_7->width * VAR_7->height * VAR_9->max_depth;
 }

 return 0;
}
