
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_if {int netif_stop; int netif_stop_lock; int ndev; int bsscfgidx; } ;
typedef enum brcmf_netif_stop_reason { ____Placeholder_brcmf_netif_stop_reason } brcmf_netif_stop_reason ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct brcmf_if *VAR_1,
     enum brcmf_netif_stop_reason VAR_2, bool VAR_3)
{
 unsigned long VAR_4;

 if (!VAR_1 || !VAR_1->ndev)
  return;

 FUNC_0(VAR_0, "enter: bsscfgidx=%d stop=0x%X reason=%d state=%d\n",
    VAR_1->bsscfgidx, VAR_1->netif_stop, VAR_2, VAR_3);

 FUNC_3(&VAR_1->netif_stop_lock, VAR_4);
 if (VAR_3) {
  if (!VAR_1->netif_stop)
   FUNC_1(VAR_1->ndev);
  VAR_1->netif_stop |= VAR_2;
 } else {
  VAR_1->netif_stop &= ~VAR_2;
  if (!VAR_1->netif_stop)
   FUNC_2(VAR_1->ndev);
 }
 FUNC_4(&VAR_1->netif_stop_lock, VAR_4);
}
