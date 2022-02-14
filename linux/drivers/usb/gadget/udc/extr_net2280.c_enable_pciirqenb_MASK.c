
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net2280_ep {size_t num; TYPE_2__* dev; } ;
struct TYPE_4__ {int quirks; TYPE_1__* regs; } ;
struct TYPE_3__ {int pciirqenb0; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct net2280_ep *VAR_2)
{
 u32 VAR_3 = FUNC_1(&VAR_2->dev->regs->pciirqenb0);

 if (VAR_2->dev->quirks & VAR_0)
  VAR_3 |= FUNC_0(VAR_2->num);
 else
  VAR_3 |= FUNC_0(VAR_1[VAR_2->num]);
 FUNC_2(VAR_3, &VAR_2->dev->regs->pciirqenb0);

 return;
}
