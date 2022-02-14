
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_zone_entry {int dummy; } ;
struct mlx4_zone_allocator {int flags; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx4_zone_entry* FUNC_0 (struct mlx4_zone_allocator*,int) ;
 int FUNC_1 (struct mlx4_zone_entry*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u32 FUNC_4(struct mlx4_zone_allocator *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct mlx4_zone_entry *VAR_5;
 int VAR_6;

 if (!(VAR_2->flags & VAR_1))
  return -VAR_0;

 FUNC_2(&VAR_2->lock);

 VAR_5 = FUNC_0(VAR_2, VAR_3);

 if (((void*)0) == VAR_5) {
  VAR_6 = -1;
  goto out;
 }

 FUNC_1(VAR_5, VAR_3, VAR_4);
 VAR_6 = 0;

out:
 FUNC_3(&VAR_2->lock);

 return VAR_6;
}
