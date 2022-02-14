
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {unsigned int width; } ;
struct gspca_dev {int usb_err; TYPE_1__ pixfmt; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_1 (struct gspca_dev*,char*,unsigned int) ;
 int FUNC_2 (struct gspca_dev*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_3, s32 VAR_4)
{
 u16 VAR_5;
 unsigned int VAR_6 = VAR_3->pixfmt.width;

 if (VAR_6 == 800)
  VAR_5 = VAR_4 * 5;
 else if (VAR_6 == 1600)
  VAR_5 = VAR_4 * 3;
 else if (VAR_6 == 3264)
  VAR_5 = VAR_4 * 3 / 2;
 else {
  FUNC_1(VAR_3, "Invalid width %u\n", VAR_6);
  VAR_3->usb_err = -VAR_1;
  return;
 }
 FUNC_0(VAR_3, VAR_0, "exposure: 0x%04X ms\n\n", VAR_5);


 FUNC_2(VAR_3, VAR_5, VAR_2);
 FUNC_2(VAR_3, VAR_5, VAR_2);
}
