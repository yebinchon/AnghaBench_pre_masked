
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct atl1_tpd_ring {size_t count; int next_to_clean; struct atl1_buffer* buffer_info; } ;
struct atl1_buffer {int * skb; scalar_t__ dma; int length; } ;
struct TYPE_4__ {TYPE_1__* cmb; } ;
struct atl1_adapter {int netdev; int pdev; TYPE_2__ cmb; struct atl1_tpd_ring tpd_ring; } ;
struct TYPE_3__ {int tpd_cons_idx; } ;


 int VAR_0 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct atl1_adapter *VAR_1)
{
 struct atl1_tpd_ring *VAR_2 = &VAR_1->tpd_ring;
 struct atl1_buffer *VAR_3;
 u16 VAR_4;
 u16 VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_0(&VAR_2->next_to_clean);
 VAR_5 = FUNC_3(VAR_1->cmb.cmb->tpd_cons_idx);

 while (VAR_5 != VAR_4) {
  VAR_3 = &VAR_2->buffer_info[VAR_4];
  if (VAR_3->dma) {
   FUNC_7(VAR_1->pdev, VAR_3->dma,
           VAR_3->length, VAR_0);
   VAR_3->dma = 0;
  }

  if (VAR_3->skb) {
   FUNC_2(VAR_3->skb);
   VAR_3->skb = ((void*)0);
  }

  if (++VAR_4 == VAR_2->count)
   VAR_4 = 0;

  VAR_6++;
 }
 FUNC_1(&VAR_2->next_to_clean, VAR_4);

 if (FUNC_5(VAR_1->netdev) &&
     FUNC_4(VAR_1->netdev))
  FUNC_6(VAR_1->netdev);

 return VAR_6;
}
