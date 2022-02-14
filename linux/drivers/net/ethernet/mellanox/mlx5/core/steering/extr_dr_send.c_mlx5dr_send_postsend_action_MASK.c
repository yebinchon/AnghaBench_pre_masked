
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {uintptr_t addr; scalar_t__ lkey; int length; } ;
struct postsend_info {int rkey; int remote_addr; TYPE_1__ write; } ;
struct mlx5dr_domain {int mutex; } ;
struct TYPE_6__ {TYPE_2__* chunk; scalar_t__ data; } ;
struct mlx5dr_action {TYPE_3__ rewrite; } ;
struct TYPE_5__ {int rkey; int mr_addr; int byte_size; } ;


 int FUNC_0 (struct mlx5dr_domain*,struct postsend_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mlx5dr_domain *VAR_0,
    struct mlx5dr_action *VAR_1)
{
 struct postsend_info VAR_2 = {};
 int VAR_3;

 VAR_2.write.addr = (uintptr_t)VAR_1->rewrite.data;
 VAR_2.write.length = VAR_1->rewrite.chunk->byte_size;
 VAR_2.write.lkey = 0;
 VAR_2.remote_addr = VAR_1->rewrite.chunk->mr_addr;
 VAR_2.rkey = VAR_1->rewrite.chunk->rkey;

 FUNC_1(&VAR_0->mutex);
 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 FUNC_2(&VAR_0->mutex);

 return VAR_3;
}
