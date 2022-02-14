
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_zone_allocator {int flags; scalar_t__ mask; scalar_t__ last_uid; int lock; int prios; int entries; } ;
typedef enum mlx4_zone_alloc_flags { ____Placeholder_mlx4_zone_alloc_flags } mlx4_zone_alloc_flags ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct mlx4_zone_allocator* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

struct mlx4_zone_allocator *FUNC_3(enum mlx4_zone_alloc_flags VAR_1)
{
 struct mlx4_zone_allocator *VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);

 if (((void*)0) == VAR_2)
  return ((void*)0);

 FUNC_0(&VAR_2->entries);
 FUNC_0(&VAR_2->prios);
 FUNC_2(&VAR_2->lock);
 VAR_2->last_uid = 0;
 VAR_2->mask = 0;
 VAR_2->flags = VAR_1;

 return VAR_2;
}
