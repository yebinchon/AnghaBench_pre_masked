
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ravb_private {int addr; } ;
struct net_device {int dummy; } ;
typedef enum ravb_reg { ____Placeholder_ravb_reg } ravb_reg ;


 int FUNC_0 (int ,int) ;
 struct ravb_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_0, u32 VAR_1,
         enum ravb_reg VAR_2)
{
 struct ravb_private *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_3->addr + VAR_2);
}
