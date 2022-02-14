
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct xge_pdata {TYPE_1__ resources; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ,struct xge_pdata*) ;
 struct xge_pdata* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct xge_pdata *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->resources.irq, VAR_1);
}
