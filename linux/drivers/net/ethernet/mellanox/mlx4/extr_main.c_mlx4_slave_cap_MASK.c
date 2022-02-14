
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u32 ;
struct mlx4_init_hca_param {int log_rd_per_qp; scalar_t__ uar_page_sz; unsigned long long pf_context_behaviour; unsigned long long num_ports; int log_num_qps; int log_num_srqs; int log_num_cqs; int log_mpt_sz; int dev_cap_enabled; int eqe_size; int cqe_size; int extra_flags; scalar_t__ rss_ip_frags; int reserved_lkey; int reserved_eq; int max_eq; int mtt_quota; int mpt_quota; int cq_quota; int srq_quota; int qp_quota; int hca_core_clock; scalar_t__ global_caps; } ;
struct mlx4_func_cap {int log_rd_per_qp; scalar_t__ uar_page_sz; unsigned long long pf_context_behaviour; unsigned long long num_ports; int log_num_qps; int log_num_srqs; int log_num_cqs; int log_mpt_sz; int dev_cap_enabled; int eqe_size; int cqe_size; int extra_flags; scalar_t__ rss_ip_frags; int reserved_lkey; int reserved_eq; int max_eq; int mtt_quota; int mpt_quota; int cq_quota; int srq_quota; int qp_quota; int hca_core_clock; scalar_t__ global_caps; } ;
struct mlx4_dev_cap {int log_rd_per_qp; scalar_t__ uar_page_sz; unsigned long long pf_context_behaviour; unsigned long long num_ports; int log_num_qps; int log_num_srqs; int log_num_cqs; int log_mpt_sz; int dev_cap_enabled; int eqe_size; int cqe_size; int extra_flags; scalar_t__ rss_ip_frags; int reserved_lkey; int reserved_eq; int max_eq; int mtt_quota; int mpt_quota; int cq_quota; int srq_quota; int qp_quota; int hca_core_clock; scalar_t__ global_caps; } ;
struct TYPE_6__ {int max_qp_dest_rdma; int page_size_cap; unsigned long long uar_page_size; unsigned long long num_ports; int num_qps; int num_srqs; int num_cqs; int num_mpts; unsigned long long num_uars; int reserved_uars; int eqe_size; int eqe_factor; int cqe_size; int alloc_res_qp_mask; scalar_t__ bf_reg_size; int flags2; int userspace_caps; scalar_t__ num_amgms; scalar_t__ num_mgms; int num_pds; int reserved_lkey; int reserved_eqs; int num_eqs; int hca_core_clock; } ;
struct TYPE_5__ {int mtt; int mpt; int cq; int srq; int qp; } ;
struct mlx4_dev {scalar_t__ uar_page_shift; TYPE_3__ caps; TYPE_1__* persist; TYPE_2__ quotas; } ;
struct TYPE_4__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 unsigned long long VAR_18 ;
 unsigned long long VAR_19 ;
 int FUNC_0 (struct mlx4_init_hca_param*) ;
 struct mlx4_init_hca_param* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx4_dev*,int ,struct mlx4_init_hca_param*) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_5 (struct mlx4_dev*,char*,...) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_7 (struct mlx4_dev*,char*,...) ;
 int FUNC_8 (struct mlx4_dev*) ;
 int FUNC_9 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_10 (struct mlx4_dev*) ;
 int FUNC_11 (struct mlx4_dev*) ;
 int FUNC_12 (struct mlx4_dev*,char*,...) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (struct mlx4_dev*,struct mlx4_init_hca_param*,struct mlx4_init_hca_param*) ;

