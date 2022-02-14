
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
typedef enum ravb_reg { ____Placeholder_ravb_reg } ravb_reg ;


 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int,int) ;

void FUNC_2(struct net_device *VAR_0, enum ravb_reg VAR_1, u32 VAR_2,
   u32 VAR_3)
{
 FUNC_1(VAR_0, (FUNC_0(VAR_0, VAR_1) & ~VAR_2) | VAR_3, VAR_1);
}
