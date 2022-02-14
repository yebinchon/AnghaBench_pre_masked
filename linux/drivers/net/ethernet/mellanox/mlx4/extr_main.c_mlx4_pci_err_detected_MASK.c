
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mlx4_dev_persistent {int interface_state; int dev; int interface_state_mutex; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_dev_persistent*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 struct mlx4_dev_persistent* FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_7(struct pci_dev *VAR_4,
           pci_channel_state_t VAR_5)
{
 struct mlx4_dev_persistent *VAR_6 = FUNC_6(VAR_4);

 FUNC_1(VAR_6->dev, "mlx4_pci_err_detected was called\n");
 FUNC_0(VAR_6);

 FUNC_4(&VAR_6->interface_state_mutex);
 if (VAR_6->interface_state & VAR_0)
  FUNC_3(VAR_4);

 FUNC_5(&VAR_6->interface_state_mutex);
 if (VAR_5 == VAR_3)
  return VAR_1;

 FUNC_2(VAR_6->dev);
 return VAR_2;
}
