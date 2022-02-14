
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct usb_interface {int num_altsetting; } ;
struct TYPE_4__ {int width; } ;
struct TYPE_6__ {TYPE_2__* cam_mode; } ;
struct gspca_dev {int alt; TYPE_1__ pixfmt; int iface; int dev; scalar_t__ curr_mode; TYPE_3__ cam; } ;
struct TYPE_5__ {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 struct usb_interface* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_2)
{
 struct usb_interface *VAR_3;
 u32 VAR_4 = VAR_2->cam.cam_mode[(int)VAR_2->curr_mode].priv;






 if (!(VAR_4 & (VAR_1 | VAR_0))) {
  VAR_3 = FUNC_1(VAR_2->dev, VAR_2->iface);

  if (VAR_3->num_altsetting != 9) {
   FUNC_0("sn9c20x camera with unknown number of alt settings (%d), please report!\n",
    VAR_3->num_altsetting);
   VAR_2->alt = VAR_3->num_altsetting;
   return 0;
  }

  switch (VAR_2->pixfmt.width) {
  case 160:
   VAR_2->alt = 2;
   break;
  case 320:
   VAR_2->alt = 6;
   break;
  default:
   VAR_2->alt = 9;
   break;
  }
 }

 return 0;
}
