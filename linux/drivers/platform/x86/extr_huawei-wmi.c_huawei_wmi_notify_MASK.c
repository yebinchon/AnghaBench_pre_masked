
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
struct wmi_device {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct wmi_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct wmi_device *VAR_1,
  union acpi_object *VAR_2)
{
 if (VAR_2->type == VAR_0)
  FUNC_1(VAR_1, VAR_2->integer.value);
 else
  FUNC_0(&VAR_1->dev, "Bad response type %d\n", VAR_2->type);
}
