
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct at91_devtype_data {int dummy; } ;
struct TYPE_3__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 struct of_device_id* FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static const struct at91_devtype_data *FUNC_3(struct platform_device *VAR_1)
{
 if (VAR_1->dev.of_node) {
  const struct of_device_id *VAR_2;

  VAR_2 = FUNC_1(VAR_0, VAR_1->dev.of_node);
  if (!VAR_2) {
   FUNC_0(&VAR_1->dev, "no matching node found in dtb\n");
   return ((void*)0);
  }
  return (const struct at91_devtype_data *)VAR_2->data;
 }
 return (const struct at91_devtype_data *)
  FUNC_2(VAR_1)->driver_data;
}
