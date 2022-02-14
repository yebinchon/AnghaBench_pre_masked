
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int bridge; int webcam; } ;
struct gspca_dev {int usb_err; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;

 switch (VAR_4->bridge) {
 case 132:
  switch (VAR_4->webcam) {
  case 128:
   FUNC_0(VAR_3, VAR_2);
   break;
  default:
   FUNC_0(VAR_3, VAR_0);
   break;
  }
  break;
 default:
  switch (VAR_4->webcam) {
  case 131:
  case 130:
  case 129:
   FUNC_0(VAR_3, VAR_1);
   break;
  }
  break;
 }
 return VAR_3->usb_err;
}
