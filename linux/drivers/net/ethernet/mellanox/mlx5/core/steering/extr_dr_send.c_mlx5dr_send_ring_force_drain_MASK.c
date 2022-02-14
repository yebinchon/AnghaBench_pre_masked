
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {uintptr_t addr; int length; scalar_t__ lkey; } ;
struct postsend_info {uintptr_t remote_addr; int rkey; TYPE_1__ write; } ;
struct mlx5dr_send_ring {int signal_th; TYPE_3__* sync_mr; } ;
struct mlx5dr_domain {struct mlx5dr_send_ring* send_ring; } ;
struct TYPE_5__ {int key; } ;
struct TYPE_6__ {TYPE_2__ mkey; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5dr_domain*,struct mlx5dr_send_ring*) ;
 int FUNC_1 (struct mlx5dr_domain*,struct postsend_info*) ;

int FUNC_2(struct mlx5dr_domain *VAR_2)
{
 struct mlx5dr_send_ring *VAR_3 = VAR_2->send_ring;
 struct postsend_info VAR_4 = {};
 u8 VAR_5[VAR_0];
 int VAR_6;
 int VAR_7;
 int VAR_8;


 VAR_6 = VAR_3->signal_th * VAR_1 / 2;


 VAR_4.write.addr = (uintptr_t)VAR_5;
 VAR_4.write.length = VAR_0;
 VAR_4.write.lkey = 0;

 VAR_4.remote_addr = (uintptr_t)VAR_3->sync_mr->addr;
 VAR_4.rkey = VAR_3->sync_mr->mkey.key;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_7 = FUNC_1(VAR_2, &VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_0(VAR_2, VAR_3);

 return VAR_7;
}
