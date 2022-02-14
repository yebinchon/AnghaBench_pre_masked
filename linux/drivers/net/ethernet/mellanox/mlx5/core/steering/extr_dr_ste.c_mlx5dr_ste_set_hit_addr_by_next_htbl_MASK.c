
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_ste_htbl {struct mlx5dr_icm_chunk* chunk; } ;
struct mlx5dr_icm_chunk {int num_of_entries; int icm_addr; } ;


 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(u8 *VAR_0,
       struct mlx5dr_ste_htbl *VAR_1)
{
 struct mlx5dr_icm_chunk *VAR_2 = VAR_1->chunk;

 FUNC_0(VAR_0, VAR_2->icm_addr, VAR_2->num_of_entries);
}
