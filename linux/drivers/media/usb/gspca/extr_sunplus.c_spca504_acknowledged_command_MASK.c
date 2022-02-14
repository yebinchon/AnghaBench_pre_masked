
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int * usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int) ;
 int FUNC_3 (struct gspca_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_1,
        u8 VAR_2, u16 VAR_3, u16 VAR_4)
{
 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_1, 0x01, 0x0001, 1);
 FUNC_0(VAR_1, VAR_0, "before wait 0x%04x\n",
    VAR_1->usb_buf[0]);
 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_1(200);
 FUNC_2(VAR_1, 0x01, 0x0001, 1);
 FUNC_0(VAR_1, VAR_0, "after wait 0x%04x\n",
    VAR_1->usb_buf[0]);
}
