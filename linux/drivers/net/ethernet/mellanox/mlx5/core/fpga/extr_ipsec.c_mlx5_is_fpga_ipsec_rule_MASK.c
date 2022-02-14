
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*,int const*,int const*) ;
 int FUNC_3 (struct mlx5_core_dev*,int const*,int const*) ;
 scalar_t__ FUNC_4 (int const*,int const*) ;
 scalar_t__ FUNC_5 (int const*,int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (struct mlx5_core_dev*,int const*,int const*) ;

__attribute__((used)) static bool FUNC_8(struct mlx5_core_dev *VAR_4,
        u8 VAR_5,
        const u32 *VAR_6,
        const u32 *VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_4);
 bool VAR_9;

 VAR_9 = FUNC_3(VAR_4, VAR_6, VAR_7);

 if (!(VAR_5 & VAR_3) ||
     FUNC_5(VAR_6, VAR_7) ||
     FUNC_4(VAR_6, VAR_7) ||
     FUNC_6(VAR_6) ||
     !(FUNC_2(VAR_4, VAR_6, VAR_7) ||
       VAR_9))
  return 0;

 if (!(VAR_8 & VAR_0))
  return 0;

 if (!(VAR_8 & VAR_1) &&
     FUNC_1(VAR_6))
  return 0;

 if (!(VAR_8 & VAR_2) &&
     VAR_9)
  return 0;

 if (!FUNC_7(VAR_4, VAR_6, VAR_7))
  return 0;

 return 1;
}
