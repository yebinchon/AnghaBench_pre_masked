
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_zone_entry {int dummy; } ;
struct mlx4_zone_allocator {int lock; } ;


 struct mlx4_zone_entry* FUNC_0 (struct mlx4_zone_allocator*,int ) ;
 int FUNC_1 (struct mlx4_zone_entry*) ;
 int FUNC_2 (struct mlx4_zone_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mlx4_zone_allocator *VAR_0, u32 VAR_1)
{
 struct mlx4_zone_entry *VAR_2;
 int VAR_3 = 0;

 FUNC_3(&VAR_0->lock);

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (((void*)0) == VAR_2) {
  VAR_3 = -1;
  goto out;
 }

 FUNC_1(VAR_2);

out:
 FUNC_4(&VAR_0->lock);
 FUNC_2(VAR_2);

 return VAR_3;
}
