
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct hid_time_state {TYPE_1__* info; } ;
struct hid_sensor_hub_device {int dummy; } ;
struct TYPE_2__ {int report_id; int size; scalar_t__ attrib_id; scalar_t__ units; scalar_t__ unit_expo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int * VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct hid_sensor_hub_device*,int ,unsigned int,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_7,
    struct hid_sensor_hub_device *VAR_8,
    unsigned VAR_9,
    struct hid_time_state *VAR_10)
{
 int VAR_11, VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_5; ++VAR_12)
  if (FUNC_2(VAR_8,
    VAR_1, VAR_9,
    VAR_6[VAR_12],
    &VAR_10->info[VAR_12]) < 0)
   return -VAR_0;

 VAR_11 = VAR_10->info[0].report_id;
 if (VAR_11 < 0) {
  FUNC_0(&VAR_7->dev, "bad report ID!\n");
  return -VAR_0;
 }
 for (VAR_12 = 0; VAR_12 < VAR_5; ++VAR_12) {
  if (VAR_10->info[VAR_12].report_id != VAR_11) {
   FUNC_0(&VAR_7->dev,
    "not all needed attributes inside the same report!\n");
   return -VAR_0;
  }
  if (VAR_10->info[VAR_12].size == 3 ||
    VAR_10->info[VAR_12].size > 4) {
   FUNC_0(&VAR_7->dev,
    "attribute '%s' not 8, 16 or 32 bits wide!\n",
    FUNC_1(
     VAR_10->info[VAR_12].attrib_id));
   return -VAR_0;
  }
  if (VAR_10->info[VAR_12].units !=
    VAR_3 &&

    !(VAR_10->info[VAR_12].attrib_id ==
    VAR_2 &&
    VAR_10->info[VAR_12].units ==
    VAR_4)) {
   FUNC_0(&VAR_7->dev,
    "attribute '%s' hasn't a unit of type 'none'!\n",
    FUNC_1(
     VAR_10->info[VAR_12].attrib_id));
   return -VAR_0;
  }
  if (VAR_10->info[VAR_12].unit_expo) {
   FUNC_0(&VAR_7->dev,
    "attribute '%s' hasn't a unit exponent of 1!\n",
    FUNC_1(
     VAR_10->info[VAR_12].attrib_id));
   return -VAR_0;
  }
 }

 return 0;
}
