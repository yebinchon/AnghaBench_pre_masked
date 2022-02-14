
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_13__ {int aux_icm; } ;
struct TYPE_17__ {int rdmarc_shift; int cmpt_table; int qp_table; int auxc_table; int altc_table; int rdmarc_table; } ;
struct TYPE_12__ {int cmpt_table; int table; } ;
struct TYPE_11__ {int cmpt_table; int table; } ;
struct TYPE_15__ {int cmpt_table; int table; } ;
struct TYPE_16__ {int mtt_table; int dmpt_table; } ;
struct TYPE_10__ {int table; } ;
struct mlx4_priv {TYPE_4__ fw; TYPE_8__ qp_table; TYPE_3__ srq_table; TYPE_2__ cq_table; TYPE_6__ eq_table; TYPE_7__ mr_table; TYPE_1__ mcg_table; } ;
struct mlx4_init_hca_param {int mc_base; int srqc_base; int cqc_base; int rdmarc_base; int altc_base; int auxc_base; int qpc_base; int dmpt_base; int mtt_base; int eqc_base; int cmpt_base; } ;
struct mlx4_dev_cap {int eqc_entry_sz; int dmpt_entry_sz; int qpc_entry_sz; int aux_entry_sz; int altc_entry_sz; int rdmarc_entry_sz; int cqc_entry_sz; int srq_entry_sz; int cmpt_entry_sz; } ;
struct TYPE_18__ {int reserved_mtts; int mtt_entry_sz; int num_mtts; int num_mpts; int reserved_mrws; int num_qps; int* reserved_qps_cnt; int num_cqs; int reserved_cqs; int num_srqs; int reserved_srqs; int num_mgms; int num_amgms; } ;
struct TYPE_14__ {int num_phys_eqs; } ;
struct mlx4_dev {TYPE_9__ caps; TYPE_5__ phys_caps; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (struct mlx4_dev*,int ) ;
 int FUNC_3 (struct mlx4_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,scalar_t__,int,int ) ;
 int FUNC_6 (struct mlx4_dev*,int *) ;
 int FUNC_7 (struct mlx4_dev*,char*,unsigned long long,unsigned long long) ;
 int FUNC_8 (struct mlx4_dev*,char*) ;
 int FUNC_9 (struct mlx4_dev*,int ,int ) ;
 int FUNC_10 (struct mlx4_dev*) ;
 int FUNC_11 (struct mlx4_dev*,int ,int ) ;
 int FUNC_12 (struct mlx4_dev*,int *,int ,int,int,int,int,int) ;
 struct mlx4_priv* FUNC_13 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_14(struct mlx4_dev *VAR_4, struct mlx4_dev_cap *VAR_5,
    struct mlx4_init_hca_param *VAR_6, u64 VAR_7)
{
 struct mlx4_priv *VAR_8 = FUNC_13(VAR_4);
 u64 VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_4, VAR_7, &VAR_9);
 if (VAR_11) {
  FUNC_8(VAR_4, "SET_ICM_SIZE command failed, aborting\n");
  return VAR_11;
 }

 FUNC_7(VAR_4, "%lld KB of HCA context requires %lld KB aux memory\n",
   (unsigned long long) VAR_7 >> 10,
   (unsigned long long) VAR_9 << 2);

