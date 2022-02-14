
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct xdp_umem {int dummy; } ;
struct xdp_buff {void* data; void* data_end; void* data_hard_start; int handle; int * rxq; } ;
struct mlx5e_rq {TYPE_2__* stats; int netdev; int flags; int xdpsq; int xdp_rxq; struct xdp_umem* umem; int xdp_prog; } ;
struct TYPE_3__ {int handle; } ;
struct mlx5e_dma_info {TYPE_1__ xsk; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_4__ {int xdp_drop; int xdp_redirect; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_prog* FUNC_0 (int ) ;





 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mlx5e_rq*,struct mlx5e_dma_info*) ;
 int FUNC_5 (int ,struct mlx5e_rq*,struct mlx5e_dma_info*,struct xdp_buff*) ;
 int FUNC_6 (int ,struct bpf_prog*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,struct xdp_buff*,struct bpf_prog*) ;
 int FUNC_9 (struct xdp_buff*) ;
 int FUNC_10 (struct xdp_umem*,int ,int) ;

bool FUNC_11(struct mlx5e_rq *VAR_2, struct mlx5e_dma_info *VAR_3,
        void *VAR_4, u16 *VAR_5, u32 *VAR_6, bool VAR_7)
{
 struct bpf_prog *VAR_8 = FUNC_0(VAR_2->xdp_prog);
 struct xdp_umem *VAR_9 = VAR_2->umem;
 struct xdp_buff VAR_10;
 u32 VAR_11;
 int VAR_12;

 if (!VAR_8)
  return 0;

 VAR_10.data = VAR_4 + *VAR_5;
 FUNC_9(&VAR_10);
 VAR_10.data_end = VAR_10.data + *VAR_6;
 VAR_10.data_hard_start = VAR_4;
 if (VAR_7)
  VAR_10.handle = VAR_3->xsk.handle;
 VAR_10.rxq = &VAR_2->xdp_rxq;

 VAR_11 = FUNC_2(VAR_8, &VAR_10);
 if (VAR_7) {
  u64 VAR_13 = VAR_10.data - VAR_10.data_hard_start;

  VAR_10.handle = FUNC_10(VAR_9, VAR_10.handle, VAR_13);
 }
 switch (VAR_11) {
 case 130:
  *VAR_5 = VAR_10.data - VAR_10.data_hard_start;
  *VAR_6 = VAR_10.data_end - VAR_10.data;
  return 0;
 case 128:
  if (FUNC_7(!FUNC_5(VAR_2->xdpsq, VAR_2, VAR_3, &VAR_10)))
   goto xdp_abort;
  FUNC_1(VAR_1, VAR_2->flags);
  return 1;
 case 129:

  VAR_12 = FUNC_8(VAR_2->netdev, &VAR_10, VAR_8);
  if (FUNC_7(VAR_12))
   goto xdp_abort;
  FUNC_1(VAR_1, VAR_2->flags);
  FUNC_1(VAR_0, VAR_2->flags);
  if (!VAR_7)
   FUNC_4(VAR_2, VAR_3);
  VAR_2->stats->xdp_redirect++;
  return 1;
 default:
  FUNC_3(VAR_11);

 case 132:
xdp_abort:
  FUNC_6(VAR_2->netdev, VAR_8, VAR_11);

 case 131:
  VAR_2->stats->xdp_drop++;
  return 1;
 }
}
