
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int passive_no_rx; int hw; int transport_queue_stop; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int *) ;

void FUNC_3(struct iwl_priv *VAR_1)
{
 int VAR_2;

 if (!VAR_1->passive_no_rx)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!FUNC_2(VAR_2, &VAR_1->transport_queue_stop)) {
   FUNC_0(VAR_1, "Wake queue %d\n", VAR_2);
   FUNC_1(VAR_1->hw, VAR_2);
  } else {
   FUNC_0(VAR_1, "Don't wake queue %d\n", VAR_2);
  }
 }

 VAR_1->passive_no_rx = 0;
}
