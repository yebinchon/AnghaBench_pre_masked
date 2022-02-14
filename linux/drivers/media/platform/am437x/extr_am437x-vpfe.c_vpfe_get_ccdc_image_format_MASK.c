
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpfe_device {int ccdc; } ;
struct v4l2_rect {int height; int width; } ;
struct TYPE_3__ {int height; int bytesperline; int sizeimage; int field; int pixelformat; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; int type; } ;
typedef enum ccdc_frmfmt { ____Placeholder_ccdc_frmfmt } ccdc_frmfmt ;
typedef enum ccdc_buftype { ____Placeholder_ccdc_buftype } ccdc_buftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct v4l2_format*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct v4l2_rect*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vpfe_device*,char*) ;

__attribute__((used)) static int FUNC_7(struct vpfe_device *VAR_9,
          struct v4l2_format *VAR_10)
{
 struct v4l2_rect VAR_11;
 enum ccdc_buftype VAR_12;
 enum ccdc_frmfmt VAR_13;

 FUNC_0(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->type = VAR_5;
 FUNC_3(&VAR_9->ccdc, &VAR_11);
 VAR_10->fmt.pix.width = VAR_11.width;
 VAR_10->fmt.pix.height = VAR_11.height;
 VAR_10->fmt.pix.bytesperline = FUNC_4(&VAR_9->ccdc);
 VAR_10->fmt.pix.sizeimage = VAR_10->fmt.pix.bytesperline *
    VAR_10->fmt.pix.height;
 VAR_12 = FUNC_1(&VAR_9->ccdc);
 VAR_10->fmt.pix.pixelformat = FUNC_5(&VAR_9->ccdc);
 VAR_13 = FUNC_2(&VAR_9->ccdc);

 if (VAR_13 == VAR_3) {
  VAR_10->fmt.pix.field = VAR_7;
 } else if (VAR_13 == VAR_2) {
  if (VAR_12 == VAR_0) {
   VAR_10->fmt.pix.field = VAR_6;
   } else if (VAR_12 == VAR_1) {
   VAR_10->fmt.pix.field = VAR_8;
  } else {
   FUNC_6(VAR_9, "Invalid buf_type\n");
   return -VAR_4;
  }
 } else {
  FUNC_6(VAR_9, "Invalid frm_fmt\n");
  return -VAR_4;
 }
 return 0;
}
