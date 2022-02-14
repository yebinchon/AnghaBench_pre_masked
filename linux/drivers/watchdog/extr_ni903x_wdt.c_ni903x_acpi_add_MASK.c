
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {struct device* parent; int timeout; int max_timeout; int min_timeout; int * ops; int * info; } ;
struct ni903x_wdt {scalar_t__ io_base; struct watchdog_device wdd; struct device* dev; } ;
struct device {int dummy; } ;
struct acpi_device {int handle; struct ni903x_wdt* driver_data; struct device dev; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int ,struct ni903x_wdt*) ;
 int FUNC_2 (struct device*,char*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct device*,char*) ;
 struct ni903x_wdt* FUNC_4 (struct device*,int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int,scalar_t__) ;
 int VAR_14 ;
 int FUNC_6 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_7 (struct watchdog_device*) ;
 int FUNC_8 (struct watchdog_device*,struct ni903x_wdt*) ;
 int FUNC_9 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct acpi_device *VAR_15)
{
 struct device *VAR_16 = &VAR_15->dev;
 struct watchdog_device *VAR_17;
 struct ni903x_wdt *VAR_18;
 acpi_status VAR_19;
 int VAR_20;

 VAR_18 = FUNC_4(VAR_16, sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_1;

 VAR_15->driver_data = VAR_18;
 VAR_18->dev = VAR_16;

 VAR_19 = FUNC_1(VAR_15->handle, VAR_3,
         VAR_10, VAR_18);
 if (FUNC_0(VAR_19) || VAR_18->io_base == 0) {
  FUNC_3(VAR_16, "failed to get resources\n");
  return -VAR_0;
 }

 VAR_17 = &VAR_18->wdd;
 VAR_17->info = &VAR_11;
 VAR_17->ops = &VAR_12;
 VAR_17->min_timeout = VAR_9;
 VAR_17->max_timeout = VAR_8;
 VAR_17->timeout = VAR_7;
 VAR_17->parent = VAR_16;
 FUNC_8(VAR_17, VAR_18);
 FUNC_9(VAR_17, VAR_13);
 FUNC_6(VAR_17, VAR_14, VAR_16);

 VAR_20 = FUNC_7(VAR_17);
 if (VAR_20)
  return VAR_20;


 FUNC_5(VAR_6 | VAR_5,
      VAR_18->io_base + VAR_4);

 FUNC_2(VAR_16, "io_base=0x%04X, timeout=%d, nowayout=%d\n",
  VAR_18->io_base, VAR_14, VAR_13);

 return 0;
}
