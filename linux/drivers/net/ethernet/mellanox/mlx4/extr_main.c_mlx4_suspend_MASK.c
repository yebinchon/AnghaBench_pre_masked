
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mlx4_dev_persistent {int interface_state; int interface_state_mutex; struct mlx4_dev* dev; } ;
struct mlx4_dev {int dummy; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,char*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mlx4_dev_persistent* FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_1, pm_message_t VAR_2)
{
 struct mlx4_dev_persistent *VAR_3 = FUNC_4(VAR_1);
 struct mlx4_dev *VAR_4 = VAR_3->dev;

 FUNC_0(VAR_4, "suspend was called\n");
 FUNC_2(&VAR_3->interface_state_mutex);
 if (VAR_3->interface_state & VAR_0)
  FUNC_1(VAR_1);
 FUNC_3(&VAR_3->interface_state_mutex);

 return 0;
}
