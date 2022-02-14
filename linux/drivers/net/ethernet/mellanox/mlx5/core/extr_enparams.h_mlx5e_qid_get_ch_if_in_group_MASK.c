
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5e_params {int num_channels; } ;
typedef enum mlx5e_rq_group { ____Placeholder_mlx5e_rq_group } mlx5e_rq_group ;



__attribute__((used)) static inline bool FUNC_0(struct mlx5e_params *VAR_0,
      u16 VAR_1,
      enum mlx5e_rq_group VAR_2,
      u16 *VAR_3)
{
 int VAR_4 = VAR_0->num_channels;
 int VAR_5 = VAR_1 - VAR_4 * VAR_2;

 if (VAR_5 < 0 || VAR_5 >= VAR_4)
  return 0;

 *VAR_3 = VAR_5;
 return 1;
}
