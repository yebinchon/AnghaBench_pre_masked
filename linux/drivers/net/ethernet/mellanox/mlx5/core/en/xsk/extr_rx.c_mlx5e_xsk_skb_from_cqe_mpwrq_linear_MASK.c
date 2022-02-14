
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {scalar_t__ headroom; scalar_t__ umem_headroom; } ;
struct mlx5e_rq {scalar_t__ hw_mtu; int flags; int pdev; TYPE_4__ buff; TYPE_2__* stats; } ;
struct TYPE_5__ {struct mlx5e_dma_info* dma_info; } ;
struct mlx5e_mpw_info {int xdp_xmit_bitmap; TYPE_1__ umr; } ;
struct TYPE_7__ {void* data; } ;
struct mlx5e_dma_info {int addr; TYPE_3__ xsk; } ;
struct TYPE_6__ {int oversize_pkts_sw_drop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,size_t,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct mlx5e_rq*,struct mlx5e_dma_info*,void*,scalar_t__*,size_t*,int) ;
 struct sk_buff* FUNC_6 (struct mlx5e_rq*,void*,size_t) ;
 int FUNC_7 (void*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int) ;

struct sk_buff *FUNC_11(struct mlx5e_rq *VAR_2,
          struct mlx5e_mpw_info *VAR_3,
          u16 VAR_4,
          u32 VAR_5,
          u32 VAR_6)
{
 struct mlx5e_dma_info *VAR_7 = &VAR_3->umr.dma_info[VAR_6];
 u16 VAR_8 = VAR_2->buff.headroom - VAR_2->buff.umem_headroom;
 u32 VAR_9 = VAR_4;
 void *VAR_10, *VAR_11;
 u32 VAR_12;
 bool VAR_13;


 if (FUNC_10(VAR_4 > VAR_2->hw_mtu)) {
  VAR_2->stats->oversize_pkts_sw_drop++;
  return ((void*)0);
 }






 FUNC_0(VAR_5);

 VAR_10 = VAR_7->xsk.data;
 VAR_11 = VAR_10 + VAR_8;
 VAR_12 = VAR_2->buff.headroom + VAR_9;

 FUNC_3(VAR_2->pdev, VAR_7->addr, VAR_12, VAR_0);
 FUNC_7(VAR_11);

 FUNC_8();
 VAR_13 = FUNC_5(VAR_2, VAR_7, VAR_10, &VAR_8, &VAR_9, 1);
 FUNC_9();
 if (FUNC_4(VAR_13)) {
  if (FUNC_4(FUNC_2(VAR_1, VAR_2->flags)))
   FUNC_1(VAR_6, VAR_3->xdp_xmit_bitmap);
  return ((void*)0);
 }




 return FUNC_6(VAR_2, VAR_11, VAR_9);
}
