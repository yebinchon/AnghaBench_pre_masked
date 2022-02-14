
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct qed_ll2_tx_packet {size_t bd_used; TYPE_1__* bds_set; } ;
struct TYPE_4__ {size_t cur_send_frag_num; int lock; struct qed_ll2_tx_packet* cur_send_packet; } ;
struct qed_ll2_info {TYPE_2__ tx_queue; } ;
struct qed_hwfn {int dummy; } ;
struct core_tx_bd {int nbytes; int addr; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {size_t frag_len; int tx_frag; struct core_tx_bd* txq_bd; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (size_t) ;
 struct qed_ll2_info* FUNC_2 (struct qed_hwfn*,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ll2_info*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(void *VAR_1,
          u8 VAR_2,
          dma_addr_t VAR_3, u16 VAR_4)
{
 struct qed_ll2_tx_packet *VAR_5 = ((void*)0);
 struct qed_hwfn *VAR_6 = VAR_1;
 struct qed_ll2_info *VAR_7 = ((void*)0);
 u16 VAR_8 = 0;
 struct core_tx_bd *VAR_9;
 unsigned long VAR_10;

 VAR_7 = FUNC_2(VAR_6, VAR_2);
 if (!VAR_7)
  return -VAR_0;

 if (!VAR_7->tx_queue.cur_send_packet)
  return -VAR_0;

 VAR_5 = VAR_7->tx_queue.cur_send_packet;
 VAR_8 = VAR_7->tx_queue.cur_send_frag_num;

 if (VAR_8 >= VAR_5->bd_used)
  return -VAR_0;


 VAR_9 = VAR_5->bds_set[VAR_8].txq_bd;
 FUNC_0(VAR_9->addr, VAR_3);
 VAR_9->nbytes = FUNC_1(VAR_4);
 VAR_5->bds_set[VAR_8].tx_frag = VAR_3;
 VAR_5->bds_set[VAR_8].frag_len = VAR_4;

 VAR_7->tx_queue.cur_send_frag_num++;

 FUNC_4(&VAR_7->tx_queue.lock, VAR_10);
 FUNC_3(VAR_6, VAR_7);
 FUNC_5(&VAR_7->tx_queue.lock, VAR_10);

 return 0;
}
