
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_phy_db_cmd {void* length; void* type; } ;
struct iwl_phy_db {int trans; } ;
struct iwl_host_cmd {int* len; int * dataflags; struct iwl_phy_db_cmd** data; int id; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,struct iwl_host_cmd*) ;

__attribute__((used)) static int FUNC_3(struct iwl_phy_db *VAR_2, u16 VAR_3,
          u16 VAR_4, void *VAR_5)
{
 struct iwl_phy_db_cmd VAR_6;
 struct iwl_host_cmd VAR_7 = {
  .id = VAR_1,
 };

 FUNC_0(VAR_2->trans,
         "Sending PHY-DB hcmd of type %d, of length %d\n",
         VAR_3, VAR_4);


 VAR_6.type = FUNC_1(VAR_3);
 VAR_6.length = FUNC_1(VAR_4);


 VAR_7.data[0] = &VAR_6;
 VAR_7.len[0] = sizeof(struct iwl_phy_db_cmd);
 VAR_7.data[1] = VAR_5;
 VAR_7.len[1] = VAR_4;
 VAR_7.dataflags[1] = VAR_0;

 return FUNC_2(VAR_2->trans, &VAR_7);
}
