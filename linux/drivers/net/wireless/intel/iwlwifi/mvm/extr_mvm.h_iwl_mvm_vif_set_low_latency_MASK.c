
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {int low_latency; int low_latency_actual; } ;
typedef enum iwl_mvm_low_latency_cause { ____Placeholder_iwl_mvm_low_latency_cause } iwl_mvm_low_latency_cause ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline
void FUNC_0(struct iwl_mvm_vif *VAR_2, bool VAR_3,
     enum iwl_mvm_low_latency_cause VAR_4)
{
 u8 VAR_5;

 if (VAR_3)
  VAR_2->low_latency |= VAR_4;
 else
  VAR_2->low_latency &= ~VAR_4;





 if (VAR_2->low_latency & VAR_1 &&
     VAR_4 != VAR_1)
  return;

 if (VAR_4 == VAR_1 && VAR_3)



  VAR_5 = !!(VAR_2->low_latency &
          VAR_0);
 else



  VAR_5 = !!(VAR_2->low_latency &
      ~(VAR_1 |
        VAR_0));

 VAR_2->low_latency_actual = VAR_5;
}
