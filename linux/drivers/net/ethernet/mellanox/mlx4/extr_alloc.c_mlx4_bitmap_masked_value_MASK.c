
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_bitmap {int max; int reserved_top; } ;



__attribute__((used)) static u32 FUNC_0(struct mlx4_bitmap *VAR_0, u32 VAR_1)
{
 return VAR_1 & (VAR_0->max + VAR_0->reserved_top - 1);
}
