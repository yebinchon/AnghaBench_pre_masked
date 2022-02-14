
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5e_tc_flow {TYPE_2__* esw_attr; } ;
struct mlx5_flow_spec {int match_value; } ;
struct TYPE_4__ {TYPE_1__* parse_attr; } ;
struct TYPE_3__ {struct mlx5_flow_spec spec; } ;


 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_2(struct mlx5e_tc_flow *VAR_4)
{
 struct mlx5_flow_spec *VAR_5 = &VAR_4->esw_attr->parse_attr->spec;
 void *VAR_6 = FUNC_0(VAR_0,
           VAR_5->match_value,
           VAR_3);
 u32 VAR_7 = FUNC_1(VAR_1,
          VAR_6,
          VAR_2);

 return !!VAR_7;
}
