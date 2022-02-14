
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mac_configuration_entry {int dummy; } ;
struct mac_configuration_cmd {int hdr; struct mac_configuration_entry* config_table; } ;
struct bnx2x_raw_obj {int cl_id; } ;
struct bnx2x_vlan_mac_obj {struct bnx2x_raw_obj raw; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int *,int ,int) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,int,int,int *,int ,struct mac_configuration_entry*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,int,int,int *) ;

__attribute__((used)) static inline void FUNC_3(struct bnx2x *VAR_1,
 struct bnx2x_vlan_mac_obj *VAR_2, int VAR_3, int VAR_4, bool VAR_5,
 u8 *VAR_6, u16 VAR_7, int VAR_8, struct mac_configuration_cmd *VAR_9)
{
 struct mac_configuration_entry *VAR_10 = &VAR_9->config_table[0];
 struct bnx2x_raw_obj *VAR_11 = &VAR_2->raw;

 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
      &VAR_9->hdr);
 FUNC_1(VAR_1, VAR_2, VAR_5, VAR_8, VAR_6, VAR_7,
      VAR_10);

 FUNC_0(VAR_0, "%s MAC %pM CLID %d CAM offset %d\n",
    (VAR_5 ? "setting" : "clearing"),
    VAR_6, VAR_11->cl_id, VAR_4);
}
