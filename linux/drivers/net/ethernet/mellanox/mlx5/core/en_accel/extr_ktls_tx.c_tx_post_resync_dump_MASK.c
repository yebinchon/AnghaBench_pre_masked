
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx5e_txqsq {int pc; int sqn; int mkey_be; int pdev; } ;
struct mlx5_wqe_data_seg {void* byte_count; int lkey; int addr; } ;
struct mlx5_wqe_ctrl_seg {int fm_ce_se; void* tisn; void* qpn_ds; void* opmod_idx_opcode; } ;
struct mlx5e_dump_wqe {struct mlx5_wqe_data_seg data; struct mlx5_wqe_ctrl_seg ctrl; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mlx5e_txqsq*,int ,int,int ) ;
 struct mlx5e_dump_wqe* FUNC_4 (struct mlx5e_txqsq*,int,int*) ;
 int FUNC_5 (int ,int *,int ,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mlx5e_txqsq*,int,scalar_t__,int,int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct mlx5e_txqsq *VAR_7, skb_frag_t *VAR_8, u32 VAR_9, bool VAR_10)
{
 struct mlx5_wqe_ctrl_seg *VAR_11;
 struct mlx5_wqe_data_seg *VAR_12;
 struct mlx5e_dump_wqe *VAR_13;
 dma_addr_t VAR_14 = 0;
 u16 VAR_15;
 int VAR_16;
 u16 VAR_17;

 VAR_13 = FUNC_4(VAR_7, sizeof(*VAR_13), &VAR_17);

 VAR_15 = sizeof(*VAR_13) / VAR_6;

 VAR_11 = &VAR_13->ctrl;
 VAR_12 = &VAR_13->data;

 VAR_11->opmod_idx_opcode = FUNC_0((VAR_7->pc << 8) | VAR_5);
 VAR_11->qpn_ds = FUNC_0((VAR_7->sqn << 8) | VAR_15);
 VAR_11->tisn = FUNC_0(VAR_9 << 8);
 VAR_11->fm_ce_se = VAR_10 ? VAR_4 : 0;

 VAR_16 = FUNC_7(VAR_8);
 VAR_14 = FUNC_5(VAR_7->pdev, VAR_8, 0, VAR_16,
        VAR_0);
 if (FUNC_9(FUNC_2(VAR_7->pdev, VAR_14)))
  return -VAR_1;

 VAR_12->addr = FUNC_1(VAR_14);
 VAR_12->lkey = VAR_7->mkey_be;
 VAR_12->byte_count = FUNC_0(VAR_16);
 FUNC_3(VAR_7, VAR_14, VAR_16, VAR_2);

 FUNC_8(VAR_7, VAR_17, VAR_3, VAR_16, FUNC_6(VAR_8));
 VAR_7->pc += VAR_3;

 return 0;
}
