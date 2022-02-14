
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_flow_spec {int match_value; } ;
struct mlx5_eswitch {int dummy; } ;


 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,void*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct mlx5_eswitch*,int ) ;
 scalar_t__ FUNC_3 (struct mlx5_eswitch*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(struct mlx5_eswitch *VAR_7,
            struct mlx5_eswitch *VAR_8,
            struct mlx5_flow_spec *VAR_9,
            u16 VAR_10)
{
 void *VAR_11;

 if (FUNC_3(VAR_7)) {
  VAR_11 = FUNC_0(VAR_0, VAR_9->match_value,
        VAR_5);
  FUNC_1(VAR_2, VAR_11, VAR_3,
    FUNC_2(VAR_8,
           VAR_10));
 } else {
  VAR_11 = FUNC_0(VAR_0, VAR_9->match_value,
        VAR_4);
  FUNC_1(VAR_1, VAR_11, VAR_6, VAR_10);
 }
}
