
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rapl_package {int domain_map; TYPE_2__* priv; struct rapl_domain* domains; } ;
struct rapl_domain {int id; scalar_t__ domain_energy_unit; int * regs; TYPE_1__* rpl; int name; struct rapl_package* rp; } ;
typedef enum rapl_domain_type { ____Placeholder_rapl_domain_type } rapl_domain_type ;
typedef enum rapl_domain_reg_id { ____Placeholder_rapl_domain_reg_id } rapl_domain_reg_id ;
struct TYPE_6__ {scalar_t__ dram_domain_energy_unit; } ;
struct TYPE_5__ {int* limits; int ** regs; } ;
struct TYPE_4__ {int name; int prim_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,scalar_t__) ;
 TYPE_3__* VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static void FUNC_1(struct rapl_package *VAR_9)
{
 enum rapl_domain_type VAR_10;
 enum rapl_domain_reg_id VAR_11;
 struct rapl_domain *VAR_12 = VAR_9->domains;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  unsigned int VAR_13 = VAR_9->domain_map & (1 << VAR_10);

  if (!VAR_13)
   continue;

  VAR_12->rp = VAR_9;
  VAR_12->name = VAR_8[VAR_10];
  VAR_12->id = VAR_10;
  VAR_12->rpl[0].prim_id = VAR_0;
  VAR_12->rpl[0].name = VAR_5;

  if (VAR_9->priv->limits[VAR_10] == 2) {
   VAR_12->rpl[1].prim_id = VAR_1;
   VAR_12->rpl[1].name = VAR_6;
  }

  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
   VAR_12->regs[VAR_11] = VAR_9->priv->regs[VAR_10][VAR_11];

  if (VAR_10 == VAR_2) {
   VAR_12->domain_energy_unit =
       VAR_7->dram_domain_energy_unit;
   if (VAR_12->domain_energy_unit)
    FUNC_0("DRAM domain energy unit %dpj\n",
     VAR_12->domain_energy_unit);
  }
  VAR_12++;
 }
}
