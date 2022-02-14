
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_params {int lro_timeout; int lro_en; } ;


 int VAR_0 ;
 int FUNC_0 (void*,void*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct mlx5e_params *VAR_7, void *VAR_8)
{
 if (!VAR_7->lro_en)
  return;



 FUNC_0(VAR_8, VAR_8, VAR_4,
   VAR_1 |
   VAR_2);
 FUNC_0(VAR_8, VAR_8, VAR_5,
   (VAR_0 - 256) >> 8);
 FUNC_0(VAR_8, VAR_8, VAR_6, VAR_7->lro_timeout);
}
