
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1307 {int type; int rtc; } ;





 int FUNC_0 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct ds1307 *VAR_1)
{
 int VAR_2;

 switch (VAR_1->type) {
 case 130:
 case 129:
 case 128:
  VAR_2 = FUNC_0(VAR_1->rtc, &VAR_0);
  if (VAR_2)
   return VAR_2;
  break;
 default:
  break;
 }

 return 0;
}
