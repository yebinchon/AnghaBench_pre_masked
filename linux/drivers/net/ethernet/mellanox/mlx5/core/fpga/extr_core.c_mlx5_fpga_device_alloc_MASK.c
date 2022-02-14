
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_device {int state; int state_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_fpga_device* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct mlx5_fpga_device *FUNC_2(void)
{
 struct mlx5_fpga_device *VAR_2 = ((void*)0);

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(&VAR_2->state_lock);
 VAR_2->state = VAR_1;
 return VAR_2;
}
