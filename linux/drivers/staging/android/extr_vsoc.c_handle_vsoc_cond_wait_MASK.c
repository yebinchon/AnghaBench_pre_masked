
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct vsoc_region_data {int futex_wait_queue; } ;
struct vsoc_device_region {scalar_t__ region_begin_offset; scalar_t__ region_end_offset; } ;
struct vsoc_cond_wait {int offset; int wait_type; scalar_t__ wake_time_nsec; scalar_t__ value; int wakes; int wake_time_sec; } ;
struct hrtimer_sleeper {int timer; int task; } ;
struct file {int dummy; } ;
typedef int ktime_t ;
typedef int atomic_t ;
struct TYPE_5__ {int timer_slack_ns; } ;
struct TYPE_4__ {struct vsoc_region_data* regions_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;


 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hrtimer_sleeper*,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (struct hrtimer_sleeper*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *,int *,int ) ;
 int * FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 TYPE_1__ VAR_10 ;
 struct vsoc_device_region* FUNC_16 (struct file*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_17(struct file *VAR_12, struct vsoc_cond_wait *VAR_13)
{
 FUNC_0(VAR_11);
 u32 VAR_14 = FUNC_10(FUNC_3(VAR_12));
 struct vsoc_region_data *VAR_15 = VAR_10.regions_data + VAR_14;
 struct hrtimer_sleeper VAR_16, *VAR_17 = ((void*)0);
 int VAR_18 = 0;
 struct vsoc_device_region *VAR_19 = FUNC_16(VAR_12);
 atomic_t *VAR_20 = ((void*)0);
 ktime_t VAR_21;


 if (VAR_13->offset & (sizeof(uint32_t) - 1))
  return -VAR_2;

 if (((uint64_t)VAR_13->offset) + VAR_19->region_begin_offset +
     sizeof(uint32_t) > VAR_19->region_end_offset)
  return -VAR_1;
 VAR_20 = FUNC_14(VAR_19->region_begin_offset +
       VAR_13->offset);


 switch (VAR_13->wait_type) {
 case 129:
  break;
 case 128:
  VAR_17 = &VAR_16;
  break;
 default:
  return -VAR_4;
 }

 if (VAR_17) {




  if (VAR_13->wake_time_nsec >= VAR_7)
   return -VAR_4;
  VAR_21 = FUNC_11(VAR_13->wake_time_sec, VAR_13->wake_time_nsec);

  FUNC_7(VAR_17, VAR_0,
           VAR_6);
  FUNC_8(&VAR_17->timer, VAR_21,
          VAR_9->timer_slack_ns);
 }

 while (1) {
  FUNC_13(&VAR_15->futex_wait_queue, &VAR_11,
    VAR_8);







  if (FUNC_1(VAR_20) != VAR_13->value) {
   VAR_18 = 0;
   break;
  }
  if (VAR_17) {
   FUNC_9(VAR_17, VAR_6);
   if (FUNC_12(VAR_17->task))
    FUNC_5();
   FUNC_6(&VAR_17->timer);
   if (!VAR_17->task) {
    VAR_18 = -VAR_5;
    break;
   }
  } else {
   FUNC_5();
  }



  ++VAR_13->wakes;
  if (FUNC_15(VAR_9)) {
   VAR_18 = -VAR_3;
   break;
  }
 }
 FUNC_4(&VAR_15->futex_wait_queue, &VAR_11);
 if (VAR_17)
  FUNC_2(&VAR_17->timer);
 return VAR_18;
}
