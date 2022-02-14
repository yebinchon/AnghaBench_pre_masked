
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cnic_eth_dev {int max_kwqe_pending; int starting_cid; int ctx_tbl_len; scalar_t__ ctx_tbl_offset; int ctx_blk_size; int drv_state; int iscsi_l2_cid; int iscsi_l2_client_id; int fcoe_init_cid; int drv_unregister_cnic; int drv_register_cnic; int drv_get_fc_npiv_tbl; int drv_ctl; int drv_submit_kwqes_16; int io_base2; int io_base; int pdev; int chip_id; int drv_owner; } ;
struct bnx2x {int doorbells; int regview; int pdev; struct cnic_eth_dev cnic_eth_dev; } ;


 int FUNC_0 (char*,int ,scalar_t__,int ,int) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_1 ;
 int FUNC_4 (struct bnx2x*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 scalar_t__ FUNC_7 (struct bnx2x*) ;
 scalar_t__ FUNC_8 (struct bnx2x*) ;
 int VAR_7 ;
 int FUNC_9 (struct bnx2x*) ;
 int FUNC_10 (struct bnx2x*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct bnx2x* FUNC_11 (struct net_device*) ;

__attribute__((used)) static struct cnic_eth_dev *FUNC_12(struct net_device *VAR_13)
{
 struct bnx2x *VAR_14 = FUNC_11(VAR_13);
 struct cnic_eth_dev *VAR_15 = &VAR_14->cnic_eth_dev;





 if (FUNC_7(VAR_14) && FUNC_6(VAR_14))
  return ((void*)0);

 VAR_15->drv_owner = VAR_7;
 VAR_15->chip_id = FUNC_4(VAR_14);
 VAR_15->pdev = VAR_14->pdev;
 VAR_15->io_base = VAR_14->regview;
 VAR_15->io_base2 = VAR_14->doorbells;
 VAR_15->max_kwqe_pending = 8;
 VAR_15->ctx_blk_size = VAR_1;
 VAR_15->ctx_tbl_offset = FUNC_5(FUNC_3(VAR_14)) +
        FUNC_9(VAR_14);
 VAR_15->ctx_tbl_len = VAR_5;
 VAR_15->starting_cid = FUNC_9(VAR_14) * VAR_6;
 VAR_15->drv_submit_kwqes_16 = VAR_8;
 VAR_15->drv_ctl = VAR_9;
 VAR_15->drv_get_fc_npiv_tbl = VAR_10;
 VAR_15->drv_register_cnic = VAR_11;
 VAR_15->drv_unregister_cnic = VAR_12;
 VAR_15->fcoe_init_cid = FUNC_1(VAR_14);
 VAR_15->iscsi_l2_client_id =
  FUNC_10(VAR_14, VAR_0);
 VAR_15->iscsi_l2_cid = FUNC_2(VAR_14);

 if (FUNC_8(VAR_14))
  VAR_15->drv_state |= VAR_4;

 if (FUNC_7(VAR_14))
  VAR_15->drv_state |= VAR_3;

 if (FUNC_6(VAR_14))
  VAR_15->drv_state |= VAR_2;

 FUNC_0(
  "page_size %d, tbl_offset %d, tbl_lines %d, starting cid %d\n",
    VAR_15->ctx_blk_size,
    VAR_15->ctx_tbl_offset,
    VAR_15->ctx_tbl_len,
    VAR_15->starting_cid);
 return VAR_15;
}
