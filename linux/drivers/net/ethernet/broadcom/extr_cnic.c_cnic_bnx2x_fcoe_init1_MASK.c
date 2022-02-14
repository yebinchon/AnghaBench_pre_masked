
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union l5cm_specific_data {int dummy; } l5cm_specific_data ;
typedef int u64 ;
typedef int u32 ;
struct kwqe {int dummy; } ;
struct TYPE_5__ {scalar_t__ op_code; } ;
struct fcoe_kwqe_init3 {TYPE_1__ hdr; } ;
struct fcoe_kwqe_init2 {TYPE_1__ hdr; } ;
struct fcoe_kwqe_init1 {TYPE_1__ hdr; } ;
struct TYPE_6__ {int lo; int hi; } ;
struct fcoe_init_ramrod_params {int sb_id; int eq_prod; int sb_num; int eq_pbl_size; TYPE_2__ eq_pbl_base; int init_kwqe3; int init_kwqe2; int init_kwqe1; } ;
struct TYPE_7__ {int pgtbl_map; int num_pages; } ;
struct TYPE_8__ {scalar_t__ sw_prod_idx; TYPE_3__ dma; } ;
struct cnic_local {int fcoe_init_cid; TYPE_4__ kcq2; int status_blk_num; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct fcoe_init_ramrod_params* FUNC_1 (struct cnic_local*,int ,union l5cm_specific_data*) ;
 int FUNC_2 (struct cnic_dev*,int ,int,int ,union l5cm_specific_data*) ;
 int FUNC_3 (int *,struct fcoe_kwqe_init3*,int) ;
 int FUNC_4 (struct fcoe_init_ramrod_params*,int ,int) ;
 int FUNC_5 (int ,char*) ;
 struct bnx2x* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct cnic_dev *VAR_10, struct kwqe *VAR_11[],
     u32 VAR_12, int *VAR_13)
{
 int VAR_14;
 struct cnic_local *VAR_15 = VAR_10->cnic_priv;
 struct bnx2x *VAR_16 = FUNC_6(VAR_10->netdev);
 u32 VAR_17;
 struct fcoe_init_ramrod_params *VAR_18;
 struct fcoe_kwqe_init1 *VAR_19;
 struct fcoe_kwqe_init2 *VAR_20;
 struct fcoe_kwqe_init3 *VAR_21;
 union l5cm_specific_data VAR_22;

 if (VAR_12 < 3) {
  *VAR_13 = VAR_12;
  return -VAR_2;
 }
 VAR_19 = (struct fcoe_kwqe_init1 *) VAR_11[0];
 VAR_20 = (struct fcoe_kwqe_init2 *) VAR_11[1];
 VAR_21 = (struct fcoe_kwqe_init3 *) VAR_11[2];
 if (VAR_20->hdr.op_code != VAR_5) {
  *VAR_13 = 1;
  return -VAR_2;
 }
 if (VAR_21->hdr.op_code != VAR_6) {
  *VAR_13 = 2;
  return -VAR_2;
 }

 if (sizeof(*VAR_18) > VAR_1) {
  FUNC_5(VAR_10->netdev, "fcoe_init size too big\n");
  return -VAR_3;
 }
 VAR_18 = FUNC_1(VAR_15, VAR_0, &VAR_22);
 if (!VAR_18)
  return -VAR_3;

 FUNC_4(VAR_18, 0, sizeof(*VAR_18));
 FUNC_3(&VAR_18->init_kwqe1, VAR_19, sizeof(*VAR_19));
 FUNC_3(&VAR_18->init_kwqe2, VAR_20, sizeof(*VAR_20));
 FUNC_3(&VAR_18->init_kwqe3, VAR_21, sizeof(*VAR_21));
 VAR_18->eq_pbl_base.lo = VAR_15->kcq2.dma.pgtbl_map & 0xffffffff;
 VAR_18->eq_pbl_base.hi = (u64) VAR_15->kcq2.dma.pgtbl_map >> 32;
 VAR_18->eq_pbl_size = VAR_15->kcq2.dma.num_pages;

 VAR_18->sb_num = VAR_15->status_blk_num;
 VAR_18->eq_prod = VAR_9;
 VAR_18->sb_id = VAR_8;
 VAR_15->kcq2.sw_prod_idx = 0;

 VAR_17 = FUNC_0(VAR_16, VAR_15->fcoe_init_cid);
 VAR_14 = FUNC_2(VAR_10, VAR_7, VAR_17,
      VAR_4, &VAR_22);
 *VAR_13 = 3;
 return VAR_14;
}
