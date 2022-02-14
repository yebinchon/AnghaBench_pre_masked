
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pmc {scalar_t__ suspend_mode; int cpu_good_time; int cpu_off_time; int core_osc_time; int core_pmu_time; int core_off_time; int lp0_vec_phys; int lp0_vec_size; void* cpu_pwr_good_en; void* combined_req; void* sysclkreq_high; void* corereq_high; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* FUNC_1 (struct device_node*,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,int*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct tegra_pmc *VAR_4, struct device_node *VAR_5)
{
 u32 VAR_6, VAR_7[2];

 if (FUNC_2(VAR_5, "nvidia,suspend-mode", &VAR_6)) {
 } else {
  switch (VAR_6) {
  case 0:
   VAR_4->suspend_mode = VAR_0;
   break;

  case 1:
   VAR_4->suspend_mode = VAR_1;
   break;

  case 2:
   VAR_4->suspend_mode = VAR_2;
   break;

  default:
   VAR_4->suspend_mode = VAR_3;
   break;
  }
 }

 VAR_4->suspend_mode = FUNC_4(VAR_4->suspend_mode);

 if (FUNC_2(VAR_5, "nvidia,cpu-pwr-good-time", &VAR_6))
  VAR_4->suspend_mode = VAR_3;

 VAR_4->cpu_good_time = VAR_6;

 if (FUNC_2(VAR_5, "nvidia,cpu-pwr-off-time", &VAR_6))
  VAR_4->suspend_mode = VAR_3;

 VAR_4->cpu_off_time = VAR_6;

 if (FUNC_3(VAR_5, "nvidia,core-pwr-good-time",
           VAR_7, FUNC_0(VAR_7)))
  VAR_4->suspend_mode = VAR_3;

 VAR_4->core_osc_time = VAR_7[0];
 VAR_4->core_pmu_time = VAR_7[1];

 if (FUNC_2(VAR_5, "nvidia,core-pwr-off-time", &VAR_6))
  VAR_4->suspend_mode = VAR_3;

 VAR_4->core_off_time = VAR_6;

 VAR_4->corereq_high = FUNC_1(VAR_5,
    "nvidia,core-power-req-active-high");

 VAR_4->sysclkreq_high = FUNC_1(VAR_5,
    "nvidia,sys-clock-req-active-high");

 VAR_4->combined_req = FUNC_1(VAR_5,
    "nvidia,combined-power-req");

 VAR_4->cpu_pwr_good_en = FUNC_1(VAR_5,
    "nvidia,cpu-pwr-good-en");

 if (FUNC_3(VAR_5, "nvidia,lp0-vec", VAR_7,
           FUNC_0(VAR_7)))
  if (VAR_4->suspend_mode == VAR_0)
   VAR_4->suspend_mode = VAR_1;

 VAR_4->lp0_vec_phys = VAR_7[0];
 VAR_4->lp0_vec_size = VAR_7[1];

 return 0;
}
