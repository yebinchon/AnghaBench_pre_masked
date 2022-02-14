
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct xenvif_queue {scalar_t__* grant_tx_handle; TYPE_1__* vif; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,size_t) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct xenvif_queue *VAR_1,
          u16 VAR_2)
{
 if (FUNC_2(VAR_1->grant_tx_handle[VAR_2] ==
       VAR_0)) {
  FUNC_1(VAR_1->vif->dev,
      "Trying to unmap invalid handle! pending_idx: 0x%x\n",
      VAR_2);
  FUNC_0();
 }
 VAR_1->grant_tx_handle[VAR_2] = VAR_0;
}
