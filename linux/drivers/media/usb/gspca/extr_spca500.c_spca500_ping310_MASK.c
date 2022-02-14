
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int * usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 FUNC_1(VAR_1, 0x0d04, 2);
 FUNC_0(VAR_1, VAR_0, "ClickSmart310 ping 0x0d04 0x%02x 0x%02x\n",
    VAR_1->usb_buf[0], VAR_1->usb_buf[1]);
}
