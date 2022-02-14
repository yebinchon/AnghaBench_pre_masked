
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enabled_phys; } ;
struct asd_ha_struct {TYPE_1__ hw_prof; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {struct asd_ha_struct* lldd_ha; } ;


 TYPE_2__* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct asd_ha_struct*,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct Scsi_Host *VAR_0)
{
 struct asd_ha_struct *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0)->lldd_ha;
 VAR_2 = FUNC_1(VAR_1, VAR_1->hw_prof.enabled_phys);
 if (VAR_2)
  FUNC_2("Couldn't enable phys, err:%d\n", VAR_2);
}
