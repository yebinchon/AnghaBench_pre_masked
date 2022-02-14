
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int vstart; scalar_t__ hstart; } ;
struct gspca_dev {scalar_t__ usb_err; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct gspca_dev*,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 FUNC_1(VAR_1, VAR_0, FUNC_0(VAR_0));
 if (VAR_1->usb_err < 0)
  FUNC_2("HV7131R Sensor initialization failed\n");

 VAR_2->hstart = 0;
 VAR_2->vstart = 1;
}
