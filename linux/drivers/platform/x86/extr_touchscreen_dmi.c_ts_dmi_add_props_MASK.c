
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct TYPE_2__ {int properties; int acpi_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,int ) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 int VAR_4;

 if (FUNC_2(VAR_3) &&
     !FUNC_3(VAR_1->acpi_name, VAR_2->name, VAR_0)) {
  VAR_4 = FUNC_1(VAR_3, VAR_1->properties);
  if (VAR_4)
   FUNC_0(VAR_3, "failed to add properties: %d\n", VAR_4);
 }
}
