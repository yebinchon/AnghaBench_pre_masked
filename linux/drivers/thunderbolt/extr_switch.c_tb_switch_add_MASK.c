
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_port_number; } ;
struct tb_switch {int dev; scalar_t__ rpm; scalar_t__ device_name; scalar_t__ vendor_name; scalar_t__ device; scalar_t__ vendor; TYPE_2__* ports; TYPE_1__ config; int uid; int safe_mode; } ;
struct TYPE_5__ {scalar_t__ disabled; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct tb_switch*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_12 (struct tb_switch*) ;
 int FUNC_13 (struct tb_switch*,char*,int ) ;
 int FUNC_14 (struct tb_switch*,char*) ;
 int FUNC_15 (struct tb_switch*) ;
 int FUNC_16 (struct tb_switch*) ;
 int FUNC_17 (struct tb_switch*) ;

int FUNC_18(struct tb_switch *VAR_1)
{
 int VAR_2, VAR_3;
 VAR_3 = FUNC_15(VAR_1);
 if (VAR_3)
  return VAR_3;

 if (!VAR_1->safe_mode) {

  VAR_3 = FUNC_9(VAR_1);
  if (VAR_3) {
   FUNC_14(VAR_1, "tb_eeprom_read_rom failed\n");
   return VAR_3;
  }
  FUNC_13(VAR_1, "uid: %#llx\n", VAR_1->uid);

  VAR_3 = FUNC_17(VAR_1);
  if (VAR_3)
   return VAR_3;

  for (VAR_2 = 0; VAR_2 <= VAR_1->config.max_port_number; VAR_2++) {
   if (VAR_1->ports[VAR_2].disabled) {
    FUNC_11(&VAR_1->ports[VAR_2], "disabled by eeprom\n");
    continue;
   }
   VAR_3 = FUNC_10(&VAR_1->ports[VAR_2]);
   if (VAR_3)
    return VAR_3;
  }
 }

 VAR_3 = FUNC_1(&VAR_1->dev);
 if (VAR_3)
  return VAR_3;

 if (FUNC_12(VAR_1)) {
  FUNC_0(&VAR_1->dev, "new device found, vendor=%#x device=%#x\n",
    VAR_1->vendor, VAR_1->device);
  if (VAR_1->vendor_name && VAR_1->device_name)
   FUNC_0(&VAR_1->dev, "%s %s\n", VAR_1->vendor_name,
     VAR_1->device_name);
 }

 VAR_3 = FUNC_16(VAR_1);
 if (VAR_3) {
  FUNC_2(&VAR_1->dev);
  return VAR_3;
 }

 FUNC_6(&VAR_1->dev);
 if (VAR_1->rpm) {
  FUNC_7(&VAR_1->dev, VAR_0);
  FUNC_8(&VAR_1->dev);
  FUNC_5(&VAR_1->dev);
  FUNC_4(&VAR_1->dev);
  FUNC_3(&VAR_1->dev);
 }

 return 0;
}
