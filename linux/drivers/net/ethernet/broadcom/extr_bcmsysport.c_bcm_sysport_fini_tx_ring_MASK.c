
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_sysport_tx_ring {scalar_t__ alloc_size; scalar_t__ size; int * cbs; int napi; } ;
struct bcm_sysport_priv {int netdev; struct bcm_sysport_tx_ring* tx_rings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_sysport_priv*,struct bcm_sysport_tx_ring*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct bcm_sysport_priv*,int ,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct bcm_sysport_priv*,int ) ;

__attribute__((used)) static void FUNC_7(struct bcm_sysport_priv *VAR_3,
         unsigned int VAR_4)
{
 struct bcm_sysport_tx_ring *VAR_5 = &VAR_3->tx_rings[VAR_4];
 u32 VAR_6;


 VAR_6 = FUNC_6(VAR_3, VAR_1);
 if (!(VAR_6 & VAR_0))
  FUNC_3(VAR_3->netdev, "TDMA not stopped!\n");





 if (!VAR_5->cbs)
  return;

 FUNC_2(&VAR_5->napi);
 FUNC_5(&VAR_5->napi);

 FUNC_0(VAR_3, VAR_5);

 FUNC_1(VAR_5->cbs);
 VAR_5->cbs = ((void*)0);
 VAR_5->size = 0;
 VAR_5->alloc_size = 0;

 FUNC_4(VAR_3, VAR_2, VAR_3->netdev, "TDMA fini done\n");
}
