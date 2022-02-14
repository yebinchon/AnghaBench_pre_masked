
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int * usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int) ;
 int FUNC_3 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_1)
{
 FUNC_1(VAR_1, 0x0d05, 2);
 FUNC_0(VAR_1, VAR_0, "ClickSmart310 init 0x0d05 0x%02x 0x%02x\n",
    VAR_1->usb_buf[0], VAR_1->usb_buf[1]);
 FUNC_2(VAR_1, 0x00, 0x8167, 0x5a);
 FUNC_3(VAR_1);

 FUNC_2(VAR_1, 0x00, 0x8168, 0x22);
 FUNC_2(VAR_1, 0x00, 0x816a, 0xc0);
 FUNC_2(VAR_1, 0x00, 0x816b, 0x0b);
 FUNC_2(VAR_1, 0x00, 0x8169, 0x25);
 FUNC_2(VAR_1, 0x00, 0x8157, 0x5b);
 FUNC_2(VAR_1, 0x00, 0x8158, 0x5b);
 FUNC_2(VAR_1, 0x00, 0x813f, 0x03);
 FUNC_2(VAR_1, 0x00, 0x8151, 0x4a);
 FUNC_2(VAR_1, 0x00, 0x8153, 0x78);
 FUNC_2(VAR_1, 0x00, 0x0d01, 0x04);

 FUNC_2(VAR_1, 0x00, 0x0d02, 0x01);
 FUNC_2(VAR_1, 0x00, 0x8169, 0x25);
 FUNC_2(VAR_1, 0x00, 0x0d01, 0x02);
}
