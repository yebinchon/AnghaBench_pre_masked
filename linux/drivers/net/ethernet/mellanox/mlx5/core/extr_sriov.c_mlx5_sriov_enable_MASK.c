
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*,int) ;
 int FUNC_3 (struct pci_dev*,int) ;
 struct mlx5_core_dev* FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_0, int VAR_1)
{
 struct mlx5_core_dev *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_2, "mlx5_device_enable_sriov failed : %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_2, "pci_enable_sriov failed : %d\n", VAR_3);
  FUNC_1(VAR_2);
 }
 return VAR_3;
}
