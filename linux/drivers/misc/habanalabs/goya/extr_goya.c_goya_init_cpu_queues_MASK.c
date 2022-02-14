
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hl_hw_queue {int bus_address; } ;
struct hl_eq {int bus_address; } ;
struct hl_device {int dev; struct hl_eq event_queue; int cpu_queues_enable; struct hl_hw_queue* kernel_queues; struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hl_device*,int ,scalar_t__,int,int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (int ) ;

int FUNC_5(struct hl_device *VAR_24)
{
 struct goya_device *VAR_25 = VAR_24->asic_specific;
 struct hl_eq *VAR_26;
 u32 VAR_27;
 struct hl_hw_queue *VAR_28 = &VAR_24->kernel_queues[VAR_3];
 int VAR_29;

 if (!VAR_24->cpu_queues_enable)
  return 0;

 if (VAR_25->hw_cap_initialized & VAR_7)
  return 0;

 VAR_26 = &VAR_24->event_queue;

 FUNC_0(VAR_20, FUNC_3(VAR_28->bus_address));
 FUNC_0(VAR_19, FUNC_4(VAR_28->bus_address));

 FUNC_0(VAR_15, FUNC_3(VAR_26->bus_address));
 FUNC_0(VAR_14, FUNC_4(VAR_26->bus_address));

 FUNC_0(VAR_12,
   FUNC_3(VAR_10));
 FUNC_0(VAR_11,
   FUNC_4(VAR_10));

 FUNC_0(VAR_22, VAR_6);
 FUNC_0(VAR_17, VAR_5);
 FUNC_0(VAR_13, VAR_4);


 FUNC_0(VAR_16, 0);

 FUNC_0(VAR_18, 0);

 FUNC_0(VAR_21, VAR_8);

 FUNC_0(VAR_23,
   VAR_1);

 VAR_29 = FUNC_2(
  VAR_24,
  VAR_21,
  VAR_27,
  (VAR_27 == VAR_9),
  1000,
  VAR_2);

 if (VAR_29) {
  FUNC_1(VAR_24->dev,
   "Failed to setup communication with device CPU\n");
  return -VAR_0;
 }

 VAR_25->hw_cap_initialized |= VAR_7;
 return 0;
}
