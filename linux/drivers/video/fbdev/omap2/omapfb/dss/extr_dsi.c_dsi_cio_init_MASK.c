
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {int ddr_clk_always_on; } ;
struct dsi_data {int ulps_enabled; int num_lanes_supported; scalar_t__ mode; int module_id; TYPE_2__ vm_timings; TYPE_1__* lanes; } ;
typedef int ktime_t ;
struct TYPE_3__ {scalar_t__ function; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int,int,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct platform_device*,int ,int,int,int) ;
 int VAR_11 ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,unsigned int,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*) ;
 struct dsi_data* FUNC_11 (struct platform_device*) ;
 int FUNC_12 (struct platform_device*) ;
 int FUNC_13 (struct platform_device*,int) ;
 int FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (struct platform_device*) ;
 int FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct platform_device*,int ,int,int) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_12)
{
 struct dsi_data *VAR_13 = FUNC_11(VAR_12);
 int VAR_14;
 u32 VAR_15;

 FUNC_0("DSI CIO init starts");

 VAR_14 = FUNC_18(VAR_13->module_id, FUNC_12(VAR_12));
 if (VAR_14)
  return VAR_14;

 FUNC_10(VAR_12);




 FUNC_14(VAR_12, VAR_4);

 if (FUNC_22(VAR_12, VAR_4, 30, 1) != 1) {
  FUNC_1("CIO SCP Clock domain not coming out of reset.\n");
  VAR_14 = -VAR_7;
  goto err_scp_clk_dom;
 }

 VAR_14 = FUNC_15(VAR_12);
 if (VAR_14)
  goto err_scp_clk_dom;


 VAR_15 = FUNC_14(VAR_12, VAR_6);
 VAR_15 = FUNC_2(VAR_15, 1, 15, 15);
 VAR_15 = FUNC_2(VAR_15, 1, 14, 14);
 VAR_15 = FUNC_2(VAR_15, 1, 13, 13);
 VAR_15 = FUNC_2(VAR_15, 0x1fff, 12, 0);
 FUNC_16(VAR_12, VAR_6, VAR_15);

 if (VAR_13->ulps_enabled) {
  unsigned VAR_16;
  int VAR_17;

  FUNC_0("manual ulps exit\n");
  VAR_16 = 0;

  for (VAR_17 = 0; VAR_17 < VAR_13->num_lanes_supported; ++VAR_17) {
   if (VAR_13->lanes[VAR_17].function == VAR_5)
    continue;
   VAR_16 |= 1 << VAR_17;
  }

  FUNC_5(VAR_12, VAR_16, 0);
 }

 VAR_14 = FUNC_6(VAR_12, VAR_3);
 if (VAR_14)
  goto err_cio_pwr;

 if (FUNC_22(VAR_12, VAR_1, 29, 1) != 1) {
  FUNC_1("CIO PWR clock domain not coming out of reset.\n");
  VAR_14 = -VAR_8;
  goto err_cio_pwr_dom;
 }

 FUNC_13(VAR_12, 1);
 FUNC_13(VAR_12, 0);
 FUNC_3(VAR_12, VAR_0, 1, 20, 20);

 VAR_14 = FUNC_8(VAR_12);
 if (VAR_14)
  goto err_tx_clk_esc_rst;

 if (VAR_13->ulps_enabled) {

  ktime_t VAR_18 = FUNC_19(1000 * 1000);
  FUNC_21(VAR_11);
  FUNC_20(&VAR_18, VAR_9);



  FUNC_4(VAR_12);
 }


 FUNC_3(VAR_12, VAR_6, 0, 15, 15);

 FUNC_7(VAR_12);

 if (VAR_13->mode == VAR_10) {

  FUNC_3(VAR_12, VAR_0,
   VAR_13->vm_timings.ddr_clk_always_on, 13, 13);
 }

 VAR_13->ulps_enabled = 0;

 FUNC_0("CIO init done\n");

 return 0;

err_tx_clk_esc_rst:
 FUNC_3(VAR_12, VAR_0, 0, 20, 20);
err_cio_pwr_dom:
 FUNC_6(VAR_12, VAR_2);
err_cio_pwr:
 if (VAR_13->ulps_enabled)
  FUNC_4(VAR_12);
err_scp_clk_dom:
 FUNC_9(VAR_12);
 FUNC_17(VAR_13->module_id, FUNC_12(VAR_12));
 return VAR_14;
}
