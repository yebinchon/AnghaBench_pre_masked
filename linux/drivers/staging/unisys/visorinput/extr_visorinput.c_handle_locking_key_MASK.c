
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int led; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct input_dev*,int,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_3, int VAR_4,
          int VAR_5)
{
 int VAR_6;

 switch (VAR_4) {
 case 130:
  VAR_6 = VAR_0;
  break;
 case 128:
  VAR_6 = VAR_2;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 default:
  VAR_6 = -1;
  return;
 }
 if (FUNC_3(VAR_6, VAR_3->led) != VAR_5) {
  FUNC_1(VAR_3, VAR_4, 1);
  FUNC_2(VAR_3);
  FUNC_1(VAR_3, VAR_4, 0);
  FUNC_2(VAR_3);
  FUNC_0(VAR_6, VAR_3->led);
 }
}
