
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_fpga_device {int dummy; } ;
typedef enum mlx5_fpga_access_type { ____Placeholder_mlx5_fpga_access_type } mlx5_fpga_access_type ;


 int VAR_0 ;

 int FUNC_0 (struct mlx5_fpga_device*,size_t,int ,void*) ;
 int FUNC_1 (struct mlx5_fpga_device*,char*,int) ;

int FUNC_2(struct mlx5_fpga_device *VAR_1, size_t VAR_2, u64 VAR_3,
         void *VAR_4, enum mlx5_fpga_access_type VAR_5)
{
 int VAR_6;

 switch (VAR_5) {
 case 128:
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_6)
   return VAR_6;
  break;
 default:
  FUNC_1(VAR_1, "Unexpected read access_type %u\n",
          VAR_5);
  return -VAR_0;
 }

 return VAR_2;
}
