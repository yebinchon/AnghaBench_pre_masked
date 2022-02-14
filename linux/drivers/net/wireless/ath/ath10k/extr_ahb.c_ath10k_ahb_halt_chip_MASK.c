
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_ahb {int core_cold_rst; int cpu_init_rst; int radio_srif_rst; int radio_warm_rst; int radio_cold_rst; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (struct ath10k*,int,int) ;
 struct ath10k_ahb* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,int ) ;
 int FUNC_4 (struct ath10k*,int) ;
 int FUNC_5 (struct ath10k*,int,int) ;
 int FUNC_6 (struct ath10k*,int ,char*,int) ;
 int FUNC_7 (struct ath10k*,char*,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct ath10k *VAR_10)
{
 struct ath10k_ahb *VAR_11 = FUNC_2(VAR_10);
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 u32 VAR_16;
 int VAR_17;

 if (FUNC_0(VAR_11->core_cold_rst) ||
     FUNC_0(VAR_11->radio_cold_rst) ||
     FUNC_0(VAR_11->radio_warm_rst) ||
     FUNC_0(VAR_11->radio_srif_rst) ||
     FUNC_0(VAR_11->cpu_init_rst)) {
  FUNC_7(VAR_10, "rst ctrl(s) is/are not initialized\n");
  return;
 }

 VAR_12 = FUNC_3(VAR_10, VAR_7);

 switch (VAR_12) {
 case 0:
  VAR_13 = VAR_5;
  VAR_14 = VAR_2;
  VAR_15 = VAR_1;
  break;
 case 1:
  VAR_13 = VAR_6;
  VAR_14 = VAR_4;
  VAR_15 = VAR_3;
  break;
 default:
  FUNC_7(VAR_10, "invalid core id %d found, skipping reset sequence\n",
      VAR_12);
  return;
 }

 FUNC_1(VAR_10, VAR_14, VAR_15);

 VAR_16 = FUNC_4(VAR_10, VAR_13);
 VAR_16 |= VAR_9;
 FUNC_5(VAR_10, VAR_13, VAR_16);

 VAR_17 = FUNC_9(VAR_11->core_cold_rst);
 if (VAR_17)
  FUNC_7(VAR_10, "failed to assert core cold rst: %d\n", VAR_17);
 FUNC_8(1);

 VAR_17 = FUNC_9(VAR_11->radio_cold_rst);
 if (VAR_17)
  FUNC_7(VAR_10, "failed to assert radio cold rst: %d\n", VAR_17);
 FUNC_8(1);

 VAR_17 = FUNC_9(VAR_11->radio_warm_rst);
 if (VAR_17)
  FUNC_7(VAR_10, "failed to assert radio warm rst: %d\n", VAR_17);
 FUNC_8(1);

 VAR_17 = FUNC_9(VAR_11->radio_srif_rst);
 if (VAR_17)
  FUNC_7(VAR_10, "failed to assert radio srif rst: %d\n", VAR_17);
 FUNC_8(1);

 VAR_17 = FUNC_9(VAR_11->cpu_init_rst);
 if (VAR_17)
  FUNC_7(VAR_10, "failed to assert cpu init rst: %d\n", VAR_17);
 FUNC_8(10);




 VAR_16 = FUNC_4(VAR_10, VAR_14);
 VAR_16 &= ~VAR_0;
 FUNC_5(VAR_10, VAR_14, VAR_16);

 VAR_16 = FUNC_4(VAR_10, VAR_13);
 VAR_16 &= ~VAR_9;
 FUNC_5(VAR_10, VAR_13, VAR_16);

 VAR_17 = FUNC_10(VAR_11->core_cold_rst);
 if (VAR_17)
  FUNC_7(VAR_10, "failed to deassert core cold rst: %d\n", VAR_17);

 FUNC_6(VAR_10, VAR_8, "core %d reset done\n", VAR_12);
}
