
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u8 ;
typedef char u32 ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_root_namespace {struct mlx5_core_dev* dev; } ;
struct mlx5_flow_group {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_5__ {int outer_esp_spi; } ;
struct TYPE_8__ {TYPE_1__ ft_field_support; } ;
struct TYPE_7__ {int misc_parameters; } ;
struct TYPE_6__ {int (* create_flow_group ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,char*,struct mlx5_flow_group*) ;} ;


 char* FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 char FUNC_2 (int ,char*,char) ;
 char VAR_0 ;
 int FUNC_3 (int ,char*,char,char) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_6 (char*,char*,scalar_t__) ;
 TYPE_2__* FUNC_7 (int ) ;
 char VAR_5 ;

__attribute__((used)) static int FUNC_8(struct mlx5_flow_root_namespace *VAR_6,
        struct mlx5_flow_table *VAR_7,
        u32 *VAR_8,
        struct mlx5_flow_group *VAR_9,
        bool VAR_10)
{
 int (*VAR_11)(struct mlx5_flow_root_namespace *VAR_12,
     struct mlx5_flow_table *VAR_13, u32 *VAR_14,
     struct mlx5_flow_group *VAR_15) =
  FUNC_7(FUNC_5(VAR_10))->create_flow_group;
 char *VAR_16 = FUNC_0(VAR_1, VAR_8,
        VAR_4.misc_parameters);
 struct mlx5_core_dev *VAR_17 = VAR_6->dev;
 u32 VAR_18;
 u8 VAR_19;
 int VAR_20;

 if (FUNC_1(VAR_17,
          VAR_2.ft_field_support.outer_esp_spi))
  return VAR_11(VAR_6, VAR_7, VAR_8, VAR_9);

 VAR_19 =
  FUNC_2(VAR_1, VAR_8, VAR_19);
 VAR_18 =
  FUNC_2(VAR_3, VAR_16, VAR_5);
 if (!VAR_19 || !VAR_18)
  return VAR_11(VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_3(VAR_3, VAR_16, VAR_5, 0);

 if (!(*VAR_16) &&
     !FUNC_6(VAR_16, VAR_16 + 1, FUNC_4(VAR_3) - 1))
  FUNC_3(VAR_1, VAR_8, VAR_19,
    VAR_19 & ~VAR_0);

 VAR_20 = VAR_11(VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_3(VAR_3, VAR_16, VAR_5, VAR_18);
 FUNC_3(VAR_1, VAR_8, VAR_19, VAR_19);

 return VAR_20;
}
