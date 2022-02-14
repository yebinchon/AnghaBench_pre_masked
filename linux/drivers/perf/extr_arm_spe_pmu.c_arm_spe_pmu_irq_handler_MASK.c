
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_output_handle {int aux_flags; struct perf_event* event; } ;
struct perf_event {int dummy; } ;
typedef int irqreturn_t ;
typedef enum arm_spe_pmu_buf_fault_action { ____Placeholder_arm_spe_pmu_buf_fault_action } arm_spe_pmu_buf_fault_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (struct perf_output_handle*,struct perf_event*) ;
 int FUNC_1 (struct perf_output_handle*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct perf_output_handle*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct perf_output_handle *VAR_6 = VAR_5;
 struct perf_event *VAR_7 = VAR_6->event;
 enum arm_spe_pmu_buf_fault_action VAR_8;

 if (!FUNC_5(VAR_6))
  return VAR_1;

 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8 == 128)
  return VAR_1;





 FUNC_3();

 switch (VAR_8) {
 case 130:







  FUNC_2();
  break;
 case 129:






  if (!(VAR_6->aux_flags & VAR_2)) {
   FUNC_0(VAR_6, VAR_7);
   FUNC_4();
  }
  break;
 case 128:

  break;
 }


 FUNC_6(0, VAR_3);
 return VAR_0;
}
