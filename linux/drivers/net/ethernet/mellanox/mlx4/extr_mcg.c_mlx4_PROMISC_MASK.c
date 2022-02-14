
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_steer_type { ____Placeholder_mlx4_steer_type } mlx4_steer_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,int,scalar_t__,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mlx4_dev *VAR_3, u32 VAR_4,
   enum mlx4_steer_type VAR_5, u8 VAR_6, u8 VAR_7)
{
 return FUNC_0(VAR_3, (u64) VAR_4 | (u64) VAR_7 << 62, (u32) VAR_5, VAR_6,
   VAR_0, VAR_1,
   VAR_2);
}
