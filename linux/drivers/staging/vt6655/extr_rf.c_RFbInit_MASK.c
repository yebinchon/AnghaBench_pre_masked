
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int byRFType; int byMaxPwrLevel; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct vnt_private*) ;
 int FUNC_1 (struct vnt_private*) ;

bool FUNC_2(struct vnt_private *VAR_2)
{
 bool VAR_3 = 1;

 switch (VAR_2->byRFType) {
 case 131:
 case 129:
  VAR_2->byMaxPwrLevel = VAR_0;
  VAR_3 = FUNC_0(VAR_2);
  break;
 case 130:
  VAR_2->byMaxPwrLevel = VAR_1;
  VAR_3 = FUNC_1(VAR_2);
  break;
 case 128:
  VAR_3 = 1;
  break;
 default:
  VAR_3 = 0;
  break;
 }
 return VAR_3;
}
