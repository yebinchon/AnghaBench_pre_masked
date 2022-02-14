
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int usb_err; int * usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int) ;
 int FUNC_3 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_1)
{
 FUNC_3(VAR_1, 0x00, 0x0001, 0x2067);
 FUNC_3(VAR_1, 0x00, 0x00d0, 0x206b);
 FUNC_3(VAR_1, 0x00, 0x0000, 0x206c);
 FUNC_3(VAR_1, 0x00, 0x0001, 0x2069);
 FUNC_1(8);
 FUNC_3(VAR_1, 0x00, 0x00c0, 0x206b);
 FUNC_3(VAR_1, 0x00, 0x0000, 0x206c);
 FUNC_3(VAR_1, 0x00, 0x0001, 0x2069);

 FUNC_2(VAR_1, 0x20, 0x0000, 1);
 FUNC_2(VAR_1, 0x20, 0x0000, 5);
 FUNC_2(VAR_1, 0x23, 0x0000, 64);
 FUNC_0(VAR_1, VAR_0, "%s%s\n", &VAR_1->usb_buf[0x1c],
    &VAR_1->usb_buf[0x30]);
 FUNC_2(VAR_1, 0x23, 0x0001, 64);
 return VAR_1->usb_err;
}
