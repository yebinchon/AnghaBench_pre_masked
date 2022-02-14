
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ravb_private {int addr; } ;
struct net_device {int dummy; } ;
typedef enum ravb_reg { ____Placeholder_ravb_reg } ravb_reg ;


 int FUNC_0 (int) ;
 struct ravb_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline u32 FUNC_2(struct net_device *VAR_0, enum ravb_reg VAR_1)
{
 struct ravb_private *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->addr + VAR_1);
}
