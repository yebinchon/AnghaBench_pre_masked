
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_umem {int dummy; } ;
struct xdp_desc {int len; int addr; } ;
struct TYPE_2__ {scalar_t__ wqe; } ;
struct mlx5e_xdpsq {int (* xmit_xdp_frame_check ) (struct mlx5e_xdpsq*) ;TYPE_1__ mpwqe; int (* xmit_xdp_frame ) (struct mlx5e_xdpsq*,struct mlx5e_xdp_xmit_data*,struct mlx5e_xdp_info*,int) ;int pdev; struct xdp_umem* umem; } ;
struct mlx5e_xdp_xmit_data {int len; int dma_addr; int data; } ;
struct mlx5e_xdp_info {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mlx5e_xdpsq*) ;
 int FUNC_2 (struct mlx5e_xdpsq*) ;
 int FUNC_3 (struct mlx5e_xdpsq*,struct mlx5e_xdp_info*) ;
 int FUNC_4 (struct mlx5e_xdpsq*) ;
 int FUNC_5 (struct mlx5e_xdpsq*,struct mlx5e_xdp_xmit_data*,struct mlx5e_xdp_info*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct xdp_umem*,int ) ;
 int FUNC_8 (struct xdp_umem*,int ) ;
 int FUNC_9 (struct xdp_umem*,struct xdp_desc*) ;
 int FUNC_10 (struct xdp_umem*) ;

bool FUNC_11(struct mlx5e_xdpsq *VAR_2, unsigned int VAR_3)
{
 struct xdp_umem *VAR_4 = VAR_2->umem;
 struct mlx5e_xdp_info VAR_5;
 struct mlx5e_xdp_xmit_data VAR_6;
 bool VAR_7 = 1;
 bool VAR_8 = 0;

 VAR_5.mode = VAR_1;

 for (; VAR_3; VAR_3--) {
  int VAR_9 = VAR_2->xmit_xdp_frame_check(VAR_2);
  struct xdp_desc VAR_10;

  if (FUNC_6(VAR_9 < 0)) {
   VAR_7 = 0;
   break;
  }

  if (!FUNC_9(VAR_4, &VAR_10)) {





   break;
  }

  VAR_6.dma_addr = FUNC_8(VAR_4, VAR_10.addr);
  VAR_6.data = FUNC_7(VAR_4, VAR_10.addr);
  VAR_6.len = VAR_10.len;

  FUNC_0(VAR_2->pdev, VAR_6.dma_addr,
        VAR_6.len, VAR_0);

  if (FUNC_6(!VAR_2->xmit_xdp_frame(VAR_2, &VAR_6, &VAR_5, VAR_9))) {
   if (VAR_2->mpwqe.wqe)
    FUNC_1(VAR_2);

   FUNC_3(VAR_2, &VAR_5);
  }

  VAR_8 = 1;
 }

 if (VAR_8) {
  if (VAR_2->mpwqe.wqe)
   FUNC_1(VAR_2);
  FUNC_2(VAR_2);

  FUNC_10(VAR_4);
 }

 return !(VAR_3 && VAR_7);
}
