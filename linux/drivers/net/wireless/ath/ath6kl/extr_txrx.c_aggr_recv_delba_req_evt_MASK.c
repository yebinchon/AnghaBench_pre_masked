
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rxtid {scalar_t__ aggr; } ;
struct ath6kl_vif {scalar_t__ nw_type; TYPE_1__* aggr_cntxt; int ar; } ;
struct ath6kl_sta {struct aggr_info_conn* aggr_conn; } ;
struct aggr_info_conn {struct rxtid* rx_tid; } ;
struct TYPE_2__ {struct aggr_info_conn* aggr_conn; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct aggr_info_conn*,size_t) ;
 struct ath6kl_sta* FUNC_1 (int ,size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;

void FUNC_4(struct ath6kl_vif *VAR_2, u8 VAR_3)
{
 struct ath6kl_sta *VAR_4;
 struct rxtid *VAR_5;
 struct aggr_info_conn *VAR_6 = ((void*)0);
 u8 VAR_7, VAR_8;

 if (VAR_2->nw_type == VAR_0) {
  VAR_8 = FUNC_2(VAR_3);
  VAR_4 = FUNC_1(VAR_2->ar, VAR_8);
  if (VAR_4)
   VAR_6 = VAR_4->aggr_conn;
 } else {
  VAR_6 = VAR_2->aggr_cntxt->aggr_conn;
 }

 if (!VAR_6)
  return;

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7 >= VAR_1)
  return;

 VAR_5 = &VAR_6->rx_tid[VAR_7];

 if (VAR_5->aggr)
  FUNC_0(VAR_6, VAR_7);
}
