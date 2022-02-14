
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_flow_spec {int match_value; } ;


 void* FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void *FUNC_1(u32 VAR_4,
         struct mlx5_flow_spec *VAR_5)
{
 return (VAR_4 & VAR_0) ?
  FUNC_0(VAR_1, VAR_5->match_value,
        VAR_2) :
  FUNC_0(VAR_1, VAR_5->match_value,
        VAR_3);
}
