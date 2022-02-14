
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;


 int FUNC_1 (struct mlx5e_priv*,void*,unsigned long) ;
 int FUNC_2 (struct mlx5e_priv*,void*) ;

__attribute__((used)) static int FUNC_3(enum tc_setup_type VAR_3, void *VAR_4,
     void *VAR_5)
{
 unsigned long VAR_6 = FUNC_0(VAR_2) | FUNC_0(VAR_1);
 struct mlx5e_priv *VAR_7 = VAR_5;

 switch (VAR_3) {
 case 129:
  return FUNC_1(VAR_7, VAR_4, VAR_6);
 case 128:
  return FUNC_2(VAR_7, VAR_4);
 default:
  return -VAR_0;
 }
}
