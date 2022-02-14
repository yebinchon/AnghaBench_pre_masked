
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct twl4030_power_data {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct twl4030_power_data* data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct twl4030_power_data* FUNC_1 (TYPE_1__*) ;
 struct of_device_id* FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct twl4030_power_data const*) ;
 int FUNC_7 (struct twl4030_power_data const*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_8 (struct twl4030_power_data const*,struct device_node*) ;
 int FUNC_9 (int ,int*,int ) ;
 int FUNC_10 (int ,int,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_10)
{
 const struct twl4030_power_data *VAR_11 = FUNC_1(&VAR_10->dev);
 struct device_node *VAR_12 = VAR_10->dev.of_node;
 const struct of_device_id *VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 u8 VAR_16;

 if (!VAR_11 && !VAR_12) {
  FUNC_0(&VAR_10->dev, "Platform data is missing\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_10(VAR_6, VAR_3,
          VAR_5);
 VAR_14 |= FUNC_10(VAR_6,
          VAR_4,
          VAR_5);

 if (VAR_14) {
  FUNC_4("TWL4030 Unable to unlock registers\n");
  return VAR_14;
 }

 VAR_13 = FUNC_2(FUNC_3(VAR_8),
    &VAR_10->dev);
 if (VAR_13 && VAR_13->data)
  VAR_11 = VAR_13->data;

 if (VAR_11) {
  VAR_14 = FUNC_7(VAR_11);
  if (VAR_14) {
   FUNC_4("TWL4030 failed to load scripts\n");
   goto relock;
  }
  VAR_14 = FUNC_6(VAR_11);
  if (VAR_14) {
   FUNC_4("TWL4030 failed to configure resource\n");
   goto relock;
  }
 }


 if (FUNC_8(VAR_11, VAR_12) && !VAR_7) {

  VAR_14 = FUNC_9(VAR_6, &VAR_16,
          VAR_2);
  if (VAR_14) {
   FUNC_5("TWL4030 Unable to read registers\n");
  } else if (!(VAR_16 & VAR_1)) {
   VAR_16 |= VAR_1;
   VAR_14 = FUNC_10(VAR_6, VAR_16,
     VAR_2);
   if (VAR_14) {
    FUNC_4("TWL4030 Unable to setup SEQ_OFFSYNC\n");
    goto relock;
   }
  }

  VAR_7 = VAR_9;
 }

relock:
 VAR_15 = FUNC_10(VAR_6, 0,
          VAR_5);
 if (VAR_15) {
  FUNC_4("TWL4030 Unable to relock registers\n");
  return VAR_15;
 }

 return VAR_14;
}
