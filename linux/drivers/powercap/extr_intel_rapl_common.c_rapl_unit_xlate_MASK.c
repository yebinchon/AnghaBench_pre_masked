
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rapl_package {int power_unit; int energy_unit; } ;
struct rapl_domain {int domain_energy_unit; struct rapl_package* rp; } ;
typedef enum unit_type { ____Placeholder_unit_type } unit_type ;
struct TYPE_2__ {int (* compute_time_window ) (struct rapl_package*,int,int) ;} ;




 int VAR_0 ;


 int FUNC_0 (int,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct rapl_package*,int,int) ;

__attribute__((used)) static u64 FUNC_2(struct rapl_domain *VAR_2, enum unit_type VAR_3,
      u64 VAR_4, int VAR_5)
{
 u64 VAR_6 = 1;
 struct rapl_package *VAR_7 = VAR_2->rp;
 u64 VAR_8 = 1;

 switch (VAR_3) {
 case 129:
  VAR_6 = VAR_7->power_unit;
  break;
 case 130:
  VAR_8 = VAR_0;

  if (VAR_2->domain_energy_unit)
   VAR_6 = VAR_2->domain_energy_unit;
  else
   VAR_6 = VAR_7->energy_unit;
  break;
 case 128:
  return VAR_1->compute_time_window(VAR_7, VAR_4, VAR_5);
 case 131:
 default:
  return VAR_4;
 };

 if (VAR_5)
  return FUNC_0(VAR_4, VAR_6) * VAR_8;

 VAR_4 *= VAR_6;

 return FUNC_0(VAR_4, VAR_8);
}
