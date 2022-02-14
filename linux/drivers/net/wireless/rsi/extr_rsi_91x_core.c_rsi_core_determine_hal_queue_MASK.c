
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct rsi_common {int pkt_cnt; size_t selected_qnum; scalar_t__ min_weight; int * tx_queue; TYPE_1__* tx_qinfo; scalar_t__ hw_data_qs_blocked; int mgmt_q_block; } ;
struct TYPE_2__ {scalar_t__ weight; scalar_t__ pkt_contended; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_0 (struct rsi_common*) ;
 int FUNC_1 (struct rsi_common*,size_t) ;
 int FUNC_2 (struct rsi_common*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static u8 FUNC_4(struct rsi_common *VAR_6)
{
 bool VAR_7 = 0;
 u32 VAR_8 = 0;
 u8 VAR_9 = VAR_0;
 u8 VAR_10 = 0;

 if (FUNC_3(&VAR_6->tx_queue[VAR_1])) {
  VAR_9 = VAR_1;
  return VAR_9;
 }
 if (FUNC_3(&VAR_6->tx_queue[VAR_2])) {
  if (!VAR_6->mgmt_q_block)
   VAR_9 = VAR_2;
  return VAR_9;
 }

 if (VAR_6->hw_data_qs_blocked)
  return VAR_9;

 if (VAR_6->pkt_cnt != 0) {
  --VAR_6->pkt_cnt;
  return VAR_6->selected_qnum;
 }

get_queue_num:
 VAR_7 = 0;

 VAR_9 = FUNC_0(VAR_6);

 VAR_10 = VAR_9;


 for (; VAR_10 < VAR_3; VAR_10++) {
  VAR_8 = FUNC_3(&VAR_6->tx_queue[VAR_10]);
  if (((VAR_6->tx_qinfo[VAR_10].pkt_contended) &&
       (VAR_6->tx_qinfo[VAR_10].weight < VAR_6->min_weight)) &&
        VAR_8) {
   VAR_6->min_weight = VAR_6->tx_qinfo[VAR_10].weight;
   VAR_9 = VAR_10;
  }
 }

 if (VAR_9 < VAR_3)
  VAR_6->tx_qinfo[VAR_9].pkt_contended = 0;


 VAR_7 = FUNC_2(VAR_6);

 VAR_8 = FUNC_3(&VAR_6->tx_queue[VAR_9]);
 if (!VAR_8) {




  if (VAR_7)
   goto get_queue_num;

  VAR_9 = VAR_0;
  return VAR_9;
 }

 VAR_6->selected_qnum = VAR_9;
 VAR_8 = FUNC_3(&VAR_6->tx_queue[VAR_9]);

 if (VAR_9 == VAR_5 || VAR_9 == VAR_4) {
  VAR_6->pkt_cnt = FUNC_1(VAR_6, VAR_9);
  VAR_6->pkt_cnt -= 1;
 }

 return VAR_9;
}
