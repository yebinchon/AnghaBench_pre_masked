
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int rel_pf_id; struct qed_dev* cdev; } ;
struct qed_dev {int vendor_id; int device_id; int chip_num; int chip_rev; int num_hwfns; int chip_bond_id; int chip_metal; int hwfns; int type; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,int,int,int,int,int,int) ;
 int FUNC_1 (struct qed_hwfn*,char*,...) ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (struct qed_dev*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int ) ;

__attribute__((used)) static int FUNC_6(struct qed_hwfn *VAR_14, struct qed_ptt *VAR_15)
{
 struct qed_dev *VAR_16 = VAR_14->cdev;
 u16 VAR_17;
 u32 VAR_18;


 FUNC_4(VAR_16->pdev, VAR_10, &VAR_16->vendor_id);
 FUNC_4(VAR_16->pdev, VAR_9, &VAR_16->device_id);


 VAR_17 = VAR_16->device_id & VAR_11;
 switch (VAR_17) {
 case 128:
  VAR_16->type = VAR_13;
  break;
 case 129:
  VAR_16->type = VAR_12;
  break;
 default:
  FUNC_1(VAR_14, "Unknown device id 0x%x\n", VAR_16->device_id);
  return -VAR_3;
 }

 VAR_16->chip_num = (u16)FUNC_5(VAR_14, VAR_15, VAR_5);
 VAR_16->chip_rev = (u16)FUNC_5(VAR_14, VAR_15, VAR_6);

 FUNC_2(VAR_2, VAR_16->chip_rev);


 VAR_18 = FUNC_5(VAR_14, VAR_15, VAR_8);

 if (VAR_18 & (1 << VAR_14->rel_pf_id)) {
  FUNC_1(VAR_16->hwfns, "device in CMT mode\n");
  VAR_16->num_hwfns = 2;
 } else {
  VAR_16->num_hwfns = 1;
 }

 VAR_16->chip_bond_id = FUNC_5(VAR_14, VAR_15,
        VAR_7) >> 4;
 FUNC_2(VAR_0, VAR_16->chip_bond_id);
 VAR_16->chip_metal = (u16)FUNC_5(VAR_14, VAR_15, VAR_4);
 FUNC_2(VAR_1, VAR_16->chip_metal);

 FUNC_0(VAR_16->hwfns,
  "Chip details - %s %c%d, Num: %04x Rev: %04x Bond id: %04x Metal: %04x\n",
  FUNC_3(VAR_16) ? "BB" : "AH",
  'A' + VAR_16->chip_rev,
  (int)VAR_16->chip_metal,
  VAR_16->chip_num, VAR_16->chip_rev,
  VAR_16->chip_bond_id, VAR_16->chip_metal);

 return 0;
}
