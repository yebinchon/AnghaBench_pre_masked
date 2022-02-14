
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {scalar_t__ usb_err; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,char*) ;
 int FUNC_1 (struct gspca_dev*,int const,int const,int,int,int ) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_3,
   s32 VAR_4, s32 VAR_5)
{

 u16 VAR_6 = (u16)VAR_5;
 u16 VAR_7 = 224+(VAR_6-14)*(768-224)/(33-14);
 u16 VAR_8 = 0x0100|(0x00FF&VAR_7);
 u16 VAR_9 = (0xFF00&VAR_7)>>8;


 u16 VAR_10 = (u16)VAR_4;
 u16 VAR_11 = (524*(150-(VAR_10-1)))/150;

 const u8 VAR_12 =
  VAR_0 | VAR_2 | VAR_1;
 const u8 VAR_13 = 0x18;

 FUNC_1(VAR_3,
  VAR_12, VAR_13, VAR_9, VAR_8, 0);
 if (VAR_3->usb_err < 0)
  FUNC_0(VAR_3, "usb error in setexposure(gain) sequence\n");

 FUNC_1(VAR_3,
  VAR_12, VAR_13, (VAR_11<<4), 0x6300, 0);
 if (VAR_3->usb_err < 0)
  FUNC_0(VAR_3, "usb error in setexposure(time) sequence\n");
}
