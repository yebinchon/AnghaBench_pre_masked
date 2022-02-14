
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mlx4_icm_table {int num_obj; int obj_size; int mutex; TYPE_1__** icm; int coherent; scalar_t__ virt; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,scalar_t__,int) ;
 int FUNC_1 (struct mlx4_dev*,TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx4_dev *VAR_2, struct mlx4_icm_table *VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 u64 VAR_6;

 VAR_5 = (VAR_4 & (VAR_3->num_obj - 1)) / (VAR_1 / VAR_3->obj_size);

 FUNC_2(&VAR_3->mutex);

 if (--VAR_3->icm[VAR_5]->refcount == 0) {
  VAR_6 = (u64) VAR_5 * VAR_1;
  FUNC_0(VAR_2, VAR_3->virt + VAR_6,
          VAR_1 / VAR_0);
  FUNC_1(VAR_2, VAR_3->icm[VAR_5], VAR_3->coherent);
  VAR_3->icm[VAR_5] = ((void*)0);
 }

 FUNC_3(&VAR_3->mutex);
}
