
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_mvm {TYPE_3__* trans; } ;
struct TYPE_6__ {int dev; int hw_id; TYPE_2__* trans_cfg; } ;
struct TYPE_5__ {TYPE_1__* base_params; } ;
struct TYPE_4__ {int eeprom_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,int *,int) ;
 int FUNC_3 (struct iwl_mvm*,int,int,int,int *) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_2, u16 VAR_3,
    u8 *VAR_4, u32 VAR_5)
{
 u16 VAR_6, VAR_7 = 0;
 int VAR_8;


 VAR_6 = VAR_1;

 VAR_8 = VAR_6;


 while (VAR_8 == VAR_6) {

  if ((VAR_5 + VAR_7 + VAR_6) >
      VAR_2->trans->trans_cfg->base_params->eeprom_size) {
   FUNC_1(VAR_2, "EEPROM size is too small for NVM\n");
   return -VAR_0;
  }

  VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_7, VAR_6, VAR_4);
  if (VAR_8 < 0) {
   FUNC_0(VAR_2->trans->dev,
      "Cannot read NVM from section %d offset %d, length %d\n",
      VAR_3, VAR_7, VAR_6);
   return VAR_8;
  }
  VAR_7 += VAR_8;
 }

 FUNC_2(VAR_2->trans->hw_id, VAR_3, VAR_4, VAR_7);

 FUNC_0(VAR_2->trans->dev,
    "NVM section %d read completed\n", VAR_3);
 return VAR_7;
}
