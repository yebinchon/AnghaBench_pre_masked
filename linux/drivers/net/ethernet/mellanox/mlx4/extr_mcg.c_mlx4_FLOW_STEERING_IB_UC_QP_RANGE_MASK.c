
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,int,int ,int ,int ,int ,int ) ;

int FUNC_1(struct mlx4_dev *VAR_3, u32 VAR_4,
          u32 VAR_5)
{
 int VAR_6;
 u64 VAR_7;

 VAR_7 = ((u64) VAR_4) << 32;
 VAR_7 |= ((u64) VAR_5) & 0xFFFFFFFF;

 VAR_6 = FUNC_0(VAR_3, VAR_7, 0, 0,
   VAR_2,
   VAR_1, VAR_0);

 return VAR_6;
}
