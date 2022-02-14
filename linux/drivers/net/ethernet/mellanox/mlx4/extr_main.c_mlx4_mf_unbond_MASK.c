
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_dev {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct mlx4_dev *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  FUNC_3(VAR_0, "multifunction unbond for flow rules failed (%d)\n", VAR_1);
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2) {
  FUNC_3(VAR_0, "multifunction unbond for MAC table failed (%d)\n", VAR_2);
  VAR_1 = VAR_2;
 }
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2) {
  FUNC_3(VAR_0, "multifunction unbond for VLAN table failed (%d)\n", VAR_2);
  VAR_1 = VAR_2;
 }
 return VAR_1;
}
