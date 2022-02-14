
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct fw_vi_mac_vni {int valid_to_idx; void* vni_mask_pkd; void* lookup_type_to_vni; int macaddr_mask; int macaddr; } ;
struct TYPE_2__ {struct fw_vi_mac_vni* exact_vni; } ;
struct fw_vi_mac_cmd {void* freemacs_to_len16; void* op_to_viid; TYPE_1__ u; } ;
struct adapter {int mbox; } ;
typedef int c ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int VAR_5 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 void* FUNC_12 (int) ;
 int FUNC_13 (int ,int const*,int) ;
 int FUNC_14 (struct fw_vi_mac_cmd*,int ,int) ;
 int FUNC_15 (struct adapter*,int ,struct fw_vi_mac_cmd*,int,struct fw_vi_mac_cmd*,int) ;

int FUNC_16(struct adapter *VAR_6, unsigned int VAR_7,
       const u8 *VAR_8, const u8 *VAR_9, unsigned int VAR_10,
       unsigned int VAR_11, u8 VAR_12, u8 VAR_13,
       bool VAR_14)
{
 struct fw_vi_mac_cmd VAR_15;
 struct fw_vi_mac_vni *VAR_16 = VAR_15.u.exact_vni;
 int VAR_17 = 0;
 u32 VAR_18;

 FUNC_14(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.op_to_viid = FUNC_12(FUNC_1(VAR_3) |
       VAR_0 | VAR_1 |
       FUNC_7(VAR_7));
 VAR_18 = FUNC_0(1) |
       FUNC_3(VAR_5);
 VAR_15.freemacs_to_len16 = FUNC_12(VAR_18);
 VAR_16->valid_to_idx = FUNC_11(VAR_4 |
          FUNC_5(VAR_2));
 FUNC_13(VAR_16->macaddr, VAR_8, sizeof(VAR_16->macaddr));
 FUNC_13(VAR_16->macaddr_mask, VAR_9, sizeof(VAR_16->macaddr_mask));

 VAR_16->lookup_type_to_vni =
  FUNC_12(FUNC_9(VAR_10) |
       FUNC_2(VAR_12) |
       FUNC_6(VAR_13));
 VAR_16->vni_mask_pkd = FUNC_12(FUNC_8(VAR_11));
 VAR_17 = FUNC_15(VAR_6, VAR_6->mbox, &VAR_15, sizeof(VAR_15), &VAR_15, VAR_14);
 if (VAR_17 == 0)
  VAR_17 = FUNC_4(FUNC_10(VAR_16->valid_to_idx));
 return VAR_17;
}
