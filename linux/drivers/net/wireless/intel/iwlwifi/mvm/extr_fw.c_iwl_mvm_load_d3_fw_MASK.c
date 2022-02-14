
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int * fw_id_to_mac_id; int phy_db; int trans; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,int ) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct iwl_mvm*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct iwl_mvm *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_11(&VAR_1->mutex);

 VAR_2 = FUNC_10(VAR_1->trans);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_5(VAR_1, VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_1, "Failed to start WoWLAN firmware: %d\n", VAR_2);
  goto error;
 }

 VAR_2 = FUNC_9(VAR_1, FUNC_4(VAR_1));
 if (VAR_2)
  goto error;


 VAR_2 = FUNC_8(VAR_1->phy_db);
 if (VAR_2)
  goto error;

 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2)
  goto error;


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->fw_id_to_mac_id); VAR_3++)
  FUNC_2(VAR_1->fw_id_to_mac_id[VAR_3], ((void*)0));


 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto error;

 return 0;
 error:
 FUNC_6(VAR_1);
 return VAR_2;
}
