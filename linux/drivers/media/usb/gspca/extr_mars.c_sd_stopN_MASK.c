
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int illum_bottom; int illum_top; } ;
struct gspca_dev {int* usb_buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 if (FUNC_3(VAR_1->illum_top) ||
     FUNC_3(VAR_1->illum_bottom)) {
  FUNC_2(VAR_0, 0, 0);
  FUNC_0(20);
 }

 VAR_0->usb_buf[0] = 1;
 VAR_0->usb_buf[1] = 0;
 FUNC_1(VAR_0, 2);
}
