
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_port_type { ____Placeholder_mlx4_port_type } mlx4_port_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx4_dev*,int ,int*,int,int ,int ,int ,int ) ;
 int FUNC_1 (struct mlx4_dev*,char*,int) ;

int FUNC_2(struct mlx4_dev *VAR_4, int VAR_5,
      enum mlx4_port_type *VAR_6)
{
 u64 VAR_7;
 int VAR_8 = 0;

 VAR_8 = FUNC_0(VAR_4, 0, &VAR_7, VAR_5, 0,
      VAR_1, VAR_2,
      VAR_3);
 if (VAR_8) {
  FUNC_1(VAR_4, "Sense command failed for port: %d\n", VAR_5);
  return VAR_8;
 }

 if (VAR_7 > 2) {
  FUNC_1(VAR_4, "Sense returned illegal value: 0x%llx\n", VAR_7);
  return -VAR_0;
 }

 *VAR_6 = VAR_7;
 return 0;
}
