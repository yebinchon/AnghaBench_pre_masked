
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fujitsu_bl {int max_brightness; } ;
struct acpi_device {struct fujitsu_bl* driver_data; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 scalar_t__ FUNC_4 () ;
 struct fujitsu_bl* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct acpi_device*) ;
 struct fujitsu_bl* VAR_7 ;
 int FUNC_7 (struct acpi_device*) ;
 scalar_t__ FUNC_8 (struct acpi_device*) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct acpi_device *VAR_8)
{
 struct fujitsu_bl *VAR_9;
 int VAR_10;

 if (FUNC_4() != VAR_6)
  return -VAR_2;

 VAR_9 = FUNC_5(&VAR_8->dev, sizeof(*VAR_9), VAR_5);
 if (!VAR_9)
  return -VAR_3;

 VAR_7 = VAR_9;
 FUNC_10(FUNC_2(VAR_8), VAR_0);
 FUNC_10(FUNC_1(VAR_8), VAR_1);
 VAR_8->driver_data = VAR_9;

 FUNC_9("ACPI: %s [%s]\n",
  FUNC_2(VAR_8), FUNC_0(VAR_8));

 if (FUNC_8(VAR_8) <= 0)
  VAR_9->max_brightness = VAR_4;
 FUNC_7(VAR_8);

 VAR_10 = FUNC_3(VAR_8);
 if (VAR_10)
  return VAR_10;

 return FUNC_6(VAR_8);
}
