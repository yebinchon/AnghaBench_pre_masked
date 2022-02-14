
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_psd_package {int dummy; } ;
struct xen_processor_performance {int domain_info; int shared_type; } ;
struct acpi_psd_package {int num_processors; scalar_t__ coord_type; } ;
struct acpi_processor {TYPE_1__* performance; } ;
struct TYPE_2__ {struct acpi_psd_package domain_info; int shared_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,struct acpi_psd_package*,int) ;

__attribute__((used)) static int FUNC_2(struct acpi_processor *VAR_6,
        struct xen_processor_performance *VAR_7)
{
 struct acpi_psd_package *VAR_8;

 FUNC_0(sizeof(struct xen_psd_package) !=
       sizeof(struct acpi_psd_package));




 VAR_7->shared_type = VAR_6->performance->shared_type;

 VAR_8 = &(VAR_6->performance->domain_info);




 if (VAR_8->num_processors <= 1) {
  if (VAR_8->coord_type == VAR_4)
   VAR_7->shared_type = VAR_0;
  else if (VAR_8->coord_type == VAR_3)
   VAR_7->shared_type = VAR_2;
  else if (VAR_8->coord_type == VAR_5)
   VAR_7->shared_type = VAR_1;

 }
 FUNC_1(&(VAR_7->domain_info), VAR_8, sizeof(struct acpi_psd_package));
 return 0;
}
