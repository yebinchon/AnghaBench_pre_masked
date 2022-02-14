
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource_allocator {int* guaranteed; int* quota; int res_free; } ;
struct TYPE_4__ {scalar_t__ reserved_mtts; } ;
struct mlx4_dev {TYPE_2__ caps; TYPE_1__* persist; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;
struct TYPE_3__ {int num_vfs; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*) ;

__attribute__((used)) static inline void FUNC_1(struct mlx4_dev *VAR_1,
      struct resource_allocator *VAR_2,
      enum mlx4_resource VAR_3,
      int VAR_4, int VAR_5)
{
 VAR_2->guaranteed[VAR_4] = VAR_5 /
        (2 * (VAR_1->persist->num_vfs + 1));
 VAR_2->quota[VAR_4] = (VAR_5 / 2) + VAR_2->guaranteed[VAR_4];
 if (VAR_4 == FUNC_0(VAR_1)) {
  VAR_2->res_free = VAR_5;
  if (VAR_3 == VAR_0) {

   VAR_2->res_free += VAR_1->caps.reserved_mtts;
   VAR_2->guaranteed[VAR_4] += VAR_1->caps.reserved_mtts;
   VAR_2->quota[VAR_4] += VAR_1->caps.reserved_mtts;
  }
 }
}
