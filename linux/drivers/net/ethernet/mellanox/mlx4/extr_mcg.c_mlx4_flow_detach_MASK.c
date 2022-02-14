
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*,int ) ;
 int FUNC_1 (struct mlx4_dev*,char*,int ) ;

int FUNC_2(struct mlx4_dev *VAR_0, u64 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_0, "Fail to detach network rule. registration id = 0x%llx\n",
    VAR_1);
 return VAR_2;
}
