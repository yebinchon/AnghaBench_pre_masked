
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int usb_err; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int *,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_4,
         u16 VAR_5, u16 VAR_6)
{
 int VAR_7;

 if (VAR_4->usb_err < 0)
  return;

 VAR_7 = FUNC_1(VAR_4->dev,
         FUNC_2(VAR_4->dev, 0),
         VAR_0,
         VAR_1 | VAR_3 | VAR_2,
         VAR_6, VAR_5, ((void*)0), 0, 1000);
 if (VAR_7 < 0) {
  FUNC_0("set feature failed sel %#04x param %#04x error %d\n",
         VAR_5, VAR_6, VAR_7);
  VAR_4->usb_err = VAR_7;
 }
}
