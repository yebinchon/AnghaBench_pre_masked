
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct mlx5e_rq {int pdev; } ;
struct mlx5e_dma_info {int page; scalar_t__ addr; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ,scalar_t__,scalar_t__,unsigned int) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_4(struct mlx5e_rq *VAR_1, struct sk_buff *VAR_2,
     struct mlx5e_dma_info *VAR_3, u32 VAR_4, u32 VAR_5,
     unsigned int VAR_6)
{
 FUNC_0(VAR_1->pdev,
    VAR_3->addr + VAR_4,
    VAR_5, VAR_0);
 FUNC_1(VAR_3->page);
 FUNC_2(VAR_2, FUNC_3(VAR_2)->nr_frags,
   VAR_3->page, VAR_4, VAR_5, VAR_6);
}
