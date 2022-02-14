
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mlx5dr_icm_type { ____Placeholder_mlx5dr_icm_type } mlx5dr_icm_type ;
typedef enum mlx5dr_icm_chunk_size { ____Placeholder_mlx5dr_icm_chunk_size } mlx5dr_icm_chunk_size ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int
FUNC_1(enum mlx5dr_icm_chunk_size VAR_3,
       enum mlx5dr_icm_type VAR_4)
{
 int VAR_5;
 int VAR_6;

 if (VAR_4 == VAR_0)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1;

 VAR_5 = FUNC_0(VAR_3);

 return VAR_6 * VAR_5;
}
