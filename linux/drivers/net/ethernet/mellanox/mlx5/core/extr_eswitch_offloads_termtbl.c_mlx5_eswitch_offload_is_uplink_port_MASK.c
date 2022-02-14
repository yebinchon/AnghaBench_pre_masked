
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ flow_source; } ;
struct mlx5_flow_spec {int match_value; int match_criteria; TYPE_1__ flow_context; } ;
struct mlx5_eswitch {int dev; } ;
struct TYPE_4__ {int source_port; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static bool FUNC_2(const struct mlx5_eswitch *VAR_5,
      const struct mlx5_flow_spec *VAR_6)
{
 u32 VAR_7, VAR_8;

 if (FUNC_0(VAR_5->dev, VAR_2))
  return VAR_6->flow_context.flow_source ==
     VAR_0;

 VAR_7 = FUNC_1(VAR_3, VAR_6->match_criteria,
        VAR_4.source_port);
 VAR_8 = FUNC_1(VAR_3, VAR_6->match_value,
         VAR_4.source_port);
 return (VAR_7 & VAR_8 & 0xffff) == VAR_1;
}
