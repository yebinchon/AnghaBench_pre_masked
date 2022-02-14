
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct mlx5e_wqe_frag_info {int offset; struct mlx5e_dma_info* di; } ;
struct TYPE_5__ {int headroom; int umem_headroom; } ;
struct mlx5e_rq {TYPE_3__* stats; int pdev; TYPE_2__ buff; } ;
struct TYPE_4__ {void* data; } ;
struct mlx5e_dma_info {int addr; TYPE_1__ xsk; } ;
struct mlx5_cqe64 {int dummy; } ;
struct TYPE_6__ {int wqe_err; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 scalar_t__ FUNC_2 (struct mlx5_cqe64*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct mlx5e_rq*,struct mlx5e_dma_info*,void*,int*,int*,int) ;
 struct sk_buff* FUNC_5 (struct mlx5e_rq*,void*,int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;

struct sk_buff *FUNC_10(struct mlx5e_rq *VAR_2,
           struct mlx5_cqe64 *VAR_3,
           struct mlx5e_wqe_frag_info *VAR_4,
           u32 VAR_5)
{
 struct mlx5e_dma_info *VAR_6 = VAR_4->di;
 u16 VAR_7 = VAR_2->buff.headroom - VAR_2->buff.umem_headroom;
 void *VAR_8, *VAR_9;
 bool VAR_10;
 u32 VAR_11;






 FUNC_0(VAR_4->offset);

 VAR_8 = VAR_6->xsk.data;
 VAR_9 = VAR_8 + VAR_7;
 VAR_11 = VAR_2->buff.headroom + VAR_5;

 FUNC_1(VAR_2->pdev, VAR_6->addr, VAR_11, VAR_0);
 FUNC_6(VAR_9);

 if (FUNC_9(FUNC_2(VAR_3) != VAR_1)) {
  VAR_2->stats->wqe_err++;
  return ((void*)0);
 }

 FUNC_7();
 VAR_10 = FUNC_4(VAR_2, VAR_6, VAR_8, &VAR_7, &VAR_5, 1);
 FUNC_8();

 if (FUNC_3(VAR_10))
  return ((void*)0);





 return FUNC_5(VAR_2, VAR_9, VAR_5);
}
