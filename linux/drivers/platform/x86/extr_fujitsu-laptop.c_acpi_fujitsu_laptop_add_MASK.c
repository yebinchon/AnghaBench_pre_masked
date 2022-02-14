
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fujitsu_laptop {scalar_t__ flags_supported; int fifo; scalar_t__ flags_state; int fifo_lock; } ;
struct acpi_device {int handle; struct fujitsu_laptop* driver_data; int dev; } ;
struct TYPE_6__ {TYPE_2__* bl_device; } ;
struct TYPE_4__ {int power; } ;
struct TYPE_5__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct acpi_device*,char*) ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct acpi_device*) ;
 int FUNC_5 (struct acpi_device*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (struct acpi_device*,int ,int,int,int) ;
 struct fujitsu_laptop* FUNC_10 (int *,int,int ) ;
 struct acpi_device* VAR_15 ;
 TYPE_3__* VAR_16 ;
 int FUNC_11 (struct acpi_device*) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int FUNC_17(struct acpi_device *VAR_17)
{
 struct fujitsu_laptop *VAR_18;
 int VAR_19, VAR_20 = 0;

 VAR_18 = FUNC_10(&VAR_17->dev, sizeof(*VAR_18), VAR_10);
 if (!VAR_18)
  return -VAR_4;

 FUNC_0(VAR_15, "More than one FUJ02E3 ACPI device was found.  Driver may not work as intended.");
 VAR_15 = VAR_17;

 FUNC_16(FUNC_3(VAR_17), VAR_1);
 FUNC_16(FUNC_2(VAR_17), VAR_0);
 VAR_17->driver_data = VAR_18;


 FUNC_15(&VAR_18->fifo_lock);
 VAR_19 = FUNC_12(&VAR_18->fifo, VAR_12 * sizeof(int),
     VAR_10);
 if (VAR_19)
  return VAR_19;

 FUNC_14("ACPI: %s [%s]\n",
  FUNC_3(VAR_17), FUNC_1(VAR_17));

 while (FUNC_9(VAR_17, VAR_8, 0x1, 0x0, 0x0) != 0 &&
        VAR_20++ < VAR_11)
  ;
 FUNC_6(VAR_17->handle, "Discarded %i ringbuffer entries\n",
     VAR_20);

 VAR_18->flags_supported = FUNC_9(VAR_17, VAR_9, 0x0, 0x0,
            0x0);



 if (VAR_18->flags_supported == VAR_13)
  VAR_18->flags_supported = 0;

 if (VAR_18->flags_supported)
  VAR_18->flags_state = FUNC_9(VAR_17, VAR_9, 0x4, 0x0,
         0x0);


 FUNC_7(VAR_17->handle, "BTNI: [0x%x]\n",
    FUNC_9(VAR_17, VAR_8, 0x0, 0x0, 0x0));


 if (VAR_16 && VAR_16->bl_device &&
     FUNC_8() == VAR_14) {
  if (FUNC_9(VAR_15, VAR_7, 0x2,
       VAR_3, 0x0) == VAR_2)
   VAR_16->bl_device->props.power = VAR_5;
  else
   VAR_16->bl_device->props.power = VAR_6;
 }

 VAR_19 = FUNC_4(VAR_17);
 if (VAR_19)
  goto err_free_fifo;

 VAR_19 = FUNC_5(VAR_17);
 if (VAR_19)
  goto err_free_fifo;

 VAR_19 = FUNC_11(VAR_17);
 if (VAR_19)
  goto err_free_fifo;

 return 0;

err_free_fifo:
 FUNC_13(&VAR_18->fifo);

 return VAR_19;
}
