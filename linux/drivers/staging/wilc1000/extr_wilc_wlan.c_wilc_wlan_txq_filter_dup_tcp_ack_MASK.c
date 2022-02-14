
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct tcp_ack_filter {size_t pending_base; size_t pending_acks_idx; scalar_t__ tcp_session; TYPE_2__* pending_acks; TYPE_1__* ack_session_info; } ;
struct wilc_vif {struct tcp_ack_filter ack_filter; struct wilc* wilc; } ;
struct wilc {int txq_event; int txq_spinlock; } ;
struct txq_entry_t {int status; int priv; int (* tx_complete_func ) (int ,int) ;} ;
struct net_device {int dummy; } ;
struct TYPE_4__ {size_t session_index; size_t ack_num; struct txq_entry_t* txqe; } ;
struct TYPE_3__ {size_t bigger_ack_num; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct txq_entry_t*) ;
 int FUNC_1 (int) ;
 struct wilc_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct wilc*,struct txq_entry_t*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_2)
{
 struct wilc_vif *VAR_3 = FUNC_2(VAR_2);
 struct wilc *VAR_4 = VAR_3->wilc;
 struct tcp_ack_filter *VAR_5 = &VAR_3->ack_filter;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 unsigned long VAR_8;

 FUNC_3(&VAR_4->txq_spinlock, VAR_8);
 for (VAR_6 = VAR_5->pending_base;
      VAR_6 < (VAR_5->pending_base + VAR_5->pending_acks_idx); VAR_6++) {
  u32 VAR_9;
  u32 VAR_10;

  if (VAR_6 >= VAR_0)
   break;

  VAR_9 = VAR_5->pending_acks[VAR_6].session_index;

  if (VAR_9 >= 2 * VAR_1)
   break;

  VAR_10 = VAR_5->ack_session_info[VAR_9].bigger_ack_num;

  if (VAR_5->pending_acks[VAR_6].ack_num < VAR_10) {
   struct txq_entry_t *VAR_11;

   VAR_11 = VAR_5->pending_acks[VAR_6].txqe;
   if (VAR_11) {
    FUNC_7(VAR_4, VAR_11);
    VAR_11->status = 1;
    if (VAR_11->tx_complete_func)
     VAR_11->tx_complete_func(VAR_11->priv,
             VAR_11->status);
    FUNC_0(VAR_11);
    VAR_7++;
   }
  }
 }
 VAR_5->pending_acks_idx = 0;
 VAR_5->tcp_session = 0;

 if (VAR_5->pending_base == 0)
  VAR_5->pending_base = VAR_1;
 else
  VAR_5->pending_base = 0;

 FUNC_4(&VAR_4->txq_spinlock, VAR_8);

 while (VAR_7 > 0) {
  FUNC_6(&VAR_4->txq_event,
         FUNC_1(1));
  VAR_7--;
 }
}
