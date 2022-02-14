
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct xdp_umem {int dummy; } ;
struct TYPE_4__ {int umem_headroom; } ;
struct mlx5e_rq {int pdev; TYPE_2__ buff; struct xdp_umem* umem; } ;
struct TYPE_3__ {int handle; int data; } ;
struct mlx5e_dma_info {int addr; TYPE_1__ xsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct xdp_umem*,int ) ;
 int FUNC_2 (struct xdp_umem*,int ) ;
 int FUNC_3 (struct xdp_umem*,int ,int ) ;
 int FUNC_4 (struct xdp_umem*) ;
 int FUNC_5 (struct xdp_umem*,int *) ;

int FUNC_6(struct mlx5e_rq *VAR_3,
         struct mlx5e_dma_info *VAR_4)
{
 struct xdp_umem *VAR_5 = VAR_3->umem;
 u64 VAR_6;

 if (!FUNC_5(VAR_5, &VAR_6))
  return -VAR_1;

 VAR_4->xsk.handle = FUNC_3(VAR_5, VAR_6,
            VAR_3->buff.umem_headroom);
 VAR_4->xsk.data = FUNC_1(VAR_5, VAR_4->xsk.handle);






 VAR_4->addr = FUNC_2(VAR_5, VAR_6);

 FUNC_4(VAR_5);

 FUNC_0(VAR_3->pdev, VAR_4->addr, VAR_2,
       VAR_0);

 return 0;
}
