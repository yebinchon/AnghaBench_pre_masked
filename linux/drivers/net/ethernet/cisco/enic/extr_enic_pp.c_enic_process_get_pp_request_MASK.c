
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct enic {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,struct enic*,int ,int*) ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;

int FUNC_1(struct enic *VAR_9, int VAR_10,
 int VAR_11, u16 *VAR_12)
{
 int VAR_13, VAR_14 = 131;

 switch (VAR_11) {

 case 128:
 case 130:
  FUNC_0(VAR_10, VAR_13, VAR_9,
   VAR_8, &VAR_14);
  break;

 case 129:
  FUNC_0(VAR_10, VAR_13, VAR_9,
   VAR_7, &VAR_14);
  break;

 default:
  return -VAR_0;
 }

 if (VAR_13)
  VAR_14 = VAR_13;

 switch (VAR_14) {
 case 131:
  *VAR_12 = VAR_6;
  break;
 case 133:
  *VAR_12 = VAR_5;
  break;
 case 135:
  *VAR_12 = VAR_1;
  break;
 case 132:
  *VAR_12 = VAR_4;
  break;
 case 134:
  *VAR_12 = VAR_3;
  break;
 default:
  *VAR_12 = VAR_2;
  break;
 }

 return 0;
}
