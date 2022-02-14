
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct asd_manuf_sec {int dummy; } ;
struct TYPE_2__ {int pcba_sn; int sas_addr; } ;
struct asd_ha_struct {TYPE_1__ hw_prof; } ;
struct asd_flash_dir {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct asd_flash_dir*,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct asd_ha_struct*,struct asd_manuf_sec*) ;
 int FUNC_4 (struct asd_ha_struct*,struct asd_manuf_sec*) ;
 int FUNC_5 (struct asd_ha_struct*,struct asd_manuf_sec*) ;
 int FUNC_6 (struct asd_ha_struct*,struct asd_manuf_sec*) ;
 int FUNC_7 (struct asd_ha_struct*,void*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct asd_manuf_sec*) ;
 int FUNC_9 (struct asd_manuf_sec*) ;
 struct asd_manuf_sec* FUNC_10 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_11(struct asd_ha_struct *VAR_3,
     struct asd_flash_dir *VAR_4)
{
 int VAR_5;
 struct asd_manuf_sec *VAR_6;
 u32 VAR_7, VAR_8;

 VAR_5 = FUNC_2(VAR_4, VAR_1, &VAR_7, &VAR_8);
 if (VAR_5) {
  FUNC_0("Couldn't find the manuf. sector\n");
  goto out;
 }

 if (VAR_8 == 0)
  goto out;

 VAR_5 = -VAR_0;
 VAR_6 = FUNC_10(VAR_8, VAR_2);
 if (!VAR_6) {
  FUNC_0("no mem for manuf sector\n");
  goto out;
 }

 VAR_5 = FUNC_7(VAR_3, (void *)VAR_6, VAR_7, VAR_8);
 if (VAR_5) {
  FUNC_0("couldn't read manuf sector at 0x%x, size 0x%x\n",
       VAR_7, VAR_8);
  goto out2;
 }

 VAR_5 = FUNC_8(VAR_6);
 if (VAR_5) {
  FUNC_0("couldn't validate manuf sector\n");
  goto out2;
 }

 VAR_5 = FUNC_6(VAR_3, VAR_6);
 if (VAR_5) {
  FUNC_0("couldn't read the SAS_ADDR\n");
  goto out2;
 }
 FUNC_0("manuf sect SAS_ADDR %llx\n",
      FUNC_1(VAR_3->hw_prof.sas_addr));

 VAR_5 = FUNC_4(VAR_3, VAR_6);
 if (VAR_5) {
  FUNC_0("couldn't read the PCBA SN\n");
  goto out2;
 }
 FUNC_0("manuf sect PCBA SN %s\n", VAR_3->hw_prof.pcba_sn);

 VAR_5 = FUNC_5(VAR_3, VAR_6);
 if (VAR_5) {
  FUNC_0("ms: couldn't get phy parameters\n");
  goto out2;
 }

 VAR_5 = FUNC_3(VAR_3, VAR_6);
 if (VAR_5) {
  FUNC_0("ms: couldn't get connector map\n");
  goto out2;
 }

out2:
 FUNC_9(VAR_6);
out:
 return VAR_5;
}
