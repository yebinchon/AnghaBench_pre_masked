
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct miphy28lp_phy {int * syscfg_reg; scalar_t__ sata_gen; void* tx_impedance; void* ssc; void* px_rx_pol_inv; void* osc_rdy; void* osc_force_ext; } ;
struct device_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_2 (struct device_node*,char*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_2,
         struct miphy28lp_phy *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_3->osc_force_ext =
  FUNC_0(VAR_2, "st,osc-force-ext");

 VAR_3->osc_rdy = FUNC_0(VAR_2, "st,osc-rdy");

 VAR_3->px_rx_pol_inv =
  FUNC_0(VAR_2, "st,px_rx_pol_inv");

 VAR_3->ssc = FUNC_0(VAR_2, "st,ssc-on");

 VAR_3->tx_impedance =
  FUNC_0(VAR_2, "st,tx-impedance-comp");

 FUNC_1(VAR_2, "st,sata-gen", &VAR_3->sata_gen);
 if (!VAR_3->sata_gen)
  VAR_3->sata_gen = VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (!FUNC_2(VAR_2, "st,syscfg", VAR_4, &VAR_5))
   VAR_3->syscfg_reg[VAR_4] = VAR_5;
 }

 return 0;
}
