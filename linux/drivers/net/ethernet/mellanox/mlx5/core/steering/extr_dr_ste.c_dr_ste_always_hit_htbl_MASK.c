
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_ste_htbl {int lu_type; int byte_mask; struct mlx5dr_icm_chunk* chunk; } ;
struct mlx5dr_ste {int * hw_ste; } ;
struct mlx5dr_icm_chunk {int num_of_entries; int icm_addr; } ;
struct dr_hw_ste_format {int dummy; } ;


 int FUNC_0 (int ,int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct dr_hw_ste_format*) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct mlx5dr_ste *VAR_3,
       struct mlx5dr_ste_htbl *VAR_4)
{
 struct mlx5dr_icm_chunk *VAR_5 = VAR_4->chunk;
 u8 *VAR_6 = VAR_3->hw_ste;

 FUNC_0(VAR_2, VAR_6, VAR_0, VAR_4->byte_mask);
 FUNC_0(VAR_2, VAR_6, VAR_1, VAR_4->lu_type);
 FUNC_2(VAR_6, VAR_5->icm_addr, VAR_5->num_of_entries);

 FUNC_1((struct dr_hw_ste_format *)VAR_3->hw_ste);
}
