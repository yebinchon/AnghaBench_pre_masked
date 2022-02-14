
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_processor_px {int dummy; } ;
struct xen_processor_performance {unsigned int state_count; } ;
struct acpi_processor_px {int dummy; } ;
struct acpi_processor {TYPE_1__* performance; } ;
struct TYPE_2__ {unsigned int state_count; int * states; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct xen_processor_px* FUNC_1 (int ) ;
 int VAR_1 ;
 struct xen_processor_px* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (struct xen_processor_px*,int *,int) ;

__attribute__((used)) static struct xen_processor_px *
FUNC_4(struct acpi_processor *VAR_2,
    struct xen_processor_performance *VAR_3)
{
 struct xen_processor_px *VAR_4 = ((void*)0);
 unsigned int VAR_5;

 FUNC_0(sizeof(struct xen_processor_px) !=
       sizeof(struct acpi_processor_px));

 VAR_4 = FUNC_2(VAR_2->performance->state_count,
        sizeof(struct xen_processor_px), VAR_1);
 if (!VAR_4)
  return FUNC_1(-VAR_0);

 VAR_3->state_count = VAR_2->performance->state_count;
 for (VAR_5 = 0; VAR_5 < VAR_2->performance->state_count; VAR_5++) {

  FUNC_3(&(VAR_4[VAR_5]), &(VAR_2->performance->states[VAR_5]),
         sizeof(struct acpi_processor_px));
 }
 return VAR_4;
}
