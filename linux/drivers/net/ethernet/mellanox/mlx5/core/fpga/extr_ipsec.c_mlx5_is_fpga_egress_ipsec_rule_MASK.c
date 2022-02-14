
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_flow_context {int flags; } ;
struct mlx5_flow_act {int action; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,void const*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct mlx5_core_dev*,int,int const*,int const*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static bool FUNC_3(struct mlx5_core_dev *VAR_12,
        u8 VAR_13,
        const u32 *VAR_14,
        const u32 *VAR_15,
        struct mlx5_flow_act *VAR_16,
        struct mlx5_flow_context *VAR_17)
{
 const void *VAR_18 = FUNC_0(VAR_7, VAR_14,
        VAR_9);
 bool VAR_19 = FUNC_1(VAR_8, VAR_18, VAR_6) ||
   FUNC_1(VAR_8, VAR_18, VAR_5);
 bool VAR_20 = FUNC_1(VAR_8, VAR_18, VAR_11) ||
   FUNC_1(VAR_8, VAR_18, VAR_10);
 int VAR_21;

 VAR_21 = FUNC_2(VAR_12, VAR_13, VAR_14,
          VAR_15);
 if (!VAR_21)
  return VAR_21;

 if (VAR_19 || VAR_20 ||
     (VAR_13 &
      ~(VAR_4 | VAR_3)) ||
     (VAR_16->action & ~(VAR_2 | VAR_1)) ||
      (VAR_17->flags & VAR_0))
  return 0;

 return 1;
}
