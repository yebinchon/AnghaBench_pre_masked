
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int of_node; } ;
struct serdev_device {struct device dev; } ;
struct rave_sp {char const* part_number_firmware; char const* part_number_bootloader; int event_notifier_list; int reply_lock; int bus_lock; int variant; struct serdev_device* serdev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,char const*) ;
 int FUNC_3 (struct device*,struct rave_sp*) ;
 int FUNC_4 (struct device*,char*,int) ;
 struct rave_sp* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,struct serdev_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device*) ;
 scalar_t__ FUNC_10 (int ,char*,int *) ;
 int FUNC_11 (struct rave_sp*) ;
 int VAR_5 ;
 int FUNC_12 (struct serdev_device*,int ) ;
 int FUNC_13 (struct serdev_device*,int *) ;
 int FUNC_14 (struct serdev_device*,int) ;
 int FUNC_15 (struct serdev_device*,int ) ;

__attribute__((used)) static int FUNC_16(struct serdev_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 const char *VAR_8 = "unknown\n";
 struct rave_sp *VAR_9;
 u32 VAR_10;
 int VAR_11;

 if (FUNC_10(VAR_7->of_node, "current-speed", &VAR_10)) {
  FUNC_1(VAR_7,
   "'current-speed' is not specified in device node\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(VAR_7, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->serdev = VAR_6;
 FUNC_3(VAR_7, VAR_9);

 VAR_9->variant = FUNC_9(VAR_7);
 if (!VAR_9->variant)
  return -VAR_1;

 FUNC_8(&VAR_9->bus_lock);
 FUNC_8(&VAR_9->reply_lock);
 FUNC_0(&VAR_9->event_notifier_list);

 FUNC_13(VAR_6, &VAR_5);
 VAR_11 = FUNC_7(VAR_7, VAR_6);
 if (VAR_11)
  return VAR_11;

 FUNC_12(VAR_6, VAR_10);
 FUNC_14(VAR_6, 0);

 VAR_11 = FUNC_15(VAR_6, VAR_4);
 if (VAR_11) {
  FUNC_1(VAR_7, "Failed to set parity\n");
  return VAR_11;
 }

 VAR_11 = FUNC_11(VAR_9);
 if (VAR_11) {
  FUNC_4(VAR_7, "Failed to get firmware status: %d\n", VAR_11);
  VAR_9->part_number_firmware = VAR_8;
  VAR_9->part_number_bootloader = VAR_8;
 }





 FUNC_2(VAR_7, "Firmware version: %s", VAR_9->part_number_firmware);
 FUNC_2(VAR_7, "Bootloader version: %s", VAR_9->part_number_bootloader);

 return FUNC_6(VAR_7);
}
