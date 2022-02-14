
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long u32 ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {unsigned long q_num; TYPE_4__** qs; TYPE_1__* dev; } ;
struct hnae_ae_ops {unsigned long (* get_regs_len ) (struct hnae_handle*) ;int (* get_regs ) (struct hnae_handle*,unsigned long*) ;} ;
struct TYPE_7__ {int next_to_use; int next_to_clean; } ;
struct TYPE_6__ {int next_to_use; int next_to_clean; } ;
struct TYPE_8__ {TYPE_3__ rx_ring; TYPE_2__ tx_ring; } ;
struct TYPE_5__ {struct hnae_ae_ops* ops; } ;


 int VAR_0 ;
 unsigned long* FUNC_0 (unsigned long,int,int ) ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (char*,unsigned long,unsigned long,...) ;
 unsigned long FUNC_3 (struct hnae_handle*) ;
 int FUNC_4 (struct hnae_handle*,unsigned long*) ;

__attribute__((used)) static void FUNC_5(struct hns_nic_priv *VAR_1)
{
 struct hnae_handle *VAR_2 = VAR_1->ae_handle;
 struct hnae_ae_ops *VAR_3 = VAR_2->dev->ops;
 u32 *VAR_4, VAR_5, VAR_6;

 if (VAR_3->get_regs_len && VAR_3->get_regs) {
  VAR_5 = VAR_3->get_regs_len(VAR_1->ae_handle);
  VAR_5 = (VAR_5 + 3ul) & ~3ul;
  VAR_4 = FUNC_0(VAR_5, sizeof(u32), VAR_0);
  if (VAR_4) {
   VAR_3->get_regs(VAR_1->ae_handle, VAR_4);
   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6 += 4)
    FUNC_2("0x%08x: 0x%08x 0x%08x 0x%08x 0x%08x\n",
     VAR_6, VAR_4[VAR_6], VAR_4[VAR_6 + 1],
     VAR_4[VAR_6 + 2], VAR_4[VAR_6 + 3]);
   FUNC_1(VAR_4);
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->q_num; VAR_6++) {
  FUNC_2("tx_queue%d_next_to_clean:%d\n",
   VAR_6, VAR_2->qs[VAR_6]->tx_ring.next_to_clean);
  FUNC_2("tx_queue%d_next_to_use:%d\n",
   VAR_6, VAR_2->qs[VAR_6]->tx_ring.next_to_use);
  FUNC_2("rx_queue%d_next_to_clean:%d\n",
   VAR_6, VAR_2->qs[VAR_6]->rx_ring.next_to_clean);
  FUNC_2("rx_queue%d_next_to_use:%d\n",
   VAR_6, VAR_2->qs[VAR_6]->rx_ring.next_to_use);
 }
}
