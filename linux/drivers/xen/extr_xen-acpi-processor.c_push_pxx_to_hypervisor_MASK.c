
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct xen_processor_px {int dummy; } ;
struct xen_processor_performance {int flags; int states; int status_register; int control_register; int platform_limit; } ;
struct TYPE_4__ {int id; struct xen_processor_performance perf; int type; } ;
struct TYPE_5__ {TYPE_1__ set_pminfo; } ;
struct xen_platform_op {TYPE_2__ u; int interface_version; int cmd; } ;
struct acpi_processor_performance {unsigned int state_count; unsigned int state; TYPE_3__* states; int status_register; int control_register; } ;
struct acpi_processor {int acpi_id; struct acpi_processor_performance* performance; int performance_platform_limit; } ;
struct TYPE_6__ {scalar_t__ transition_latency; scalar_t__ power; scalar_t__ core_frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xen_platform_op*) ;
 int FUNC_1 (struct xen_processor_px*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct xen_processor_px*) ;
 int VAR_10 ;
 int FUNC_3 (char*,char,...) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int ,struct xen_processor_px*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct acpi_processor*,struct xen_processor_performance*) ;
 struct xen_processor_px* FUNC_8 (struct acpi_processor*,struct xen_processor_performance*) ;

__attribute__((used)) static int FUNC_9(struct acpi_processor *VAR_11)
{
 int VAR_12 = 0;
 struct xen_platform_op VAR_13 = {
  .cmd = VAR_4,
  .interface_version = VAR_3,
  .u.set_pminfo.id = VAR_11->acpi_id,
  .u.set_pminfo.type = VAR_5,
 };
 struct xen_processor_performance *VAR_14;
 struct xen_processor_px *VAR_15 = ((void*)0);

 VAR_14 = &VAR_13.u.set_pminfo.perf;

 VAR_14->platform_limit = VAR_11->performance_platform_limit;
 VAR_14->flags |= VAR_7;
 FUNC_6(&(VAR_11->performance->control_register),
     &VAR_14->control_register);
 FUNC_6(&(VAR_11->performance->status_register),
     &VAR_14->status_register);
 VAR_14->flags |= VAR_6;
 VAR_15 = FUNC_8(VAR_11, VAR_14);
 if (!FUNC_1(VAR_15)) {
  FUNC_5(VAR_14->states, VAR_15);
  VAR_14->flags |= VAR_9;
 }
 if (!FUNC_7(VAR_11, VAR_14))
  VAR_14->flags |= VAR_8;

 if (VAR_14->flags != (VAR_8 | VAR_9 | VAR_6 | VAR_7)) {
  FUNC_4("ACPI CPU%u missing some P-state data (%x), skipping\n",
   VAR_11->acpi_id, VAR_14->flags);
  VAR_12 = -VAR_1;
  goto err_free;
 }

 if (!VAR_10)
  VAR_12 = FUNC_0(&VAR_13);

 if (!VAR_12) {
  struct acpi_processor_performance *VAR_16;
  unsigned int VAR_17;

  VAR_16 = VAR_11->performance;
  FUNC_3("ACPI CPU%u - P-states uploaded.\n", VAR_11->acpi_id);
  for (VAR_17 = 0; VAR_17 < VAR_16->state_count; VAR_17++) {
   FUNC_3("     %cP%d: %d MHz, %d mW, %d uS\n",
   (VAR_17 == VAR_16->state ? '*' : ' '), VAR_17,
   (u32) VAR_16->states[VAR_17].core_frequency,
   (u32) VAR_16->states[VAR_17].power,
   (u32) VAR_16->states[VAR_17].transition_latency);
  }
 } else if ((VAR_12 != -VAR_0) && (VAR_12 != -VAR_2))



  FUNC_4("(_PXX): Hypervisor error (%d) for ACPI CPU%u\n",
   VAR_12, VAR_11->acpi_id);
err_free:
 if (!FUNC_1(VAR_15))
  FUNC_2(VAR_15);

 return VAR_12;
}
