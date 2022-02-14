
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int max_scbs; int num_phys; int enabled_phys; TYPE_1__* phy_desc; int max_ddbs; } ;
struct asd_ha_struct {size_t revision_id; TYPE_2__ hw_prof; TYPE_3__* pcidev; } ;
struct TYPE_6__ {size_t revision; } ;
struct TYPE_4__ {void* min_sata_lrate; void* max_sata_lrate; void* min_sas_lrate; int max_sas_lrate; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (char*,int ,int ,size_t) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct asd_ha_struct *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_7->revision_id = VAR_7->pcidev->revision;

 VAR_8 = -VAR_3;
 if (VAR_7->revision_id < VAR_0) {
  FUNC_0("%s is revision %s (%X), which is not supported\n",
      FUNC_1(VAR_7->pcidev),
      VAR_6[VAR_7->revision_id],
      VAR_7->revision_id);
  goto Err;
 }

 VAR_7->hw_prof.max_scbs = 512;
 VAR_7->hw_prof.max_ddbs = VAR_1;
 VAR_7->hw_prof.num_phys = VAR_2;

 VAR_7->hw_prof.enabled_phys = 0xFF;
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_7->hw_prof.phy_desc[VAR_9].max_sas_lrate =
   VAR_5;
  VAR_7->hw_prof.phy_desc[VAR_9].min_sas_lrate =
   VAR_4;
  VAR_7->hw_prof.phy_desc[VAR_9].max_sata_lrate =
   VAR_4;
  VAR_7->hw_prof.phy_desc[VAR_9].min_sata_lrate =
   VAR_4;
 }

 return 0;
Err:
 return VAR_8;
}
