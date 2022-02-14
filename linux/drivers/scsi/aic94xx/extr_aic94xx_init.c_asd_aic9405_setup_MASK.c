
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr_range; int dev_name_base; int sata_name_base; scalar_t__ port_name_base; } ;
struct asd_ha_struct {TYPE_1__ hw_prof; } ;


 int FUNC_0 (struct asd_ha_struct*) ;

__attribute__((used)) static int FUNC_1(struct asd_ha_struct *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  return VAR_1;

 VAR_0->hw_prof.addr_range = 4;
 VAR_0->hw_prof.port_name_base = 0;
 VAR_0->hw_prof.dev_name_base = 4;
 VAR_0->hw_prof.sata_name_base = 8;

 return 0;
}
