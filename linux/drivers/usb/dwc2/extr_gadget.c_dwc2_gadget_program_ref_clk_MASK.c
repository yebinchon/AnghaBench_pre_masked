
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ref_clk_per; int sof_cnt_wkup_alert; } ;
struct dwc2_hsotg {int dev; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct dwc2_hsotg*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,int,int ) ;

void FUNC_3(struct dwc2_hsotg *VAR_4)
{
 u32 VAR_5 = 0;

 VAR_5 |= VAR_2;
 VAR_5 |= VAR_4->params.ref_clk_per << VAR_1;
 VAR_5 |= VAR_4->params.sof_cnt_wkup_alert <<
        VAR_3;

 FUNC_2(VAR_4, VAR_5, VAR_0);
 FUNC_0(VAR_4->dev, "GREFCLK=0x%08x\n", FUNC_1(VAR_4, VAR_0));
}
