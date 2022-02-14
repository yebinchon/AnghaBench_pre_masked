
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct asd_ll_el {int dummy; } ;
struct TYPE_3__ {int sas_addr; } ;
struct asd_ha_struct {TYPE_1__ hw_prof; } ;
struct asd_flash_dir {int dummy; } ;
struct asd_ctrla_phy_settings {char id0; int num_phys; TYPE_2__* phy_ent; } ;
struct TYPE_4__ {int sas_link_rates; int flags; int sata_link_rates; int sas_addr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct asd_flash_dir*,int ,int*,int*) ;
 struct asd_ctrla_phy_settings* FUNC_2 (struct asd_ll_el*,char,int) ;
 int FUNC_3 (struct asd_ha_struct*,struct asd_ctrla_phy_settings*) ;
 int FUNC_4 (struct asd_ha_struct*,void*,int,int) ;
 int FUNC_5 (struct asd_ll_el*) ;
 struct asd_ll_el* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct asd_ha_struct *VAR_6,
       struct asd_flash_dir *VAR_7)
{
 int VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 struct asd_ll_el *VAR_12 = ((void*)0);
 struct asd_ctrla_phy_settings *VAR_13;
 struct asd_ctrla_phy_settings VAR_14;

 VAR_8 = FUNC_1(VAR_7, VAR_3, &VAR_10, &VAR_11);
 if (VAR_8) {
  FUNC_0("couldn't find CTRL-A user settings section\n");
  FUNC_0("Creating default CTRL-A user settings section\n");

  VAR_14.id0 = 'h';
  VAR_14.num_phys = 8;
  for (VAR_9 =0; VAR_9 < VAR_0; VAR_9++) {
   FUNC_7(VAR_14.phy_ent[VAR_9].sas_addr,
          VAR_6->hw_prof.sas_addr, VAR_5);
   VAR_14.phy_ent[VAR_9].sas_link_rates = 0x98;
   VAR_14.phy_ent[VAR_9].flags = 0x0;
   VAR_14.phy_ent[VAR_9].sata_link_rates = 0x0;
  }

  VAR_11 = sizeof(struct asd_ctrla_phy_settings);
  VAR_13 = &VAR_14;
  goto out_process;
 }

 if (VAR_11 == 0)
  goto out;

 VAR_8 = -VAR_2;
 VAR_12 = FUNC_6(VAR_11, VAR_4);
 if (!VAR_12) {
  FUNC_0("no mem for ctrla user settings section\n");
  goto out;
 }

 VAR_8 = FUNC_4(VAR_6, (void *)VAR_12, VAR_10, VAR_11);
 if (VAR_8) {
  FUNC_0("couldn't read ctrla phy settings section\n");
  goto out2;
 }

 VAR_8 = -VAR_1;
 VAR_13 = FUNC_2(VAR_12, 'h', 0xFF);
 if (!VAR_13) {
  FUNC_0("couldn't find ctrla phy settings struct\n");
  goto out2;
 }
out_process:
 VAR_8 = FUNC_3(VAR_6, VAR_13);
 if (VAR_8) {
  FUNC_0("couldn't process ctrla phy settings\n");
  goto out2;
 }
out2:
 FUNC_5(VAR_12);
out:
 return VAR_8;
}
