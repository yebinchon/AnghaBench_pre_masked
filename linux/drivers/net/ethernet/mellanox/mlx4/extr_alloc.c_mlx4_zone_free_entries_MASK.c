
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_zone_entry {int dummy; } ;
struct mlx4_zone_allocator {int lock; } ;


 struct mlx4_zone_entry* FUNC_0 (struct mlx4_zone_allocator*,int) ;
 int FUNC_1 (struct mlx4_zone_entry*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u32 FUNC_4(struct mlx4_zone_allocator *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct mlx4_zone_entry *VAR_4;
 int VAR_5 = 0;

 FUNC_2(&VAR_0->lock);

 VAR_4 = FUNC_0(VAR_0, VAR_1);

 if (((void*)0) == VAR_4) {
  VAR_5 = -1;
  goto out;
 }

 FUNC_1(VAR_4, VAR_2, VAR_3);

out:
 FUNC_3(&VAR_0->lock);

 return VAR_5;
}
