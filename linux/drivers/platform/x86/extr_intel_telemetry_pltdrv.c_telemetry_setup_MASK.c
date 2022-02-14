
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct telemetry_evtconfig {void* period; void* num_evts; int * evtmap; } ;
struct platform_device {int dev; } ;
struct TYPE_5__ {void* max_period; void* min_period; } ;
struct TYPE_4__ {void* max_period; void* min_period; } ;
struct TYPE_6__ {TYPE_2__ pss_config; TYPE_1__ ioss_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ,int ,int *,int ,int*,int ) ;
 int FUNC_4 (int ,int ,int ,int *,int*) ;
 int FUNC_5 (struct telemetry_evtconfig,struct telemetry_evtconfig,int ) ;
 TYPE_3__* VAR_12 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_13)
{
 struct telemetry_evtconfig VAR_14, VAR_15;
 u32 VAR_16, VAR_17, VAR_18;
 int VAR_19;

 VAR_19 = FUNC_3(VAR_4, VAR_1,
        ((void*)0), 0, &VAR_16, VAR_2);
 if (VAR_19) {
  FUNC_2(&VAR_13->dev, "IOSS TELEM_INFO Read Failed\n");
  return VAR_19;
 }


 VAR_17 = (VAR_16 & VAR_6) >>
    VAR_7;
 VAR_18 = VAR_16 & VAR_5;
 if ((VAR_17 < VAR_8) ||
     (VAR_18 < VAR_8)) {
  FUNC_2(&VAR_13->dev, "IOSS:Insufficient Space for SRAM Trace\n");
  FUNC_2(&VAR_13->dev, "SRAM Events %d; Event Regs %d\n",
   VAR_17, VAR_18);
  return -VAR_0;
 }

 VAR_12->ioss_config.min_period = FUNC_1(VAR_16);
 VAR_12->ioss_config.max_period = FUNC_0(VAR_16);


 VAR_19 = FUNC_4(VAR_3, 0, 0,
          ((void*)0), &VAR_16);
 if (VAR_19) {
  FUNC_2(&VAR_13->dev, "PSS TELEM_INFO Read Failed\n");
  return VAR_19;
 }


 VAR_17 = (VAR_16 & VAR_6) >>
    VAR_7;
 VAR_18 = VAR_16 & VAR_6;
 if ((VAR_17 < VAR_8) ||
     (VAR_18 < VAR_8)) {
  FUNC_2(&VAR_13->dev, "PSS:Insufficient Space for SRAM Trace\n");
  FUNC_2(&VAR_13->dev, "SRAM Events %d; Event Regs %d\n",
   VAR_17, VAR_18);
  return -VAR_0;
 }

 VAR_12->pss_config.min_period = FUNC_1(VAR_16);
 VAR_12->pss_config.max_period = FUNC_0(VAR_16);

 VAR_14.evtmap = ((void*)0);
 VAR_14.num_evts = VAR_9;
 VAR_14.period = VAR_11;

 VAR_15.evtmap = ((void*)0);
 VAR_15.num_evts = VAR_9;
 VAR_15.period = VAR_11;

 VAR_19 = FUNC_5(VAR_14, VAR_15,
     VAR_10);
 if (VAR_19) {
  FUNC_2(&VAR_13->dev, "TELEMETRY Setup Failed\n");
  return VAR_19;
 }
 return 0;
}
