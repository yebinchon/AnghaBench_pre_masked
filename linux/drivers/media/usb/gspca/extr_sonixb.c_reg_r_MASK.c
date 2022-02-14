
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct gspca_dev {int usb_err; scalar_t__* usb_buf; TYPE_1__ v4l2_dev; int dev; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,scalar_t__*,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_3,
    __u16 VAR_4)
{
 int VAR_5;

 if (VAR_3->usb_err < 0)
  return;

 VAR_5 = FUNC_1(VAR_3->dev,
   FUNC_2(VAR_3->dev, 0),
   0,
   VAR_0 | VAR_2 | VAR_1,
   VAR_4,
   0,
   VAR_3->usb_buf, 1,
   500);

 if (VAR_5 < 0) {
  FUNC_0(VAR_3->v4l2_dev.dev,
   "Error reading register %02x: %d\n", VAR_4, VAR_5);
  VAR_3->usb_err = VAR_5;




  VAR_3->usb_buf[0] = 0;
 }
}
