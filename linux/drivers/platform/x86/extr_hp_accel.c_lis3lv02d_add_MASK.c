
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct acpi_device {int dev; TYPE_1__* driver_data; } ;
struct TYPE_9__ {int work; int led_classdev; } ;
struct TYPE_8__ {scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {TYPE_4__ ac; int write; int read; int init; struct acpi_device* bus_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 TYPE_6__ VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (struct acpi_device*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,char*) ;

__attribute__((used)) static int FUNC_15(struct acpi_device *VAR_12)
{
 int VAR_13;

 if (!VAR_12)
  return -VAR_2;

 VAR_6.bus_priv = VAR_12;
 VAR_6.init = VAR_7;
 VAR_6.read = VAR_8;
 VAR_6.write = VAR_9;
 FUNC_13(FUNC_2(VAR_12), VAR_1);
 FUNC_13(FUNC_1(VAR_12), VAR_0);
 VAR_12->driver_data = &VAR_6;


 FUNC_8(VAR_12);


 if (VAR_6.ac.x && VAR_6.ac.y && VAR_6.ac.z) {
  FUNC_12("Using custom axes %d,%d,%d\n",
   VAR_6.ac.x, VAR_6.ac.y, VAR_6.ac.z);
 } else if (FUNC_4(VAR_11) == 0) {
  FUNC_12("laptop model unknown, using default axes configuration\n");
  VAR_6.ac = VAR_10;
 }


 VAR_13 = FUNC_9(&VAR_6);
 if (VAR_13)
  return VAR_13;



 if (FUNC_14(FUNC_3(&VAR_12->dev), "HPQ6000"))
  FUNC_6(VAR_4);

 FUNC_0(&VAR_5.work, VAR_3);
 VAR_13 = FUNC_7(((void*)0), &VAR_5.led_classdev);
 if (VAR_13) {
  FUNC_10(&VAR_6);
  FUNC_11(&VAR_6);
  FUNC_5(&VAR_5.work);
  return VAR_13;
 }

 return VAR_13;
}
