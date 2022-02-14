
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct mlx5dr_ste {int * hw_ste; } ;
struct dr_hw_ste_format {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int FUNC_1 (struct dr_hw_ste_format*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(struct mlx5dr_ste *VAR_3, u64 VAR_4)
{
 u8 *VAR_5 = VAR_3->hw_ste;

 FUNC_0(VAR_2, VAR_5, VAR_1, VAR_0);
 FUNC_2(VAR_5, VAR_4);
 FUNC_1((struct dr_hw_ste_format *)VAR_3->hw_ste);
}
