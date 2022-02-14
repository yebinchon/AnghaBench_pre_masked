
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct event_device_data {int wq; int queue_lock; int events; } ;
struct ec_event {int dummy; } ;
struct acpi_device {int dev; struct event_device_data* driver_data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,size_t,size_t) ;
 size_t FUNC_1 (struct ec_event*) ;
 size_t FUNC_2 (struct ec_event*) ;
 struct ec_event* FUNC_3 (int ,struct ec_event*) ;
 int FUNC_4 (struct ec_event*) ;
 struct ec_event* FUNC_5 (struct ec_event*,size_t,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct acpi_device *VAR_4, const u8 *VAR_5, u32 VAR_6)
{
 struct event_device_data *VAR_7 = VAR_4->driver_data;
 struct ec_event *VAR_8, *VAR_9, *VAR_10;
 size_t VAR_11, VAR_12;
 u32 VAR_13 = 0;

 while (VAR_13 < VAR_6) {
  VAR_8 = (struct ec_event *)(VAR_5 + VAR_13);

  VAR_11 = FUNC_1(VAR_8);
  VAR_12 = FUNC_2(VAR_8);
  if (VAR_11 > VAR_0) {
   FUNC_0(&VAR_4->dev, "Too many event words: %zu > %d\n",
    VAR_11, VAR_0);
   return -VAR_2;
  }


  if ((VAR_13 + VAR_12) > VAR_6) {
   FUNC_0(&VAR_4->dev, "Event exceeds buffer: %zu > %d\n",
    VAR_13 + VAR_12, VAR_6);
   return -VAR_2;
  }


  VAR_13 += VAR_12;


  VAR_9 = FUNC_5(VAR_8, VAR_12, VAR_3);
  if (!VAR_9)
   return -VAR_1;
  FUNC_6(&VAR_7->queue_lock);
  VAR_10 = FUNC_3(VAR_7->events, VAR_9);
  FUNC_7(&VAR_7->queue_lock);
  FUNC_4(VAR_10);
  FUNC_8(&VAR_7->wq);
 }

 return 0;
}
