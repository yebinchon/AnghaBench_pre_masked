
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int * queue_to_mac80211; int agg_q_alloc; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct iwl_priv *VAR_1, int VAR_2)
{
 FUNC_0(VAR_2, VAR_1->agg_q_alloc);
 VAR_1->queue_to_mac80211[VAR_2] = VAR_0;
}
