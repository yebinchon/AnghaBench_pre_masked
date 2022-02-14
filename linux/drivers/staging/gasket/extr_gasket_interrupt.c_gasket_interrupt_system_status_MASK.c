
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gasket_dev {int dev; TYPE_1__* interrupt_data; } ;
struct TYPE_2__ {scalar_t__ num_configured; scalar_t__ num_interrupts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(struct gasket_dev *VAR_3)
{
 if (!VAR_3->interrupt_data) {
  FUNC_0(VAR_3->dev, "Interrupt data is null\n");
  return VAR_1;
 }

 if (VAR_3->interrupt_data->num_configured !=
  VAR_3->interrupt_data->num_interrupts) {
  FUNC_0(VAR_3->dev,
   "Not all interrupts were configured\n");
  return VAR_2;
 }

 return VAR_0;
}
