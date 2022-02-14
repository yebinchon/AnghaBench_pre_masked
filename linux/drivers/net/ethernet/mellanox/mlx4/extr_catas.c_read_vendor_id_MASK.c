
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,char*,...) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct mlx4_dev *VAR_1)
{
 u16 VAR_2 = 0;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->persist->pdev, 0, &VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_1, "Failed to read vendor ID, ret=%d\n", VAR_3);
  return VAR_3;
 }

 if (VAR_2 == 0xffff) {
  FUNC_0(VAR_1, "PCI can't be accessed to read vendor id\n");
  return -VAR_0;
 }

 return 0;
}
