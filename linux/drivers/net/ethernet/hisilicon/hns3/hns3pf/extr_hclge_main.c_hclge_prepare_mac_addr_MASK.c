
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int u32 ;
struct hclge_mac_vlan_tbl_entry_cmd {int mac_addr_lo16; int mac_addr_hi32; int mc_mac_en; int entry_type; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hclge_mac_vlan_tbl_entry_cmd *VAR_2,
       const u8 *VAR_3, bool VAR_4)
{
 const unsigned char *VAR_5 = VAR_3;
 u32 VAR_6 = VAR_5[2] << 16 | (VAR_5[3] << 24) |
         (VAR_5[0]) | (VAR_5[1] << 8);
 u32 VAR_7 = VAR_5[4] | (VAR_5[5] << 8);

 FUNC_2(VAR_2->flags, VAR_0, 1);
 if (VAR_4) {
  FUNC_2(VAR_2->entry_type, VAR_1, 1);
  FUNC_2(VAR_2->mc_mac_en, VAR_0, 1);
 }

 VAR_2->mac_addr_hi32 = FUNC_1(VAR_6);
 VAR_2->mac_addr_lo16 = FUNC_0(VAR_7 & 0xffff);
}
