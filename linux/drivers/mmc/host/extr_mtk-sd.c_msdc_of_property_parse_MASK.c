
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct msdc_host {int hs400_cmd_resp_sel_rising; int hs400_cmd_int_delay; int hs200_cmd_int_delay; int hs400_ds_delay; int latch_ck; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int *) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_0,
       struct msdc_host *VAR_1)
{
 FUNC_1(VAR_0->dev.of_node, "mediatek,latch-ck",
        &VAR_1->latch_ck);

 FUNC_1(VAR_0->dev.of_node, "hs400-ds-delay",
        &VAR_1->hs400_ds_delay);

 FUNC_1(VAR_0->dev.of_node, "mediatek,hs200-cmd-int-delay",
        &VAR_1->hs200_cmd_int_delay);

 FUNC_1(VAR_0->dev.of_node, "mediatek,hs400-cmd-int-delay",
        &VAR_1->hs400_cmd_int_delay);

 if (FUNC_0(VAR_0->dev.of_node,
      "mediatek,hs400-cmd-resp-sel-rising"))
  VAR_1->hs400_cmd_resp_sel_rising = 1;
 else
  VAR_1->hs400_cmd_resp_sel_rising = 0;
}
