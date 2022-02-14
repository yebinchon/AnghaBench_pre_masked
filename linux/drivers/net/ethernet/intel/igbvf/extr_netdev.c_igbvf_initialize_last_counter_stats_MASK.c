
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* base_gprlbc; void* base_gorlbc; void* base_gptlbc; void* base_gotlbc; void* base_mprc; void* base_gotc; void* base_gptc; void* base_gorc; void* base_gprc; void* last_gprlbc; void* last_gorlbc; void* last_gptlbc; void* last_gotlbc; void* last_mprc; void* last_gotc; void* last_gptc; void* last_gorc; void* last_gprc; } ;
struct e1000_hw {int dummy; } ;
struct igbvf_adapter {TYPE_1__ stats; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct igbvf_adapter *VAR_9)
{
 struct e1000_hw *VAR_10 = &VAR_9->hw;

 VAR_9->stats.last_gprc = FUNC_0(VAR_4);
 VAR_9->stats.last_gorc = FUNC_0(VAR_0);
 VAR_9->stats.last_gptc = FUNC_0(VAR_6);
 VAR_9->stats.last_gotc = FUNC_0(VAR_2);
 VAR_9->stats.last_mprc = FUNC_0(VAR_8);
 VAR_9->stats.last_gotlbc = FUNC_0(VAR_3);
 VAR_9->stats.last_gptlbc = FUNC_0(VAR_7);
 VAR_9->stats.last_gorlbc = FUNC_0(VAR_1);
 VAR_9->stats.last_gprlbc = FUNC_0(VAR_5);

 VAR_9->stats.base_gprc = FUNC_0(VAR_4);
 VAR_9->stats.base_gorc = FUNC_0(VAR_0);
 VAR_9->stats.base_gptc = FUNC_0(VAR_6);
 VAR_9->stats.base_gotc = FUNC_0(VAR_2);
 VAR_9->stats.base_mprc = FUNC_0(VAR_8);
 VAR_9->stats.base_gotlbc = FUNC_0(VAR_3);
 VAR_9->stats.base_gptlbc = FUNC_0(VAR_7);
 VAR_9->stats.base_gorlbc = FUNC_0(VAR_1);
 VAR_9->stats.base_gprlbc = FUNC_0(VAR_5);
}
