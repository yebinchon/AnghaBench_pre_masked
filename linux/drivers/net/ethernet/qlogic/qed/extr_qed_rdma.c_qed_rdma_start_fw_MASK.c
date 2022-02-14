
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct rdma_init_func_hdr {size_t num_cnqs; int cq_ring_mode; scalar_t__ cnq_start_offset; } ;
struct rdma_init_func_ramrod_data {struct rdma_cnq_params* cnq_params; struct rdma_init_func_hdr params_header; } ;
struct rdma_cnq_params {void* queue_zone_num; int pbl_base_addr; int num_pbl_pages; int sb_index; void* sb_num; } ;
struct TYPE_9__ {struct rdma_init_func_ramrod_data rdma; } ;
struct TYPE_14__ {struct rdma_init_func_ramrod_data rdma; } ;
struct TYPE_10__ {TYPE_2__ roce_init_func; TYPE_7__ iwarp_init_func; } ;
struct qed_spq_entry {TYPE_3__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; } ;
struct qed_rdma_start_in_params {size_t desired_cnq; scalar_t__ cq_mode; struct qed_rdma_cnq_params* cnq_pbl_list; } ;
struct qed_rdma_cnq_params {int pbl_ptr; int num_pbl_pages; } ;
struct qed_ptt {int dummy; } ;
struct TYPE_11__ {int gl_pi; } ;
struct TYPE_12__ {TYPE_4__ rdma_pf_params; } ;
struct TYPE_8__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_6__* p_rdma_info; TYPE_5__ pf_params; TYPE_1__ hw_info; } ;
typedef int init_data ;
struct TYPE_13__ {size_t num_cnqs; scalar_t__ queue_zone_base; int proto; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,int ) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct qed_sp_init_data*,int ,int) ;
 scalar_t__ FUNC_6 (struct qed_hwfn*,size_t) ;
 int FUNC_7 (struct qed_hwfn*,TYPE_7__*) ;
 size_t FUNC_8 (struct qed_hwfn*,size_t) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_11(struct qed_hwfn *VAR_5,
        struct qed_rdma_start_in_params *VAR_6,
        struct qed_ptt *VAR_7)
{
 struct rdma_init_func_ramrod_data *VAR_8;
 struct qed_rdma_cnq_params *VAR_9;
 struct rdma_init_func_hdr *VAR_10;
 struct rdma_cnq_params *VAR_11;
 struct qed_sp_init_data VAR_12;
 struct qed_spq_entry *VAR_13;
 u32 VAR_14, VAR_15;
 u16 VAR_16;
 int VAR_17;

 FUNC_1(VAR_5, VAR_0, "Starting FW\n");


 VAR_5->p_rdma_info->num_cnqs = VAR_6->desired_cnq;


 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.opaque_fid = VAR_5->hw_info.opaque_fid;
 VAR_12.comp_mode = VAR_3;

 VAR_17 = FUNC_9(VAR_5, &VAR_13, VAR_4,
     VAR_5->p_rdma_info->proto, &VAR_12);
 if (VAR_17)
  return VAR_17;

 if (FUNC_2(VAR_5)) {
  FUNC_7(VAR_5,
      &VAR_13->ramrod.iwarp_init_func);
  VAR_8 = &VAR_13->ramrod.iwarp_init_func.rdma;
 } else {
  VAR_8 = &VAR_13->ramrod.roce_init_func.rdma;
 }

 VAR_10 = &VAR_8->params_header;
 VAR_10->cnq_start_offset = (u8)FUNC_3(VAR_5,
          VAR_1);
 VAR_10->num_cnqs = VAR_6->desired_cnq;

 if (VAR_6->cq_mode == VAR_2)
  VAR_10->cq_ring_mode = 1;
 else
  VAR_10->cq_ring_mode = 0;

 for (VAR_14 = 0; VAR_14 < VAR_6->desired_cnq; VAR_14++) {
  VAR_15 = FUNC_8(VAR_5, VAR_14);
  VAR_16 = FUNC_6(VAR_5, VAR_15);
  VAR_8->cnq_params[VAR_14].sb_num = FUNC_4(VAR_16);
  VAR_11 = &VAR_8->cnq_params[VAR_14];
  VAR_9 = &VAR_6->cnq_pbl_list[VAR_14];

  VAR_11->sb_index = VAR_5->pf_params.rdma_pf_params.gl_pi;
  VAR_11->num_pbl_pages = VAR_9->num_pbl_pages;

  FUNC_0(VAR_11->pbl_base_addr,
          VAR_9->pbl_ptr);


  VAR_11->queue_zone_num =
   FUNC_4(VAR_5->p_rdma_info->queue_zone_base +
        VAR_14);
 }

 return FUNC_10(VAR_5, VAR_13, ((void*)0));
}
