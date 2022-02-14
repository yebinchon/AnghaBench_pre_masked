
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_eth_dev {int starting_cid; int drv_state; int iscsi_l2_cid; int fcoe_init_cid; scalar_t__ ctx_tbl_offset; } ;
struct bnx2x {struct cnic_eth_dev cnic_eth_dev; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,int ,int,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*) ;

void FUNC_8(struct bnx2x *VAR_3)
{
 struct cnic_eth_dev *VAR_4 = &VAR_3->cnic_eth_dev;

 VAR_4->ctx_tbl_offset = FUNC_5(FUNC_3(VAR_3)) +
        FUNC_7(VAR_3);
 VAR_4->starting_cid = FUNC_7(VAR_3) * VAR_1;
 VAR_4->fcoe_init_cid = FUNC_1(VAR_3);
 VAR_4->iscsi_l2_cid = FUNC_2(VAR_3);

 FUNC_4(VAR_2, "BNX2X_1st_NON_L2_ETH_CID(bp) %x, cp->starting_cid %x, cp->fcoe_init_cid %x, cp->iscsi_l2_cid %x\n",
    FUNC_0(VAR_3), VAR_4->starting_cid, VAR_4->fcoe_init_cid,
    VAR_4->iscsi_l2_cid);

 if (FUNC_6(VAR_3))
  VAR_4->drv_state |= VAR_0;
}
