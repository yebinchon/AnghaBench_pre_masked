
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vp_pix_limits {int out_width_align; } ;
struct v4l2_rect {int height; int width; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int height; int width; } ;
struct s3c_camif_variant {struct vp_pix_limits* vp_pix_limits; } ;
struct camif_dev {int subdev; struct v4l2_rect camif_crop; struct s3c_camif_variant* variant; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int *,char*,int ,int ) ;
 int FUNC_3 (int *,int,int ,scalar_t__,int *,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct camif_dev *VAR_6,
    struct v4l2_mbus_framefmt *VAR_7, int VAR_8)
{
 const struct s3c_camif_variant *VAR_9 = VAR_6->variant;
 const struct vp_pix_limits *VAR_10;
 unsigned int VAR_11;


 VAR_10 = &VAR_9->vp_pix_limits[VAR_3];

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++)
  if (VAR_4[VAR_11] == VAR_7->code)
   break;

 if (VAR_11 == FUNC_0(VAR_4))
  VAR_7->code = VAR_4[0];

 if (VAR_8 == VAR_2) {
  FUNC_3(&VAR_7->width, 8, VAR_1,
          FUNC_1(VAR_10->out_width_align) - 1,
          &VAR_7->height, 8, VAR_0, 0,
          0);
 } else {
  struct v4l2_rect *VAR_12 = &VAR_6->camif_crop;
  FUNC_3(&VAR_7->width, 8, VAR_12->width,
          FUNC_1(VAR_10->out_width_align) - 1,
          &VAR_7->height, 8, VAR_12->height,
          0, 0);
 }

 FUNC_2(1, VAR_5, &VAR_6->subdev, "%ux%u\n", VAR_7->width, VAR_7->height);
}
