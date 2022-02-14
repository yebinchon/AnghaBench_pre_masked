
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct max77620_chip {int chip_id; int sleep_enable; int enable_global_lpm; int rmap; void** suspend_fps_period; void** shutdown_fps_period; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct max77620_chip*,void*) ;
 void* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,int*) ;
 int FUNC_5 (int ,scalar_t__,unsigned int,unsigned int) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct max77620_chip *VAR_11,
          struct device_node *VAR_12)
{
 struct device *VAR_13 = VAR_11->dev;
 unsigned int VAR_14 = 0, VAR_15 = 0;
 u32 VAR_16;
 u32 VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;
 char VAR_21[10];

 switch (VAR_11->chip_id) {
 case 130:
  VAR_16 = VAR_1;
  break;
 case 129:
  VAR_16 = VAR_7;
  break;
 case 128:
  VAR_16 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 for (VAR_19 = 0; VAR_19 < VAR_2; VAR_19++) {
  FUNC_6(VAR_21, "fps%d", VAR_19);
  if (FUNC_3(VAR_12, VAR_21))
   break;
 }

 if (VAR_19 == VAR_2) {
  FUNC_0(VAR_13, "FPS node name %pOFn is not valid\n", VAR_12);
  return -VAR_0;
 }

 VAR_20 = FUNC_4(VAR_12, "maxim,shutdown-fps-time-period-us",
       &VAR_17);
 if (!VAR_20) {
  VAR_14 |= VAR_8;
  VAR_11->shutdown_fps_period[VAR_19] = FUNC_2(VAR_17,
       VAR_16);
  VAR_18 = FUNC_1(VAR_11,
    VAR_11->shutdown_fps_period[VAR_19]);
  VAR_15 |= VAR_18 << VAR_9;
 }

 VAR_20 = FUNC_4(VAR_12, "maxim,suspend-fps-time-period-us",
       &VAR_17);
 if (!VAR_20)
  VAR_11->suspend_fps_period[VAR_19] = FUNC_2(VAR_17,
             VAR_16);

 VAR_20 = FUNC_4(VAR_12, "maxim,fps-event-source",
       &VAR_17);
 if (!VAR_20) {
  if (VAR_17 > 2) {
   FUNC_0(VAR_13, "FPS%d event-source invalid\n", VAR_19);
   return -VAR_0;
  }
  VAR_14 |= VAR_5;
  VAR_15 |= VAR_17 << VAR_6;
  if (VAR_17 == 2) {
   VAR_14 |= VAR_4;
   VAR_15 |= VAR_3;
  }
 }

 if (!VAR_11->sleep_enable && !VAR_11->enable_global_lpm) {
  VAR_20 = FUNC_4(VAR_12,
    "maxim,device-state-on-disabled-event",
    &VAR_17);
  if (!VAR_20) {
   if (VAR_17 == 0)
    VAR_11->sleep_enable = 1;
   else if (VAR_17 == 1)
    VAR_11->enable_global_lpm = 1;
  }
 }

 VAR_20 = FUNC_5(VAR_11->rmap, VAR_10 + VAR_19,
     VAR_14, VAR_15);
 if (VAR_20 < 0) {
  FUNC_0(VAR_13, "Failed to update FPS CFG: %d\n", VAR_20);
  return VAR_20;
 }

 return 0;
}
