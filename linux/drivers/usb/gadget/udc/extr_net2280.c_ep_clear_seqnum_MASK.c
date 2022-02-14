
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net2280_ep {size_t num; struct net2280* dev; } ;
struct net2280 {TYPE_1__* plregs; } ;
struct TYPE_2__ {int pl_ep_ctrl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct net2280_ep *VAR_1)
{
 struct net2280 *VAR_2 = VAR_1->dev;
 u32 VAR_3;
 static const u32 VAR_4[9] = { 0, 3, 4, 7, 8, 2, 5, 6, 9 };

 VAR_3 = FUNC_1(&VAR_2->plregs->pl_ep_ctrl) & ~0x1f;
 VAR_3 |= VAR_4[VAR_1->num];
 FUNC_2(VAR_3, &VAR_2->plregs->pl_ep_ctrl);
 VAR_3 |= FUNC_0(VAR_0);
 FUNC_2(VAR_3, &VAR_2->plregs->pl_ep_ctrl);

 return;
}
