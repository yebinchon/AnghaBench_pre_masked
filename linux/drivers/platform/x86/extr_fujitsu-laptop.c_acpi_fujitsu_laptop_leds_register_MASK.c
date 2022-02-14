
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {char* name; char* default_trigger; int brightness_get; int brightness_set_blocking; } ;
struct fujitsu_laptop {int flags_supported; } ;
struct acpi_device {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct fujitsu_laptop* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*,int ,int,int,int) ;
 struct led_classdev* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,struct led_classdev*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_16)
{
 struct fujitsu_laptop *VAR_17 = FUNC_1(VAR_16);
 struct led_classdev *VAR_18;
 int VAR_19;

 if (FUNC_2(VAR_16,
      VAR_3, 0x0, 0x0, 0x0) & VAR_6) {
  VAR_18 = FUNC_3(&VAR_16->dev, sizeof(*VAR_18), VAR_4);
  if (!VAR_18)
   return -VAR_1;

  VAR_18->name = "fujitsu::logolamp";
  VAR_18->brightness_set_blocking = VAR_13;
  VAR_18->brightness_get = VAR_12;
  VAR_19 = FUNC_4(&VAR_16->dev, VAR_18);
  if (VAR_19)
   return VAR_19;
 }

 if ((FUNC_2(VAR_16,
       VAR_3, 0x0, 0x0, 0x0) & VAR_5) &&
     (FUNC_2(VAR_16, VAR_2, 0x0, 0x0, 0x0) == 0x0)) {
  VAR_18 = FUNC_3(&VAR_16->dev, sizeof(*VAR_18), VAR_4);
  if (!VAR_18)
   return -VAR_1;

  VAR_18->name = "fujitsu::kblamps";
  VAR_18->brightness_set_blocking = VAR_11;
  VAR_18->brightness_get = VAR_10;
  VAR_19 = FUNC_4(&VAR_16->dev, VAR_18);
  if (VAR_19)
   return VAR_19;
 }
 if (VAR_17->flags_supported & FUNC_0(17)) {
  VAR_18 = FUNC_3(&VAR_16->dev, sizeof(*VAR_18), VAR_4);
  if (!VAR_18)
   return -VAR_1;

  VAR_18->name = "fujitsu::radio_led";
  VAR_18->brightness_set_blocking = VAR_15;
  VAR_18->brightness_get = VAR_14;
  VAR_18->default_trigger = "rfkill-any";
  VAR_19 = FUNC_4(&VAR_16->dev, VAR_18);
  if (VAR_19)
   return VAR_19;
 }






 if ((FUNC_2(VAR_16, VAR_3, 0x0, 0x0, 0x0) & FUNC_0(14)) &&
     (FUNC_2(VAR_16,
       VAR_3, 0x2, VAR_0, 0x0) != VAR_7)) {
  VAR_18 = FUNC_3(&VAR_16->dev, sizeof(*VAR_18), VAR_4);
  if (!VAR_18)
   return -VAR_1;

  VAR_18->name = "fujitsu::eco_led";
  VAR_18->brightness_set_blocking = VAR_9;
  VAR_18->brightness_get = VAR_8;
  VAR_19 = FUNC_4(&VAR_16->dev, VAR_18);
  if (VAR_19)
   return VAR_19;
 }

 return 0;
}
