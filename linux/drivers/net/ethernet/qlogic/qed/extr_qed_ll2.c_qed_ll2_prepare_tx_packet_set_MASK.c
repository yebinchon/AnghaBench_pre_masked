
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qed_ll2_tx_queue {size_t cur_send_frag_num; struct qed_ll2_tx_packet* cur_send_packet; } ;
struct qed_ll2_tx_pkt_info {int first_frag_len; int first_frag; int num_of_bds; int cookie; } ;
struct qed_ll2_tx_packet {TYPE_1__* bds_set; int notify_fw; int bd_used; int cookie; int list_entry; } ;
struct qed_hwfn {int dummy; } ;
struct TYPE_2__ {int frag_len; int tx_frag; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_0,
       struct qed_ll2_tx_queue *VAR_1,
       struct qed_ll2_tx_packet *VAR_2,
       struct qed_ll2_tx_pkt_info *VAR_3,
       u8 VAR_4)
{
 FUNC_0(&VAR_2->list_entry);
 VAR_2->cookie = VAR_3->cookie;
 VAR_2->bd_used = VAR_3->num_of_bds;
 VAR_2->notify_fw = VAR_4;
 VAR_1->cur_send_packet = VAR_2;
 VAR_1->cur_send_frag_num = 0;

 VAR_2->bds_set[VAR_1->cur_send_frag_num].tx_frag = VAR_3->first_frag;
 VAR_2->bds_set[VAR_1->cur_send_frag_num].frag_len = VAR_3->first_frag_len;
 VAR_1->cur_send_frag_num++;
}