 VAR_8->fw.aux_icm = FUNC_5(VAR_4, VAR_9,
       VAR_1 | VAR_3, 0);
 if (!VAR_8->fw.aux_icm) {
  FUNC_8(VAR_4, "Couldn't allocate aux memory, aborting\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_2(VAR_4, VAR_8->fw.aux_icm);
 if (VAR_11) {
  FUNC_8(VAR_4, "MAP_ICM_AUX command failed, aborting\n");
  goto err_free_aux;
 }

 VAR_11 = FUNC_11(VAR_4, VAR_6->cmpt_base, VAR_5->cmpt_entry_sz);
 if (VAR_11) {
  FUNC_8(VAR_4, "Failed to map cMPT context memory, aborting\n");
  goto err_unmap_aux;
 }


 VAR_10 = VAR_4->phys_caps.num_phys_eqs;
 VAR_11 = FUNC_12(VAR_4, &VAR_8->eq_table.table,
      VAR_6->eqc_base, VAR_5->eqc_entry_sz,
      VAR_10, VAR_10, 0, 0);
 if (VAR_11) {
  FUNC_8(VAR_4, "Failed to map EQ context memory, aborting\n");
  goto err_unmap_cmpt;
 }
 VAR_4->caps.reserved_mtts =
  FUNC_0(VAR_4->caps.reserved_mtts * VAR_4->caps.mtt_entry_sz,
        FUNC_1()) / VAR_4->caps.mtt_entry_sz;

 VAR_11 = FUNC_12(VAR_4, &VAR_8->mr_table.mtt_table,
      VAR_6->mtt_base,
      VAR_4->caps.mtt_entry_sz,
      VAR_4->caps.num_mtts,
      VAR_4->caps.reserved_mtts, 1, 0);
 if (VAR_11) {
  FUNC_8(VAR_4, "Failed to map MTT context memory, aborting\n");
  goto err_unmap_eq;
 }

 VAR_11 = FUNC_12(VAR_4, &VAR_8->mr_table.dmpt_table,
      VAR_6->dmpt_base,
      VAR_5->dmpt_entry_sz,
      VAR_4->caps.num_mpts,
      VAR_4->caps.reserved_mrws, 1, 1);
 if (VAR_11) {
  FUNC_8(VAR_4, "Failed to map dMPT context memory, aborting\n");
  goto err_unmap_mtt;
 }

 VAR_11 = FUNC_12(VAR_4, &VAR_8->qp_table.qp_table,
      VAR_6->qpc_base,
      VAR_5->qpc_entry_sz,
      VAR_4->caps.num_qps,
      VAR_4->caps.reserved_qps_cnt[VAR_2],
      0, 0);
 if (VAR_11) {
  FUNC_8(VAR_4, "Failed to map QP context memory, aborting\n");
  goto err_unmap_dmpt;
 }

 VAR_11 = FUNC_12(VAR_4, &VAR_8->qp_table.auxc_table,
      VAR_6->auxc_base,
      VAR_5->aux_entry_sz,
      VAR_4->caps.num_qps,
      VAR_4->caps.reserved_qps_cnt[VAR_2],
      0, 0);
 if (VAR_11) {
  FUNC_8(VAR_4, "Failed to map AUXC context memory, aborting\n");
  goto err_unmap_qp;
 }

 VAR_11 = FUNC_12(VAR_4, &VAR_8->qp_table.altc_table,
      VAR_6->altc_base,
      VAR_5->altc_entry_sz,
      VAR_4->caps.num_qps,
      VAR_4->caps.reserved_qps_cnt[VAR_2],
      0, 0);
 if (VAR_11) {
  FUNC_8(VAR_4, "Failed to map ALTC context memory, aborting\n");
  goto err_unmap_auxc;
 }

 VAR_11 = FUNC_12(VAR_4, &VAR_8->qp_table.rdmarc_table,
      VAR_6->rdmarc_base,
      VAR_5->rdmarc_entry_sz << VAR_8->qp_table.rdmarc_shift,
      VAR_4->caps.num_qps,
      VAR_4->caps.reserved_qps_cnt[VAR_2],
      0, 0);
 if (VAR_11) {
  FUNC_8(VAR_4, "Failed to map RDMARC context memory, aborting\n");
  goto err_unmap_altc;
 }

 VAR_11 = FUNC_12(VAR_4, &VAR_8->cq_table.table,
      VAR_6->cqc_base,
      VAR_5->cqc_entry_sz,
      VAR_4->caps.num_cqs,
      VAR_4->caps.reserved_cqs, 0, 0);
 if (VAR_11) {
  FUNC_8(VAR_4, "Failed to map CQ context memory, aborting\n");
  goto err_unmap_rdmarc;
 }

 VAR_11 = FUNC_12(VAR_4, &VAR_8->srq_table.table,
      VAR_6->srqc_base,
      VAR_5->srq_entry_sz,
      VAR_4->caps.num_srqs,
      VAR_4->caps.reserved_srqs, 0, 0);
 if (VAR_11) {
  FUNC_8(VAR_4, "Failed to map SRQ context memory, aborting\n");
  goto err_unmap_cq;
 }
 VAR_11 = FUNC_12(VAR_4, &VAR_8->mcg_table.table,
      VAR_6->mc_base,
      FUNC_10(VAR_4),
      VAR_4->caps.num_mgms + VAR_4->caps.num_amgms,
      VAR_4->caps.num_mgms + VAR_4->caps.num_amgms,
      0, 0);
 if (VAR_11) {
  FUNC_8(VAR_4, "Failed to map MCG context memory, aborting\n");
  goto err_unmap_srq;
 }

 return 0;

err_unmap_srq:
 FUNC_6(VAR_4, &VAR_8->srq_table.table);

err_unmap_cq:
 FUNC_6(VAR_4, &VAR_8->cq_table.table);

err_unmap_rdmarc:
 FUNC_6(VAR_4, &VAR_8->qp_table.rdmarc_table);

err_unmap_altc:
 FUNC_6(VAR_4, &VAR_8->qp_table.altc_table);

err_unmap_auxc:
 FUNC_6(VAR_4, &VAR_8->qp_table.auxc_table);

err_unmap_qp:
 FUNC_6(VAR_4, &VAR_8->qp_table.qp_table);

err_unmap_dmpt:
 FUNC_6(VAR_4, &VAR_8->mr_table.dmpt_table);

err_unmap_mtt:
 FUNC_6(VAR_4, &VAR_8->mr_table.mtt_table);

err_unmap_eq:
 FUNC_6(VAR_4, &VAR_8->eq_table.table);

err_unmap_cmpt:
 FUNC_6(VAR_4, &VAR_8->eq_table.cmpt_table);
 FUNC_6(VAR_4, &VAR_8->cq_table.cmpt_table);
 FUNC_6(VAR_4, &VAR_8->srq_table.cmpt_table);
 FUNC_6(VAR_4, &VAR_8->qp_table.cmpt_table);

err_unmap_aux:
 FUNC_4(VAR_4);

err_free_aux:
 FUNC_9(VAR_4, VAR_8->fw.aux_icm, 0);

 return VAR_11;
}
