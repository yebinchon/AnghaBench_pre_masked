
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hird_threshold; scalar_t__ service_interval; scalar_t__ besl; scalar_t__ lpm_clock_gating; scalar_t__ hird_threshold_en; int lpm; } ;
struct dwc2_hsotg {TYPE_1__ params; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct dwc2_hsotg*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,int ,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,int,int ) ;

void FUNC_4(struct dwc2_hsotg *VAR_11)
{
 u32 VAR_12;

 if (!VAR_11->params.lpm)
  return;

 VAR_12 = VAR_8 | VAR_3;
 VAR_12 |= VAR_11->params.hird_threshold_en ? VAR_6 : 0;
 VAR_12 |= VAR_11->params.lpm_clock_gating ? VAR_5 : 0;
 VAR_12 |= VAR_11->params.hird_threshold << VAR_7;
 VAR_12 |= VAR_11->params.besl ? VAR_4 : 0;
 VAR_12 |= VAR_10;
 VAR_12 |= VAR_9;
 FUNC_3(VAR_11, VAR_12, VAR_2);
 FUNC_0(VAR_11->dev, "GLPMCFG=0x%08x\n", FUNC_1(VAR_11, VAR_2));


 if (VAR_11->params.service_interval)
  FUNC_2(VAR_11, VAR_0, VAR_1);
}
