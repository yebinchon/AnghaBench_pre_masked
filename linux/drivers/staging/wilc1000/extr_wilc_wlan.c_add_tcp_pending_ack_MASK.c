
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct tcp_ack_filter {size_t pending_base; size_t pending_acks_idx; TYPE_1__* pending_acks; } ;
struct wilc_vif {struct tcp_ack_filter ack_filter; } ;
struct txq_entry_t {size_t ack_idx; } ;
struct TYPE_2__ {size_t ack_num; size_t session_index; struct txq_entry_t* txqe; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct wilc_vif *VAR_1, u32 VAR_2,
           u32 VAR_3,
           struct txq_entry_t *VAR_4)
{
 struct tcp_ack_filter *VAR_5 = &VAR_1->ack_filter;
 u32 VAR_6 = VAR_5->pending_base + VAR_5->pending_acks_idx;

 if (VAR_6 < VAR_0) {
  VAR_5->pending_acks[VAR_6].ack_num = VAR_2;
  VAR_5->pending_acks[VAR_6].txqe = VAR_4;
  VAR_5->pending_acks[VAR_6].session_index = VAR_3;
  VAR_4->ack_idx = VAR_6;
  VAR_5->pending_acks_idx++;
 }
}
