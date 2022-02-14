
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {scalar_t__ headroom; } ;
struct mlx5e_rq {scalar_t__ hw_mtu; int flags; int pdev; TYPE_3__* stats; TYPE_2__ buff; } ;
struct TYPE_4__ {struct mlx5e_dma_info* dma_info; } ;
struct mlx5e_mpw_info {int xdp_xmit_bitmap; TYPE_1__ umr; } ;
struct mlx5e_dma_info {int page; int addr; } ;
struct TYPE_6__ {int oversize_pkts_sw_drop; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (size_t,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,size_t,size_t,int ) ;
 struct sk_buff* FUNC_4 (struct mlx5e_rq*,void*,size_t,scalar_t__,size_t) ;
 int FUNC_5 (struct mlx5e_rq*,struct mlx5e_dma_info*,void*,scalar_t__*,size_t*,int) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int) ;

struct sk_buff *
FUNC_13(struct mlx5e_rq *VAR_2, struct mlx5e_mpw_info *VAR_3,
    u16 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct mlx5e_dma_info *VAR_7 = &VAR_3->umr.dma_info[VAR_6];
 u16 VAR_8 = VAR_2->buff.headroom;
 u32 VAR_9 = VAR_4;
 struct sk_buff *VAR_10;
 void *VAR_11, *VAR_12;
 u32 VAR_13;
 bool VAR_14;


 if (FUNC_12(VAR_4 > VAR_2->hw_mtu)) {
  VAR_2->stats->oversize_pkts_sw_drop++;
  return ((void*)0);
 }

 VAR_11 = FUNC_6(VAR_7->page) + VAR_5;
 VAR_12 = VAR_11 + VAR_8;
 VAR_13 = FUNC_0(VAR_8 + VAR_9);

 FUNC_3(VAR_2->pdev, VAR_7->addr, VAR_5,
          VAR_13, VAR_0);
 FUNC_9(VAR_11);
 FUNC_8(VAR_12);

 FUNC_10();
 VAR_14 = FUNC_5(VAR_2, VAR_7, VAR_11, &VAR_8, &VAR_9, 0);
 FUNC_11();
 if (VAR_14) {
  if (FUNC_2(VAR_1, VAR_2->flags))
   FUNC_1(VAR_6, VAR_3->xdp_xmit_bitmap);
  return ((void*)0);
 }

 VAR_10 = FUNC_4(VAR_2, VAR_11, VAR_13, VAR_8, VAR_9);
 if (FUNC_12(!VAR_10))
  return ((void*)0);


 FUNC_7(VAR_7->page);

 return VAR_10;
}
