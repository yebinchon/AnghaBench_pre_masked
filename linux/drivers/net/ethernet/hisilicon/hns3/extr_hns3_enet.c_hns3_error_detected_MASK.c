
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct hnae3_ae_dev {TYPE_1__* ops; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;
struct TYPE_2__ {int (* handle_hw_ras_error ) (struct hnae3_ae_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 struct hnae3_ae_dev* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct hnae3_ae_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_4(struct pci_dev *VAR_3,
         pci_channel_state_t VAR_4)
{
 struct hnae3_ae_dev *VAR_5 = FUNC_2(VAR_3);
 pci_ers_result_t VAR_6;

 FUNC_1(&VAR_3->dev, "PCI error detected, state(=%d)!!\n", VAR_4);

 if (VAR_4 == VAR_2)
  return VAR_0;

 if (!VAR_5 || !VAR_5->ops) {
  FUNC_0(&VAR_3->dev,
   "Can't recover - error happened before device initialized\n");
  return VAR_1;
 }

 if (VAR_5->ops->handle_hw_ras_error)
  VAR_6 = VAR_5->ops->handle_hw_ras_error(VAR_5);
 else
  return VAR_1;

 return VAR_6;
}
