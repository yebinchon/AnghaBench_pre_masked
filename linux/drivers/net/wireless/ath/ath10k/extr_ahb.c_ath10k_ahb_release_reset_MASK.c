
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_ahb {int cpu_init_rst; int radio_srif_rst; int radio_warm_rst; int radio_cold_rst; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ath10k_ahb* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,...) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_1)
{
 struct ath10k_ahb *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (FUNC_0(VAR_2->radio_cold_rst) ||
     FUNC_0(VAR_2->radio_warm_rst) ||
     FUNC_0(VAR_2->radio_srif_rst) ||
     FUNC_0(VAR_2->cpu_init_rst)) {
  FUNC_2(VAR_1, "rst ctrl(s) is/are not initialized\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_3(VAR_2->radio_cold_rst);
 if (VAR_3) {
  FUNC_2(VAR_1, "failed to deassert radio cold rst: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2->radio_warm_rst);
 if (VAR_3) {
  FUNC_2(VAR_1, "failed to deassert radio warm rst: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2->radio_srif_rst);
 if (VAR_3) {
  FUNC_2(VAR_1, "failed to deassert radio srif rst: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2->cpu_init_rst);
 if (VAR_3) {
  FUNC_2(VAR_1, "failed to deassert cpu init rst: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
