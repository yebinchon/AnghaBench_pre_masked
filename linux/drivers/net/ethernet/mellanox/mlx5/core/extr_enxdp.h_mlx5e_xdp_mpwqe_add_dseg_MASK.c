
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx5e_xdpsq_stats {int inlnw; } ;
struct mlx5e_xdp_mpwqe {int ds_count; scalar_t__ inline_on; int pkt_count; scalar_t__ wqe; } ;
struct mlx5e_xdpsq {int mkey_be; struct mlx5e_xdp_mpwqe mpwqe; } ;
struct mlx5e_xdp_xmit_data {int len; int dma_addr; int data; } ;
struct mlx5_wqe_inline_seg {int data; void* byte_count; } ;
struct mlx5_wqe_data_seg {int lkey; void* byte_count; int addr; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_4(struct mlx5e_xdpsq *VAR_3,
    struct mlx5e_xdp_xmit_data *VAR_4,
    struct mlx5e_xdpsq_stats *VAR_5)
{
 struct mlx5e_xdp_mpwqe *VAR_6 = &VAR_3->mpwqe;
 struct mlx5_wqe_data_seg *VAR_7 =
  (struct mlx5_wqe_data_seg *)VAR_6->wqe + VAR_6->ds_count;
 u32 VAR_8 = VAR_4->len;

 VAR_6->pkt_count++;

 if (VAR_6->inline_on && VAR_8 <= VAR_0) {
  struct mlx5_wqe_inline_seg *VAR_9 =
   (struct mlx5_wqe_inline_seg *)VAR_7;
  u16 VAR_10 = sizeof(*VAR_9) + VAR_8;
  u16 VAR_11 = FUNC_0(VAR_10, VAR_2);

  VAR_9->byte_count = FUNC_1(VAR_8 | VAR_1);
  FUNC_3(VAR_9->data, VAR_4->data, VAR_8);

  VAR_6->ds_count += VAR_11;
  VAR_5->inlnw++;
  return;
 }

 VAR_7->addr = FUNC_2(VAR_4->dma_addr);
 VAR_7->byte_count = FUNC_1(VAR_8);
 VAR_7->lkey = VAR_3->mkey_be;
 VAR_6->ds_count++;
}
