
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_rq {int dummy; } ;
struct TYPE_2__ {struct mlx5e_dma_info* dma_info; } ;
struct mlx5e_mpw_info {int xdp_xmit_bitmap; TYPE_1__ umr; } ;
struct mlx5e_dma_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct mlx5e_rq*,struct mlx5e_dma_info*,int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void
FUNC_4(struct mlx5e_rq *VAR_1, struct mlx5e_mpw_info *VAR_2, bool VAR_3)
{
 bool VAR_4;
 struct mlx5e_dma_info *VAR_5 = VAR_2->umr.dma_info;
 int VAR_6;


 if (FUNC_1(VAR_2->xdp_xmit_bitmap, VAR_0))
  return;

 VAR_4 = FUNC_0(VAR_2->xdp_xmit_bitmap,
       VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_4 || !FUNC_3(VAR_6, VAR_2->xdp_xmit_bitmap))
   FUNC_2(VAR_1, &VAR_5[VAR_6], VAR_3);
}
