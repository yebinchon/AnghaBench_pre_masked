
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_zone_entry {int dummy; } ;
struct mlx4_zone_allocator {int lock; } ;


 int FUNC_0 (struct mlx4_zone_entry*,int,int,int,int*) ;
 struct mlx4_zone_entry* FUNC_1 (struct mlx4_zone_allocator*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u32 FUNC_4(struct mlx4_zone_allocator *VAR_0, u32 VAR_1, int VAR_2,
       int VAR_3, u32 VAR_4, u32 *VAR_5)
{
 struct mlx4_zone_entry *VAR_6;
 int VAR_7 = -1;

 FUNC_2(&VAR_0->lock);

 VAR_6 = FUNC_1(VAR_0, VAR_1);

 if (((void*)0) == VAR_6)
  goto out;

 VAR_7 = FUNC_0(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);

out:
 FUNC_3(&VAR_0->lock);

 return VAR_7;
}
