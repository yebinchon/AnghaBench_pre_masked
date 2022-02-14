
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct fw_fcoe_vnp_cmd {scalar_t__ clsp_word_0_1; scalar_t__ cmn_srv_parms; int * vnport_wwpn; int * vnport_wwnn; int * vnport_mac; int alloc_to_len16; } ;
struct fc_els_cssp {int cp_rdfs; int cp_recip; int cp_init; int cp_class; } ;
struct fc_els_csp {int sp_e_d_tov; int sp_r_a_tov; int sp_bb_data; int sp_features; int sp_bb_cred; int sp_lo_ver; int sp_hi_ver; } ;
struct csio_mb {scalar_t__ mb; scalar_t__ priv; } ;
struct TYPE_4__ {int sp_e_d_tov; int sp_r_a_tov; int sp_bb_data; int sp_features; int sp_bb_cred; int sp_lo_ver; int sp_hi_ver; } ;
struct TYPE_6__ {TYPE_2__* clsp; TYPE_1__ csp; } ;
struct csio_lnode {int nport_id; TYPE_3__ ln_sparm; int * mac; } ;
struct csio_hw {int mb_mempool; int lock; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;
typedef int __be32 ;
struct TYPE_5__ {int cp_rdfs; int cp_recip; int cp_init; int cp_class; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct csio_hw*,char*,int) ;
 int * FUNC_2 (struct csio_lnode*) ;
 int * FUNC_3 (struct csio_lnode*) ;
 int FUNC_4 (struct csio_lnode*,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct csio_mb*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct csio_hw *VAR_2, struct csio_mb *VAR_3)
{
 struct csio_lnode *VAR_4 = ((struct csio_lnode *)VAR_3->priv);
 struct fw_fcoe_vnp_cmd *VAR_5 = (struct fw_fcoe_vnp_cmd *)(VAR_3->mb);
 struct fc_els_csp *VAR_6;
 struct fc_els_cssp *VAR_7;
 enum fw_retval VAR_8;
 __be32 VAR_9;

 VAR_8 = FUNC_0(FUNC_7(VAR_5->alloc_to_len16));
 if (VAR_8 != VAR_1) {
  FUNC_1(VAR_2, "FCOE VNP read cmd returned error:0x%x\n", VAR_8);
  FUNC_6(VAR_3, VAR_2->mb_mempool);
  return;
 }

 FUNC_8(&VAR_2->lock);

 FUNC_5(VAR_4->mac, VAR_5->vnport_mac, sizeof(VAR_4->mac));
 FUNC_5(&VAR_9, &VAR_5->vnport_mac[3], sizeof(uint8_t)*3);
 VAR_4->nport_id = FUNC_7(VAR_9);
 VAR_4->nport_id = VAR_4->nport_id >> 8;







 FUNC_5(FUNC_2(VAR_4), VAR_5->vnport_wwnn, 8);
 FUNC_5(FUNC_3(VAR_4), VAR_5->vnport_wwpn, 8);


 VAR_6 = (struct fc_els_csp *)VAR_5->cmn_srv_parms;
 VAR_4->ln_sparm.csp.sp_hi_ver = VAR_6->sp_hi_ver;
 VAR_4->ln_sparm.csp.sp_lo_ver = VAR_6->sp_lo_ver;
 VAR_4->ln_sparm.csp.sp_bb_cred = VAR_6->sp_bb_cred;
 VAR_4->ln_sparm.csp.sp_features = VAR_6->sp_features;
 VAR_4->ln_sparm.csp.sp_bb_data = VAR_6->sp_bb_data;
 VAR_4->ln_sparm.csp.sp_r_a_tov = VAR_6->sp_r_a_tov;
 VAR_4->ln_sparm.csp.sp_e_d_tov = VAR_6->sp_e_d_tov;


 VAR_7 = (struct fc_els_cssp *)VAR_5->clsp_word_0_1;
 VAR_4->ln_sparm.clsp[2].cp_class = VAR_7->cp_class;
 VAR_4->ln_sparm.clsp[2].cp_init = VAR_7->cp_init;
 VAR_4->ln_sparm.clsp[2].cp_recip = VAR_7->cp_recip;
 VAR_4->ln_sparm.clsp[2].cp_rdfs = VAR_7->cp_rdfs;

 FUNC_9(&VAR_2->lock);

 FUNC_6(VAR_3, VAR_2->mb_mempool);


 FUNC_4(VAR_4, VAR_0);
}
