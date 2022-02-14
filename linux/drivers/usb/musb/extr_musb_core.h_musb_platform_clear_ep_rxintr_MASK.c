
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct musb {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* clear_ep_rxintr ) (struct musb*,int) ;} ;


 int FUNC_0 (struct musb*,int) ;

__attribute__((used)) static inline void FUNC_1(struct musb *VAR_0, int VAR_1)
{
 if (VAR_0->ops->clear_ep_rxintr)
  VAR_0->ops->clear_ep_rxintr(VAR_0, VAR_1);
}
