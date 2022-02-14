
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int * usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_1)
{
 FUNC_2(VAR_1, 0, 0x8003, 0x00);


 FUNC_2(VAR_1, 0x00, 0x8000, 0x0004);
 FUNC_1(VAR_1, 0x8000, 1);
 FUNC_0(VAR_1, VAR_0, "stop SPCA500 done reg8000: 0x%2x\n",
    VAR_1->usb_buf[0]);
}
