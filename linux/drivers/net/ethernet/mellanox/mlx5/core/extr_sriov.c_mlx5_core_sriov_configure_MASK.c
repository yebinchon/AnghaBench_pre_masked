
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct mlx5_core_sriov {int num_vfs; } ;
struct TYPE_2__ {struct mlx5_core_sriov sriov; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int) ;
 struct mlx5_core_dev* FUNC_3 (struct pci_dev*) ;

int FUNC_4(struct pci_dev *VAR_0, int VAR_1)
{
 struct mlx5_core_dev *VAR_2 = FUNC_3(VAR_0);
 struct mlx5_core_sriov *VAR_3 = &VAR_2->priv.sriov;
 int VAR_4 = 0;

 FUNC_0(VAR_2, "requested num_vfs %d\n", VAR_1);

 if (VAR_1)
  VAR_4 = FUNC_2(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0);

 if (!VAR_4)
  VAR_3->num_vfs = VAR_1;
 return VAR_4 ? VAR_4 : VAR_1;
}
