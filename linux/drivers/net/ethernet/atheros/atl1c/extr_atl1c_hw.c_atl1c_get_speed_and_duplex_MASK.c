
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct atl1c_hw {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct atl1c_hw*,int ,int*) ;

int FUNC_1(struct atl1c_hw *VAR_9, u16 *VAR_10, u16 *VAR_11)
{
 int VAR_12;
 u16 VAR_13;


 VAR_12 = FUNC_0(VAR_9, VAR_5, &VAR_13);
 if (VAR_12)
  return VAR_12;

 if (!(VAR_13 & VAR_2))
  return -1;

 switch (VAR_13 & VAR_3) {
 case 130:
  *VAR_10 = VAR_8;
  break;
 case 129:
  *VAR_10 = VAR_7;
  break;
 case 128:
  *VAR_10 = VAR_6;
  break;
 default:
  return -1;
 }

 if (VAR_13 & VAR_1)
  *VAR_11 = VAR_0;
 else
  *VAR_11 = VAR_4;

 return 0;
}
