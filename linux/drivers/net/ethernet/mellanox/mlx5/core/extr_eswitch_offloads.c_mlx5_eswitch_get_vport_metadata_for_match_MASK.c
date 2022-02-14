
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx5_eswitch {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

u32 FUNC_1(const struct mlx5_eswitch *VAR_1,
           u16 VAR_2)
{
 return ((FUNC_0(VAR_1->dev, VAR_0) & 0xffff) << 16) | VAR_2;
}
