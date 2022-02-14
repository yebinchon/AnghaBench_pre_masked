
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_output_handle {int dummy; } ;
typedef enum arm_spe_pmu_buf_fault_action { ____Placeholder_arm_spe_pmu_buf_fault_action } arm_spe_pmu_buf_fault_action ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct perf_output_handle*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_16 ;
 int FUNC_4 (struct perf_output_handle*,int) ;
 int FUNC_5 (char*,char const*,int ,int,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

__attribute__((used)) static enum arm_spe_pmu_buf_fault_action
FUNC_9(struct perf_output_handle *VAR_17)
{
 const char *VAR_18;
 u64 VAR_19;
 enum arm_spe_pmu_buf_fault_action VAR_20;





 FUNC_6();
 FUNC_2(VAR_16);


 FUNC_3();


 VAR_19 = FUNC_7(VAR_8);
 if (!(VAR_19 & FUNC_0(VAR_15)))
  return VAR_5;





 if (VAR_19 & FUNC_0(VAR_12))
  FUNC_4(VAR_17, VAR_2 |
          VAR_1);


 if (VAR_19 & FUNC_0(VAR_11))
  FUNC_4(VAR_17, VAR_0);


 switch (VAR_19 & (VAR_13 << VAR_14)) {
 case 130:

  break;
 case 129:
 case 128:
  VAR_18 = "Unexpected buffer fault";
  goto out_err;
 default:
  VAR_18 = "Unknown error code";
  goto out_err;
 }


 switch (VAR_19 &
  (VAR_9 << VAR_10)) {
 case 131:
  VAR_20 = VAR_4;
  goto out_stop;
 default:
  VAR_18 = "Unknown buffer status code";
 }

out_err:
 FUNC_5("%s on CPU %d [PMBSR=0x%016llx, PMBPTR=0x%016llx, PMBLIMITR=0x%016llx]\n",
      VAR_18, FUNC_8(), VAR_19,
      FUNC_7(VAR_7),
      FUNC_7(VAR_6));
 VAR_20 = VAR_3;

out_stop:
 FUNC_1(VAR_17);
 return VAR_20;
}
