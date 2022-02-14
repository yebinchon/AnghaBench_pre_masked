
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_ha_struct {int dummy; } ;
struct asd_flash_dir {int rev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct asd_ha_struct*,struct asd_flash_dir*) ;
 int FUNC_2 (struct asd_ha_struct*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct asd_ha_struct*,struct asd_flash_dir*) ;
 int FUNC_5 (struct asd_ha_struct*,struct asd_flash_dir*) ;
 int FUNC_6 (struct asd_flash_dir*) ;
 struct asd_flash_dir* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct asd_ha_struct *VAR_3)
{
 int VAR_4;
 struct asd_flash_dir *VAR_5;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_7(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_4 = -VAR_0;
 if (!FUNC_1(VAR_3, VAR_5)) {
  FUNC_0("couldn't find flash directory\n");
  goto out;
 }

 if (FUNC_8(VAR_5->rev) != 2) {
  FUNC_3("unsupported flash dir version:0x%x\n",
      FUNC_8(VAR_5->rev));
  goto out;
 }

 VAR_4 = FUNC_5(VAR_3, VAR_5);
 if (VAR_4) {
  FUNC_0("couldn't process manuf sector settings\n");
  goto out;
 }

 VAR_4 = FUNC_4(VAR_3, VAR_5);
 if (VAR_4) {
  FUNC_0("couldn't process CTRL-A user settings\n");
  goto out;
 }

out:
 FUNC_6(VAR_5);
 return VAR_4;
}
