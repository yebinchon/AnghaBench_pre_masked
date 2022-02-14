
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_rb_allocator {int req_pending; } ;
struct iwl_trans_pcie {struct iwl_rb_allocator rba; struct iwl_rxq* rxq; } ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_4__ {scalar_t__ poll; } ;
struct iwl_rxq {int read; int queue_size; int used_count; TYPE_2__ napi; int lock; int * cr_tail; int id; int bd; } ;
struct iwl_rx_mem_buffer {int dummy; } ;
struct TYPE_3__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_trans*,char*,int ,int,...) ;
 int FUNC_1 (struct iwl_trans*,char*,int) ;
 scalar_t__ VAR_1 ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct iwl_trans*,struct iwl_rxq*) ;
 struct iwl_rx_mem_buffer* FUNC_7 (struct iwl_trans*,struct iwl_rxq*,int) ;
 int FUNC_8 (struct iwl_trans*,struct iwl_rxq*) ;
 int FUNC_9 (struct iwl_trans*,struct iwl_rxq*,struct iwl_rx_mem_buffer*,int,int) ;
 int FUNC_10 (struct iwl_rxq*,struct iwl_rb_allocator*) ;
 int FUNC_11 (struct iwl_trans*,int ,struct iwl_rxq*) ;
 int FUNC_12 (struct iwl_trans*,struct iwl_rxq*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(struct iwl_trans *VAR_3, int VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_2(VAR_3);
 struct iwl_rxq *VAR_6;
 u32 VAR_7, VAR_8, VAR_9 = 0;
 bool VAR_10 = 0;

 if (FUNC_3(!VAR_5->rxq || !VAR_5->rxq[VAR_4].bd))
  return;

 VAR_6 = &VAR_5->rxq[VAR_4];

restart:
 FUNC_15(&VAR_6->lock);


 VAR_7 = FUNC_13(FUNC_6(VAR_3, VAR_6)) & 0x0FFF;
 VAR_8 = VAR_6->read;


 VAR_7 &= (VAR_6->queue_size - 1);


 if (VAR_8 == VAR_7)
  FUNC_0(VAR_3, "Q %d: HW = SW = %d\n", VAR_6->id, VAR_7);

 while (VAR_8 != VAR_7) {
  struct iwl_rb_allocator *VAR_11 = &VAR_5->rba;
  struct iwl_rx_mem_buffer *VAR_12;

  u32 VAR_13 =
   FUNC_4(&VAR_5->rba.req_pending) *
   VAR_2;

  if (FUNC_17(VAR_13 >= VAR_6->queue_size / 2 &&
        !VAR_10)) {
   FUNC_10(VAR_6, VAR_11);
   VAR_10 = 1;
   FUNC_1(VAR_3,
          "RX path is in emergency. Pending allocations %d\n",
          VAR_13);
  }

  FUNC_0(VAR_3, "Q %d: HW = %d, SW = %d\n", VAR_6->id, VAR_7, VAR_8);

  VAR_12 = FUNC_7(VAR_3, VAR_6, VAR_8);
  if (!VAR_12)
   goto out;

  FUNC_9(VAR_3, VAR_6, VAR_12, VAR_10, VAR_8);

  VAR_8 = (VAR_8 + 1) & (VAR_6->queue_size - 1);
  if (VAR_6->used_count >= VAR_2)
   FUNC_8(VAR_3, VAR_6);

  if (VAR_6->used_count % VAR_2 == 0 && !VAR_10) {

   FUNC_10(VAR_6, VAR_11);
  } else if (VAR_10) {
   VAR_9++;
   if (VAR_9 == 8) {
    VAR_9 = 0;
    if (VAR_13 < VAR_6->queue_size / 3) {
     FUNC_1(VAR_3,
            "RX path exited emergency. Pending allocations %d\n",
            VAR_13);
     VAR_10 = 0;
    }

    VAR_6->read = VAR_8;
    FUNC_16(&VAR_6->lock);
    FUNC_11(VAR_3, VAR_0, VAR_6);
    FUNC_12(VAR_3, VAR_6);
    goto restart;
   }
  }
 }
out:

 VAR_6->read = VAR_8;

 if (VAR_3->trans_cfg->device_family >= VAR_1)
  *VAR_6->cr_tail = FUNC_5(VAR_7);
 FUNC_16(&VAR_6->lock);
 if (FUNC_17(VAR_10 && VAR_9))
  FUNC_11(VAR_3, VAR_0, VAR_6);

 if (VAR_6->napi.poll)
  FUNC_14(&VAR_6->napi, 0);

 FUNC_12(VAR_3, VAR_6);
}
