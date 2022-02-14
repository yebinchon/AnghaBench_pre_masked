
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tp_led_table {scalar_t__ state; int name; } ;
struct ibm_init_struct {int dummy; } ;
typedef int acpi_handle ;
struct TYPE_6__ {int brightness; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct tp_led_table* VAR_3 ;
 int FUNC_4 (int) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_5(struct ibm_init_struct *VAR_6)
{
 acpi_handle VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  struct tp_led_table *VAR_10 = &VAR_3[VAR_8];
  if (FUNC_0(FUNC_1(VAR_2, VAR_10->name, &VAR_7))) {
   VAR_10->state = -VAR_0;
   continue;
  }

  VAR_4[VAR_8].brightness = FUNC_4(VAR_8);
  VAR_9 = FUNC_2(&VAR_5->dev, &VAR_4[VAR_8]);
  if (VAR_9 < 0) {
   while (VAR_8--) {
    if (VAR_3[VAR_8].state >= 0)
     FUNC_3(&VAR_4[VAR_8]);
   }
   return VAR_9;
  }
 }
 return 0;
}
