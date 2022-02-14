
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ power; } ;
struct acpi_processor {TYPE_2__* performance; TYPE_1__ flags; int acpi_id; } ;
struct TYPE_4__ {scalar_t__ states; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct acpi_processor*) ;
 int FUNC_4 (struct acpi_processor*) ;

__attribute__((used)) static int FUNC_5(struct acpi_processor *VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(&VAR_2);
 if (FUNC_0(VAR_3->acpi_id, VAR_1)) {
  FUNC_2(&VAR_2);
  return -VAR_0;
 }
 if (VAR_3->flags.power)
  VAR_4 = FUNC_3(VAR_3);

 if (VAR_3->performance && VAR_3->performance->states)
  VAR_4 |= FUNC_4(VAR_3);

 FUNC_2(&VAR_2);
 return VAR_4;
}
