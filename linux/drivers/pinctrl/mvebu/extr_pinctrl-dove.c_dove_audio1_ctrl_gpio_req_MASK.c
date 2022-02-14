
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_mpp_ctrl_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mvebu_mpp_ctrl_data*,unsigned int,unsigned long*) ;

__attribute__((used)) static int FUNC_1(struct mvebu_mpp_ctrl_data *VAR_1,
         unsigned VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(VAR_1, VAR_2, &VAR_3);

 switch (VAR_3) {
 case 0x02:
 case 0x0e:
  if (VAR_2 >= 56)
   return 0;
  return -VAR_0;
 case 0x08:
 case 0x0b:
  if (VAR_2 <= 55)
   return 0;
  return -VAR_0;
 case 0x0a:
  return 0;



 }
 return -VAR_0;
}
