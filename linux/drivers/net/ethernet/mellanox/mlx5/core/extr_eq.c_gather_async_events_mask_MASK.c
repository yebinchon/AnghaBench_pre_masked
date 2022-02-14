
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct mlx5_core_dev {int dummy; } ;


 unsigned long long VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*,int ) ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 scalar_t__ FUNC_3 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_4 (struct mlx5_core_dev*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct mlx5_core_dev*,unsigned long long*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (struct mlx5_core_dev*,char*) ;
 scalar_t__ FUNC_7 (struct mlx5_core_dev*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_8(struct mlx5_core_dev *VAR_20, u64 VAR_21[4])
{
 u64 VAR_22 = VAR_0;

 if (FUNC_4(VAR_20))
  VAR_22 |= (1ull << VAR_8);

 if (FUNC_0(VAR_20, VAR_15))
  VAR_22 |= (1ull << VAR_6);

 if (FUNC_0(VAR_20, VAR_17))
  VAR_22 |= (1ull << VAR_9);
 else
  FUNC_6(VAR_20, "port_module_event is not set\n");

 if (FUNC_3(VAR_20))
  VAR_22 |= (1ull << VAR_10);

 if (FUNC_0(VAR_20, VAR_14))
  VAR_22 |= (1ull << VAR_4) |
        (1ull << VAR_5);
 if (FUNC_1(VAR_20, VAR_12))
  VAR_22 |= (1ull << VAR_1);

 if (FUNC_0(VAR_20, VAR_18))
  VAR_22 |= (1ull << VAR_11);

 if (FUNC_2(VAR_20, VAR_19))
  VAR_22 |= (1ull << VAR_2);

 if (FUNC_0(VAR_20, VAR_16))
  VAR_22 |= (1ull << VAR_7);

 if (FUNC_7(VAR_20))
  VAR_22 |=
   (1ull << VAR_3);

 VAR_21[0] = VAR_22;

 if (FUNC_0(VAR_20, VAR_13))
  FUNC_5(VAR_20, VAR_21);
}
