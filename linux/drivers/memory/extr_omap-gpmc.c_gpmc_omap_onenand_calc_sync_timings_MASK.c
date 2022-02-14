
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpmc_timings {int dummy; } ;
struct gpmc_settings {int sync_write; } ;
struct gpmc_device_timings {int t_avdp_w; int t_wpl; int t_wph; int t_aavdh; int ce_xdelay; int avd_xdelay; int oe_xdelay; int we_xdelay; int clk; int t_bacc; int t_ces; int t_avds; int t_avdh; int t_ach; int cyc_iaa; int t_cez_r; int t_cez_w; int cyc_aavdh_oe; int t_rdyo; } ;
typedef int dev_t ;


 int FUNC_0 (struct gpmc_timings*,struct gpmc_settings*,struct gpmc_device_timings*) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (struct gpmc_device_timings*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct gpmc_timings *VAR_0,
      struct gpmc_settings *VAR_1,
      int VAR_2, int VAR_3)
{
 struct gpmc_device_timings VAR_4;
 const int VAR_5 = 15;
 const int VAR_6 = 12;
 const int VAR_7 = 20;
 const int VAR_8 = 40;
 const int VAR_9 = 30;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 switch (VAR_2) {
 case 104:
  VAR_10 = 9600;
  VAR_11 = 3;
  VAR_12 = 4;
  VAR_13 = 2;
  VAR_14 = 3;
  VAR_15 = 6;
  VAR_16 = 6;
  break;
 case 83:
  VAR_10 = 12000;
  VAR_11 = 5;
  VAR_12 = 4;
  VAR_13 = 2;
  VAR_14 = 6;
  VAR_15 = 6;
  VAR_16 = 9;
  break;
 case 66:
  VAR_10 = 15000;
  VAR_11 = 6;
  VAR_12 = 5;
  VAR_13 = 2;
  VAR_14 = 6;
  VAR_15 = 6;
  VAR_16 = 11;
  break;
 default:
  VAR_10 = 18500;
  VAR_11 = 7;
  VAR_12 = 7;
  VAR_13 = 7;
  VAR_14 = 9;
  VAR_15 = 7;
  VAR_16 = 15;
  break;
 }


 FUNC_2(&VAR_4, 0, sizeof(VAR_4));

 if (!VAR_1->sync_write) {
  VAR_4.t_avdp_w = FUNC_1(VAR_6, VAR_5) * 1000;
  VAR_4.t_wpl = VAR_8 * 1000;
  VAR_4.t_wph = VAR_9 * 1000;
  VAR_4.t_aavdh = VAR_15 * 1000;
 }
 VAR_4.ce_xdelay = 1;
 VAR_4.avd_xdelay = 1;
 VAR_4.oe_xdelay = 1;
 VAR_4.we_xdelay = 1;
 VAR_4.clk = VAR_10;
 VAR_4.t_bacc = VAR_4.clk;
 VAR_4.t_ces = VAR_11 * 1000;
 VAR_4.t_avds = VAR_12 * 1000;
 VAR_4.t_avdh = VAR_13 * 1000;
 VAR_4.t_ach = VAR_14 * 1000;
 VAR_4.cyc_iaa = (VAR_3 + 1);
 VAR_4.t_cez_r = VAR_7 * 1000;
 VAR_4.t_cez_w = VAR_4.t_cez_r;
 VAR_4.cyc_aavdh_oe = 1;
 VAR_4.t_rdyo = VAR_16 * 1000 + VAR_10;

 FUNC_0(VAR_0, VAR_1, &VAR_4);
}
