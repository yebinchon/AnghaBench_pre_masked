
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_bb_timing_cfg_arg {int bb_tx_timing; int bb_xpa_timing; } ;
struct device_node {int dummy; } ;
struct ath10k {TYPE_1__* dev; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*,int,int) ;
 int FUNC_1 (struct device_node*,char*,int ,char const**) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_2,
           struct wmi_bb_timing_cfg_arg *VAR_3)
{
 struct device_node *VAR_4;
 const char *VAR_5;
 int VAR_6;

 VAR_4 = VAR_2->dev->of_node;
 if (!VAR_4)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_4, "ext-fem-name", 0, &VAR_5);
 if (VAR_6)
  return -VAR_1;






 if (!FUNC_2("microsemi-lx5586", VAR_5)) {
  VAR_3->bb_tx_timing = 0x00;
  VAR_3->bb_xpa_timing = 0x0101;
 } else {
  return -VAR_1;
 }

 FUNC_0(VAR_2, VAR_0, "boot bb_tx_timing 0x%x bb_xpa_timing 0x%x\n",
     VAR_3->bb_tx_timing, VAR_3->bb_xpa_timing);
 return 0;
}
