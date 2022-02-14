
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ bridge; int webcam; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 u8 VAR_3;


 if (VAR_2->bridge != VAR_0) {
  VAR_3 = 0x02;
  FUNC_0(VAR_1, 0x0406, &VAR_3, 1);
 }


 switch (VAR_2->webcam) {
 case 136:
 case 133:
 case 134:
 case 132:
  VAR_3 = 0xff;
  break;
 case 135:
  VAR_3 = 0x21;
  break;
 case 130:
 case 129:
 case 131:
 case 128:
  VAR_3 = 0x01;
  break;
 default:
  return;
 }
 FUNC_0(VAR_1, 0x0404, &VAR_3, 1);
}
