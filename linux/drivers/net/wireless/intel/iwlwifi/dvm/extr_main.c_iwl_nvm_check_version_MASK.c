
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* cfg; } ;
struct iwl_nvm_data {scalar_t__ nvm_version; scalar_t__ calib_version; } ;
struct TYPE_2__ {scalar_t__ nvm_ver; scalar_t__ nvm_calib_ver; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_trans*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct iwl_trans*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct iwl_nvm_data *VAR_1,
     struct iwl_trans *VAR_2)
{
 if (VAR_1->nvm_version >= VAR_2->cfg->nvm_ver ||
     VAR_1->calib_version >= VAR_2->cfg->nvm_calib_ver) {
  FUNC_0(VAR_2, "device EEPROM VER=0x%x, CALIB=0x%x\n",
          VAR_1->nvm_version, VAR_1->calib_version);
  return 0;
 }

 FUNC_1(VAR_2,
  "Unsupported (too old) EEPROM VER=0x%x < 0x%x CALIB=0x%x < 0x%x\n",
  VAR_1->nvm_version, VAR_2->cfg->nvm_ver,
  VAR_1->calib_version, VAR_2->cfg->nvm_calib_ver);
 return -VAR_0;
}
