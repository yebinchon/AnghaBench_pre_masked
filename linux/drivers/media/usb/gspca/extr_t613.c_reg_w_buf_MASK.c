
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct gspca_dev {int dev; int * usb_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*,scalar_t__,int ) ;
 int FUNC_2 (int *,int const*,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ,int,int,int ,int *,scalar_t__,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct gspca_dev *VAR_5,
    const u8 *VAR_6, u16 VAR_7)
{
 if (VAR_7 <= VAR_1) {
  FUNC_2(VAR_5->usb_buf, VAR_6, VAR_7);
  FUNC_4(VAR_5->dev,
    FUNC_5(VAR_5->dev, 0),
    0,
      VAR_2 | VAR_4 | VAR_3,
    0x01, 0,
    VAR_5->usb_buf, VAR_7, 500);
 } else {
  u8 *VAR_8;

  VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_0);
  if (!VAR_8) {
   FUNC_3("Out of memory\n");
   return;
  }
  FUNC_4(VAR_5->dev,
    FUNC_5(VAR_5->dev, 0),
    0,
      VAR_2 | VAR_4 | VAR_3,
    0x01, 0,
    VAR_8, VAR_7, 500);
  FUNC_0(VAR_8);
 }
}
