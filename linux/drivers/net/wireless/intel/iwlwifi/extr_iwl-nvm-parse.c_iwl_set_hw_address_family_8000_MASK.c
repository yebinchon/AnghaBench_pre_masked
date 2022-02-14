
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_trans {int dummy; } ;
struct iwl_nvm_data {int hw_addr; } ;
struct iwl_cfg {int dummy; } ;
typedef int __le32 ;
typedef int __le16 ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct iwl_trans*,int ) ;
 scalar_t__ FUNC_5 (int const*,int const*,int ) ;
 int FUNC_6 (int ,int const*,int ) ;

__attribute__((used)) static void FUNC_7(struct iwl_trans *VAR_4,
        const struct iwl_cfg *VAR_5,
        struct iwl_nvm_data *VAR_6,
        const __le16 *VAR_7,
        const __be16 *VAR_8)
{
 const u8 *VAR_9;

 if (VAR_7) {
  static const u8 VAR_10[] = {
   0x02, 0xcc, 0xaa, 0xff, 0xee, 0x00
  };

  VAR_9 = (const u8 *)(VAR_7 +
     VAR_1);





  FUNC_6(VAR_6->hw_addr, VAR_9, VAR_0);





  if (FUNC_2(VAR_6->hw_addr) &&
      FUNC_5(VAR_10, VAR_9, VAR_0) != 0)
   return;

  FUNC_0(VAR_4,
   "mac address from nvm override section is not valid\n");
 }

 if (VAR_8) {

  __le32 VAR_11 = FUNC_1(FUNC_4(VAR_4,
      VAR_2));
  __le32 VAR_12 = FUNC_1(FUNC_4(VAR_4,
      VAR_3));

  FUNC_3(VAR_11, VAR_12, VAR_6->hw_addr);

  return;
 }

 FUNC_0(VAR_4, "mac address is not found\n");
}
