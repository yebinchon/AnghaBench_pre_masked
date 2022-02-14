
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int tx_zerocopy_fail; int tx_zerocopy_success; } ;
struct xenvif_queue {scalar_t__ dealloc_prod; scalar_t__ dealloc_cons; TYPE_1__ stats; int callback_lock; int * dealloc_ring; } ;
struct ubuf_info {scalar_t__ ctx; int desc; } ;
typedef size_t pending_ring_idx_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct xenvif_queue* FUNC_6 (struct ubuf_info*) ;
 int FUNC_7 (struct xenvif_queue*) ;

void FUNC_8(struct ubuf_info *VAR_1, bool VAR_2)
{
 unsigned long VAR_3;
 pending_ring_idx_t VAR_4;
 struct xenvif_queue *VAR_5 = FUNC_6(VAR_1);




 FUNC_4(&VAR_5->callback_lock, VAR_3);
 do {
  u16 VAR_6 = VAR_1->desc;
  VAR_1 = (struct ubuf_info *) VAR_1->ctx;
  FUNC_0(VAR_5->dealloc_prod - VAR_5->dealloc_cons >=
   VAR_0);
  VAR_4 = FUNC_2(VAR_5->dealloc_prod);
  VAR_5->dealloc_ring[VAR_4] = VAR_6;



  FUNC_3();
  VAR_5->dealloc_prod++;
 } while (VAR_1);
 FUNC_5(&VAR_5->callback_lock, VAR_3);

 if (FUNC_1(VAR_2))
  VAR_5->stats.tx_zerocopy_success++;
 else
  VAR_5->stats.tx_zerocopy_fail++;
 FUNC_7(VAR_5);
}
