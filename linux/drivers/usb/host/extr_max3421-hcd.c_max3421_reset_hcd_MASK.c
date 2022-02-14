
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct spi_device {int dev; } ;
struct max3421_hcd {int mode; int hien; int frame_number; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 struct max3421_hcd* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct usb_hcd*,int ) ;
 int FUNC_6 (struct usb_hcd*,int ,int) ;
 struct spi_device* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct usb_hcd *VAR_19)
{
 struct spi_device *VAR_20 = FUNC_7(VAR_19->self.controller);
 struct max3421_hcd *VAR_21 = FUNC_3(VAR_19);
 int VAR_22;


 FUNC_6(VAR_19, VAR_14, FUNC_0(VAR_16));

 FUNC_6(VAR_19, VAR_14, 0);
 VAR_22 = 1000;
 while (1) {
  if (FUNC_5(VAR_19, VAR_15)
      & FUNC_0(VAR_17))
   break;
  if (--VAR_22 < 0) {
   FUNC_2(&VAR_20->dev,
    "timed out waiting for oscillator OK signal");
   return 1;
  }
  FUNC_1();
 }





 VAR_21->mode = (FUNC_0(VAR_8) |
        FUNC_0(VAR_9) |
        FUNC_0(VAR_6) |
        FUNC_0(VAR_7));
 FUNC_6(VAR_19, VAR_13, VAR_21->mode);


 VAR_21->frame_number = VAR_18;
 FUNC_6(VAR_19, VAR_11, FUNC_0(VAR_1));


 FUNC_6(VAR_19, VAR_11, FUNC_0(VAR_2));
 FUNC_4(VAR_19);


 VAR_21->hien = (FUNC_0(VAR_5) |
        FUNC_0(VAR_4) |
        FUNC_0(VAR_3));
 FUNC_6(VAR_19, VAR_12, VAR_21->hien);


 FUNC_6(VAR_19, VAR_10, FUNC_0(VAR_0));
 return 1;
}
