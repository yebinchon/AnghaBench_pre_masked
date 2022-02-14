
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_vif {int dummy; } ;
struct aggr_info_conn {int dummy; } ;
struct aggr_info {int rx_amsdu_freeq; void* aggr_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath6kl_vif*,struct aggr_info*,void*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct aggr_info*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

struct aggr_info *FUNC_6(struct ath6kl_vif *VAR_2)
{
 struct aggr_info *VAR_3 = ((void*)0);

 VAR_3 = FUNC_4(sizeof(struct aggr_info), VAR_1);
 if (!VAR_3) {
  FUNC_2("failed to alloc memory for aggr_node\n");
  return ((void*)0);
 }

 VAR_3->aggr_conn = FUNC_4(sizeof(struct aggr_info_conn), VAR_1);
 if (!VAR_3->aggr_conn) {
  FUNC_2("failed to alloc memory for connection specific aggr info\n");
  FUNC_3(VAR_3);
  return ((void*)0);
 }

 FUNC_0(VAR_2, VAR_3, VAR_3->aggr_conn);

 FUNC_5(&VAR_3->rx_amsdu_freeq);
 FUNC_1(&VAR_3->rx_amsdu_freeq, VAR_0);

 return VAR_3;
}
