
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_sysport_tx_ring {int lock; } ;
struct bcm_sysport_priv {int dummy; } ;


 int FUNC_0 (struct bcm_sysport_priv*,struct bcm_sysport_tx_ring*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct bcm_sysport_priv *VAR_0,
     struct bcm_sysport_tx_ring *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_1->lock, VAR_2);
}
