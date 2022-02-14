
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ath10k_ahb {void* cpu_init_rst; void* radio_srif_rst; void* radio_warm_rst; void* radio_cold_rst; void* core_cold_rst; TYPE_1__* pdev; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 struct ath10k_ahb* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 void* FUNC_4 (struct device*,char*) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_0)
{
 struct ath10k_ahb *VAR_1 = FUNC_2(VAR_0);
 struct device *VAR_2;

 VAR_2 = &VAR_1->pdev->dev;

 VAR_1->core_cold_rst = FUNC_4(VAR_2,
         "wifi_core_cold");
 if (FUNC_0(VAR_1->core_cold_rst)) {
  FUNC_3(VAR_0, "failed to get core cold rst ctrl: %ld\n",
      FUNC_1(VAR_1->core_cold_rst));
  return FUNC_1(VAR_1->core_cold_rst);
 }

 VAR_1->radio_cold_rst = FUNC_4(VAR_2,
          "wifi_radio_cold");
 if (FUNC_0(VAR_1->radio_cold_rst)) {
  FUNC_3(VAR_0, "failed to get radio cold rst ctrl: %ld\n",
      FUNC_1(VAR_1->radio_cold_rst));
  return FUNC_1(VAR_1->radio_cold_rst);
 }

 VAR_1->radio_warm_rst = FUNC_4(VAR_2,
          "wifi_radio_warm");
 if (FUNC_0(VAR_1->radio_warm_rst)) {
  FUNC_3(VAR_0, "failed to get radio warm rst ctrl: %ld\n",
      FUNC_1(VAR_1->radio_warm_rst));
  return FUNC_1(VAR_1->radio_warm_rst);
 }

 VAR_1->radio_srif_rst = FUNC_4(VAR_2,
          "wifi_radio_srif");
 if (FUNC_0(VAR_1->radio_srif_rst)) {
  FUNC_3(VAR_0, "failed to get radio srif rst ctrl: %ld\n",
      FUNC_1(VAR_1->radio_srif_rst));
  return FUNC_1(VAR_1->radio_srif_rst);
 }

 VAR_1->cpu_init_rst = FUNC_4(VAR_2,
        "wifi_cpu_init");
 if (FUNC_0(VAR_1->cpu_init_rst)) {
  FUNC_3(VAR_0, "failed to get cpu init rst ctrl: %ld\n",
      FUNC_1(VAR_1->cpu_init_rst));
  return FUNC_1(VAR_1->cpu_init_rst);
 }

 return 0;
}
