
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_fcoe_fcf_cmd {int spma_mac; int fabric; int name_id; int mac; int fc_map; int fpma_to_portid; int op_to_fcfi; int fka_adv; int max_fcoe_size; int vlan_id; int vf_id; int priority_pkd; int retval_len16; } ;
struct csio_mb {scalar_t__ mb; scalar_t__ priv; } ;
struct csio_lnode {struct csio_fcf_info* fcfinfo; } ;
struct csio_hw {int mb_mempool; int lock; } ;
struct csio_fcf_info {int spma_mac; int fabric; int name_id; int mac; int fc_map; int portid; int login; int spma; int fpma; int fcfi; int fka_adv; void* max_fcoe_size; int vlan_id; void* vf_id; int priority; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct csio_lnode*,char*,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct csio_mb*,int ) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(struct csio_hw *VAR_1, struct csio_mb *VAR_2)
{
 struct csio_lnode *VAR_3 = (struct csio_lnode *)VAR_2->priv;
 struct csio_fcf_info *VAR_4;
 struct fw_fcoe_fcf_cmd *VAR_5 =
    (struct fw_fcoe_fcf_cmd *)(VAR_2->mb);
 enum fw_retval VAR_6;

 VAR_6 = FUNC_0(FUNC_11(VAR_5->retval_len16));
 if (VAR_6 != VAR_0) {
  FUNC_8(VAR_3, "FCOE FCF cmd failed with ret x%x\n",
    VAR_6);
  FUNC_10(VAR_2, VAR_1->mb_mempool);
  return;
 }

 FUNC_13(&VAR_1->lock);
 VAR_4 = VAR_3->fcfinfo;
 VAR_4->priority = FUNC_5(
     FUNC_12(VAR_5->priority_pkd));
 VAR_4->vf_id = FUNC_12(VAR_5->vf_id);
 VAR_4->vlan_id = VAR_5->vlan_id;
 VAR_4->max_fcoe_size = FUNC_12(VAR_5->max_fcoe_size);
 VAR_4->fka_adv = FUNC_7(VAR_5->fka_adv);
 VAR_4->fcfi = FUNC_1(FUNC_11(VAR_5->op_to_fcfi));
 VAR_4->fpma = FUNC_2(VAR_5->fpma_to_portid);
 VAR_4->spma = FUNC_6(VAR_5->fpma_to_portid);
 VAR_4->login = FUNC_3(VAR_5->fpma_to_portid);
 VAR_4->portid = FUNC_4(VAR_5->fpma_to_portid);
 FUNC_9(VAR_4->fc_map, VAR_5->fc_map, sizeof(VAR_4->fc_map));
 FUNC_9(VAR_4->mac, VAR_5->mac, sizeof(VAR_4->mac));
 FUNC_9(VAR_4->name_id, VAR_5->name_id, sizeof(VAR_4->name_id));
 FUNC_9(VAR_4->fabric, VAR_5->fabric, sizeof(VAR_4->fabric));
 FUNC_9(VAR_4->spma_mac, VAR_5->spma_mac, sizeof(VAR_4->spma_mac));

 FUNC_14(&VAR_1->lock);

 FUNC_10(VAR_2, VAR_1->mb_mempool);
}
