
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_trans {int dummy; } ;
struct iwl_nvm_data {int * hw_addr; } ;
struct iwl_cfg {scalar_t__ nvm_type; scalar_t__ mac_addr_from_csr; } ;
typedef int __le16 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 int FUNC_1 (struct iwl_trans*,char*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_cfg const*,struct iwl_nvm_data*,int const*,int const*) ;
 int FUNC_4 (struct iwl_trans*,struct iwl_nvm_data*) ;

__attribute__((used)) static int FUNC_5(struct iwl_trans *VAR_3,
         const struct iwl_cfg *VAR_4,
         struct iwl_nvm_data *VAR_5, const __be16 *VAR_6,
         const __le16 *VAR_7)
{
 if (VAR_4->mac_addr_from_csr) {
  FUNC_4(VAR_3, VAR_5);
 } else if (VAR_4->nvm_type != VAR_2) {
  const u8 *VAR_8 = (const u8 *)(VAR_6 + VAR_1);


  VAR_5->hw_addr[0] = VAR_8[1];
  VAR_5->hw_addr[1] = VAR_8[0];
  VAR_5->hw_addr[2] = VAR_8[3];
  VAR_5->hw_addr[3] = VAR_8[2];
  VAR_5->hw_addr[4] = VAR_8[5];
  VAR_5->hw_addr[5] = VAR_8[4];
 } else {
  FUNC_3(VAR_3, VAR_4, VAR_5,
            VAR_7, VAR_6);
 }

 if (!FUNC_2(VAR_5->hw_addr)) {
  FUNC_0(VAR_3, "no valid mac address was found\n");
  return -VAR_0;
 }

 FUNC_1(VAR_3, "base HW address: %pM\n", VAR_5->hw_addr);

 return 0;
}