__attribute__((used)) static int FUNC_15(struct mlx4_dev *VAR_20)
{
 int VAR_21;
 u32 VAR_22;
 struct mlx4_dev_cap *VAR_23 = ((void*)0);
 struct mlx4_func_cap *VAR_24 = ((void*)0);
 struct mlx4_init_hca_param *VAR_25 = ((void*)0);

 VAR_25 = FUNC_1(sizeof(*VAR_25), VAR_3);
 VAR_24 = FUNC_1(sizeof(*VAR_24), VAR_3);
 VAR_23 = FUNC_1(sizeof(*VAR_23), VAR_3);
 if (!VAR_25 || !VAR_24 || !VAR_23) {
  FUNC_7(VAR_20, "Failed to allocate memory for slave_cap\n");
  VAR_21 = -VAR_2;
  goto free_mem;
 }

 VAR_21 = FUNC_4(VAR_20, VAR_25);
 if (VAR_21) {
  FUNC_7(VAR_20, "QUERY_HCA command failed, aborting\n");
  goto free_mem;
 }




 if (VAR_25->global_caps) {
  FUNC_7(VAR_20, "Unknown hca global capabilities\n");
  VAR_21 = -VAR_0;
  goto free_mem;
 }

 VAR_20->caps.hca_core_clock = VAR_25->hca_core_clock;

 VAR_20->caps.max_qp_dest_rdma = 1 << VAR_25->log_rd_per_qp;
 VAR_21 = FUNC_6(VAR_20, VAR_23);
 if (VAR_21) {
  FUNC_7(VAR_20, "QUERY_DEV_CAP command failed, aborting\n");
  goto free_mem;
 }

 VAR_21 = FUNC_3(VAR_20);
 if (VAR_21)
  FUNC_7(VAR_20, "QUERY_FW command failed: could not get FW version\n");

 VAR_22 = ~VAR_20->caps.page_size_cap + 1;
 FUNC_12(VAR_20, "HCA minimum page size:%d\n", VAR_22);
 if (VAR_22 > VAR_18) {
  FUNC_7(VAR_20, "HCA minimum page size of %d bigger than kernel PAGE_SIZE of %ld, aborting\n",
    VAR_22, VAR_18);
  VAR_21 = -VAR_1;
  goto free_mem;
 }


 VAR_20->uar_page_shift = VAR_25->uar_page_sz + 12;


 if (VAR_20->uar_page_shift > VAR_17) {
  FUNC_7(VAR_20,
    "Invalid configuration: uar page size is larger than system page size\n");
  VAR_21 = -VAR_1;
  goto free_mem;
 }


 FUNC_9(VAR_20, VAR_23);





 VAR_20->caps.uar_page_size = VAR_18;

 VAR_21 = FUNC_2(VAR_20, 0, VAR_24);
 if (VAR_21) {
  FUNC_7(VAR_20, "QUERY_FUNC_CAP general command failed, aborting (%d)\n",
    VAR_21);
  goto free_mem;
 }

 if ((VAR_24->pf_context_behaviour | VAR_19) !=
     VAR_19) {
  FUNC_7(VAR_20, "Unknown pf context behaviour %x known flags %x\n",
    VAR_24->pf_context_behaviour,
    VAR_19);
  VAR_21 = -VAR_0;
  goto free_mem;
 }

 VAR_20->caps.num_ports = VAR_24->num_ports;
 VAR_20->quotas.qp = VAR_24->qp_quota;
 VAR_20->quotas.srq = VAR_24->srq_quota;
 VAR_20->quotas.cq = VAR_24->cq_quota;
 VAR_20->quotas.mpt = VAR_24->mpt_quota;
 VAR_20->quotas.mtt = VAR_24->mtt_quota;
 VAR_20->caps.num_qps = 1 << VAR_25->log_num_qps;
 VAR_20->caps.num_srqs = 1 << VAR_25->log_num_srqs;
 VAR_20->caps.num_cqs = 1 << VAR_25->log_num_cqs;
 VAR_20->caps.num_mpts = 1 << VAR_25->log_mpt_sz;
 VAR_20->caps.num_eqs = VAR_24->max_eq;
 VAR_20->caps.reserved_eqs = VAR_24->reserved_eq;
 VAR_20->caps.reserved_lkey = VAR_24->reserved_lkey;
 VAR_20->caps.num_pds = VAR_11;
 VAR_20->caps.num_mgms = 0;
 VAR_20->caps.num_amgms = 0;

 if (VAR_20->caps.num_ports > VAR_10) {
  FUNC_7(VAR_20, "HCA has %d ports, but we only support %d, aborting\n",
    VAR_20->caps.num_ports, VAR_10);
  VAR_21 = -VAR_1;
  goto free_mem;
 }

 FUNC_8(VAR_20);

 VAR_21 = FUNC_11(VAR_20);
 if (VAR_21) {
  FUNC_7(VAR_20, "Set special QP caps failed. aborting\n");
  goto free_mem;
 }

 if (VAR_20->caps.uar_page_size * (VAR_20->caps.num_uars -
           VAR_20->caps.reserved_uars) >
           FUNC_13(VAR_20->persist->pdev,
       2)) {
  FUNC_7(VAR_20, "HCA reported UAR region size of 0x%x bigger than PCI resource 2 size of 0x%llx, aborting\n",
    VAR_20->caps.uar_page_size * VAR_20->caps.num_uars,
    (unsigned long long)
    FUNC_13(VAR_20->persist->pdev, 2));
  VAR_21 = -VAR_2;
  goto err_mem;
 }

 if (VAR_25->dev_cap_enabled & VAR_5) {
  VAR_20->caps.eqe_size = 64;
  VAR_20->caps.eqe_factor = 1;
 } else {
  VAR_20->caps.eqe_size = 32;
  VAR_20->caps.eqe_factor = 0;
 }

 if (VAR_25->dev_cap_enabled & VAR_4) {
  VAR_20->caps.cqe_size = 64;
  VAR_20->caps.userspace_caps |= VAR_16;
 } else {
  VAR_20->caps.cqe_size = 32;
 }

 if (VAR_25->dev_cap_enabled & VAR_7) {
  VAR_20->caps.eqe_size = VAR_25->eqe_size;
  VAR_20->caps.eqe_factor = 0;
 }

 if (VAR_25->dev_cap_enabled & VAR_6) {
  VAR_20->caps.cqe_size = VAR_25->cqe_size;

  VAR_20->caps.userspace_caps |= VAR_16;
 }

 VAR_20->caps.flags2 &= ~VAR_8;
 FUNC_12(VAR_20, "Timestamping is not supported in slave mode\n");

 VAR_20->caps.flags2 &= ~VAR_9;
 FUNC_5(VAR_20, "User MAC FW update is not supported in slave mode\n");

 FUNC_14(VAR_20, VAR_23, VAR_25);
 FUNC_5(VAR_20, "RSS support for IP fragments is %s\n",
   VAR_25->rss_ip_frags ? "on" : "off");

 if (VAR_24->extra_flags & VAR_13 &&
     VAR_20->caps.bf_reg_size)
  VAR_20->caps.alloc_res_qp_mask |= VAR_15;

 if (VAR_24->extra_flags & VAR_12)
  VAR_20->caps.alloc_res_qp_mask |= VAR_14;

err_mem:
 if (VAR_21)
  FUNC_10(VAR_20);
free_mem:
 FUNC_0(VAR_25);
 FUNC_0(VAR_24);
 FUNC_0(VAR_23);
 return VAR_21;
}
