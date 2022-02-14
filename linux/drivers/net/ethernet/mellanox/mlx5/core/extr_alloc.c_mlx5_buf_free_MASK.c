
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_frag_buf {TYPE_1__* frags; int size; } ;
struct mlx5_core_dev {int device; } ;
struct TYPE_2__ {int map; int buf; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct mlx5_core_dev *VAR_0, struct mlx5_frag_buf *VAR_1)
{
 FUNC_0(VAR_0->device, VAR_1->size, VAR_1->frags->buf,
     VAR_1->frags->map);

 FUNC_1(VAR_1->frags);
}
