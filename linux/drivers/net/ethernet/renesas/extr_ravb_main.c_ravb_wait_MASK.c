
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
typedef enum ravb_reg { ____Placeholder_ravb_reg } ravb_reg ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (int) ;

int FUNC_2(struct net_device *VAR_1, enum ravb_reg VAR_2, u32 VAR_3, u32 VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 10000; VAR_5++) {
  if ((FUNC_0(VAR_1, VAR_2) & VAR_3) == VAR_4)
   return 0;
  FUNC_1(10);
 }
 return -VAR_0;
}
