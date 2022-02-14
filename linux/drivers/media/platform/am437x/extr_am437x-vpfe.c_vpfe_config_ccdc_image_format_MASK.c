
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int field; int pixelformat; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct vpfe_device {int ccdc; TYPE_3__ fmt; int bpp; int crop; } ;
typedef enum ccdc_frmfmt { ____Placeholder_ccdc_frmfmt } ccdc_frmfmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int,struct vpfe_device*,char*,...) ;
 int FUNC_6 (struct vpfe_device*,char*) ;

__attribute__((used)) static int FUNC_7(struct vpfe_device *VAR_5)
{
 enum ccdc_frmfmt VAR_6 = VAR_2;
 int VAR_7 = 0;

 FUNC_5(2, VAR_5, "vpfe_config_ccdc_image_format\n");

 FUNC_5(1, VAR_5, "pixelformat: %s\n",
  FUNC_0(VAR_5->fmt.fmt.pix.pixelformat));

 if (FUNC_4(&VAR_5->ccdc,
   VAR_5->fmt.fmt.pix.pixelformat) < 0) {
  FUNC_6(VAR_5, "couldn't set pix format in ccdc\n");
  return -VAR_4;
 }


 FUNC_3(&VAR_5->ccdc, &VAR_5->crop, VAR_5->bpp);

 switch (VAR_5->fmt.fmt.pix.field) {
 case 130:

  VAR_7 = FUNC_1(
    &VAR_5->ccdc,
    VAR_0);
  break;

 case 129:
  VAR_6 = VAR_3;

  break;

 case 128:
  VAR_7 = FUNC_1(
    &VAR_5->ccdc,
    VAR_1);
  break;

 default:
  return -VAR_4;
 }

 if (VAR_7)
  return VAR_7;

 return FUNC_2(&VAR_5->ccdc, VAR_6);
}
