
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef uintptr_t u32 ;
struct TYPE_6__ {uintptr_t addr; int lkey; int length; } ;
struct postsend_info {TYPE_2__ write; } ;
struct mlx5dr_send_ring {int tx_head; int signal_th; int max_post_send_size; int qp; TYPE_4__* mr; scalar_t__ buf; } ;
struct TYPE_5__ {int max_inline_size; } ;
struct mlx5dr_domain {struct mlx5dr_send_ring* send_ring; TYPE_1__ info; } ;
struct TYPE_7__ {int key; } ;
struct TYPE_8__ {TYPE_3__ mkey; scalar_t__ dma_addr; } ;


 int FUNC_0 (struct mlx5dr_send_ring*,struct postsend_info*) ;
 int FUNC_1 (struct mlx5dr_domain*,struct mlx5dr_send_ring*) ;
 int FUNC_2 (int ,struct postsend_info*) ;
 int FUNC_3 (scalar_t__,void*,int ) ;

__attribute__((used)) static int FUNC_4(struct mlx5dr_domain *VAR_0,
    struct postsend_info *VAR_1)
{
 struct mlx5dr_send_ring *VAR_2 = VAR_0->send_ring;
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_2);
 if (VAR_4)
  return VAR_4;

 if (VAR_1->write.length > VAR_0->info.max_inline_size) {
  VAR_3 = (VAR_2->tx_head &
          (VAR_0->send_ring->signal_th - 1)) *
   VAR_2->max_post_send_size;

  FUNC_3(VAR_2->buf + VAR_3,
         (void *)(uintptr_t)VAR_1->write.addr,
         VAR_1->write.length);
  VAR_1->write.addr = (uintptr_t)VAR_2->mr->dma_addr + VAR_3;
  VAR_1->write.lkey = VAR_2->mr->mkey.key;
 }

 VAR_2->tx_head++;
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(VAR_2->qp, VAR_1);

 return 0;
}
