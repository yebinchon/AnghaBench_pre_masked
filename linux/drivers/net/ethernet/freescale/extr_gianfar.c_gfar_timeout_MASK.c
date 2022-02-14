
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct gfar_private {int reset_task; } ;


 struct gfar_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct gfar_private *VAR_1 = FUNC_0(VAR_0);

 VAR_0->stats.tx_errors++;
 FUNC_1(&VAR_1->reset_task);
}
