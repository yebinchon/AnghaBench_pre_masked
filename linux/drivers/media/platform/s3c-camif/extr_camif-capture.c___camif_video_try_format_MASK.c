
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vp_pix_limits {int min_out_width; int out_width_align; int max_height; int max_sc_out_width; } ;
struct v4l2_rect {unsigned int width; unsigned int height; } ;
struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; int field; int colorspace; int pixelformat; } ;
struct camif_vp {size_t id; struct camif_dev* camif; } ;
struct camif_fmt {int ybpp; int depth; int fourcc; } ;
struct camif_dev {TYPE_1__* variant; struct v4l2_rect camif_crop; } ;
struct TYPE_2__ {struct vp_pix_limits* vp_pix_limits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ,int,unsigned int) ;
 unsigned int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int,int,unsigned int,unsigned int,unsigned int,...) ;
 unsigned int FUNC_5 (unsigned int,int) ;
 struct camif_fmt* FUNC_6 (struct camif_vp*,int *,int ) ;
 int VAR_4 ;
 int FUNC_7 (int*,unsigned int,int ,int,int*,unsigned int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct camif_vp *VAR_5,
        struct v4l2_pix_format *VAR_6,
        const struct camif_fmt **VAR_7)
{
 struct camif_dev *VAR_8 = VAR_5->camif;
 struct v4l2_rect *VAR_9 = &VAR_8->camif_crop;
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;
 const struct vp_pix_limits *VAR_14;
 const struct camif_fmt *VAR_15;

 VAR_15 = FUNC_6(VAR_5, &VAR_6->pixelformat, 0);

 if (FUNC_0(VAR_15 == ((void*)0)))
  return -VAR_0;

 if (VAR_7)
  *VAR_7 = VAR_15;

 VAR_14 = &VAR_8->variant->vp_pix_limits[VAR_5->id];

 FUNC_4("fmt: %ux%u, crop: %ux%u, bytesperline: %u\n",
   VAR_6->width, VAR_6->height, VAR_9->width, VAR_9->height,
   VAR_6->bytesperline);




 VAR_12 = FUNC_3(VAR_1, 1 << (FUNC_1(VAR_9->width) - 3));
 VAR_13 = FUNC_3(VAR_1, 1 << (FUNC_1(VAR_9->height) - 1));

 VAR_10 = FUNC_2(VAR_4, VAR_14->min_out_width, VAR_9->width / VAR_12);
 VAR_10 = FUNC_5(VAR_10, VAR_14->out_width_align);
 VAR_11 = FUNC_2(VAR_4, 8, VAR_9->height / VAR_13);
 VAR_11 = FUNC_5(VAR_11, 8);

 FUNC_7(&VAR_6->width, VAR_10, VAR_14->max_sc_out_width,
         FUNC_1(VAR_14->out_width_align) - 1,
         &VAR_6->height, VAR_11, VAR_14->max_height, 0, 0);

 VAR_6->bytesperline = VAR_6->width * VAR_15->ybpp;
 VAR_6->sizeimage = (VAR_6->width * VAR_6->height * VAR_15->depth) / 8;
 VAR_6->pixelformat = VAR_15->fourcc;
 VAR_6->colorspace = VAR_2;
 VAR_6->field = VAR_3;

 FUNC_4("%ux%u, wmin: %d, hmin: %d, sc_hrmax: %d, sc_vrmax: %d\n",
   VAR_6->width, VAR_6->height, VAR_10, VAR_11, VAR_12, VAR_13);

 return 0;
}
