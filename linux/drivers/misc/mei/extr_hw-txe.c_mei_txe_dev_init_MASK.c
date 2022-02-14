
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct mei_txe_hw {int wait_aliveness_resp; } ;
struct mei_device {int dummy; } ;


 int VAR_0 ;
 struct mei_device* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mei_device*,int *,int *) ;
 int VAR_1 ;
 struct mei_txe_hw* FUNC_3 (struct mei_device*) ;

struct mei_device *FUNC_4(struct pci_dev *VAR_2)
{
 struct mei_device *VAR_3;
 struct mei_txe_hw *VAR_4;

 VAR_3 = FUNC_0(&VAR_2->dev, sizeof(struct mei_device) +
      sizeof(struct mei_txe_hw), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(VAR_3, &VAR_2->dev, &VAR_1);

 VAR_4 = FUNC_3(VAR_3);

 FUNC_1(&VAR_4->wait_aliveness_resp);

 return VAR_3;
}
