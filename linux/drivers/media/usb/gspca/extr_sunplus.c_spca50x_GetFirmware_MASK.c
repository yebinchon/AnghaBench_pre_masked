
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int * usb_buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,scalar_t__,char*,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2)
{
 u8 *VAR_3;

 if (VAR_1 < VAR_0)
  return;

 VAR_3 = VAR_2->usb_buf;
 FUNC_1(VAR_2, 0x20, 0, 5);
 FUNC_0(VAR_2, VAR_0, "FirmWare: %d %d %d %d %d\n",
    VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3], VAR_3[4]);
 FUNC_1(VAR_2, 0x23, 0, 64);
 FUNC_1(VAR_2, 0x23, 1, 64);
}
