
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int mac_addr_set; int mac_address; } ;
struct be_cmd_get_nic_conf_resp {int mac_address; } ;
typedef int resp ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct be_cmd_get_nic_conf_resp*,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,struct be_cmd_get_nic_conf_resp*) ;
 int FUNC_3 (char*,int ,int ) ;

int FUNC_4(char *VAR_1, struct beiscsi_hba *VAR_2)
{
 struct be_cmd_get_nic_conf_resp VAR_3;
 int VAR_4;

 if (VAR_2->mac_addr_set)
  return FUNC_3(VAR_1, VAR_2->mac_address, VAR_0);

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_4 = FUNC_2(VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_2->mac_addr_set = 1;
 FUNC_0(VAR_2->mac_address, VAR_3.mac_address, VAR_0);
 return FUNC_3(VAR_1, VAR_2->mac_address, VAR_0);
}
