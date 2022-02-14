
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dev; } ;
struct hnae3_ae_dev {int reset_type; int flag; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct hnae3_ae_dev*) ;
 struct hnae3_ae_dev* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct hnae3_ae_dev*) ;
 int FUNC_3 (struct pci_dev*,struct hnae3_ae_dev*) ;
 int FUNC_4 (struct pci_dev*,struct hnae3_ae_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_3, const struct pci_device_id *VAR_4)
{
 struct hnae3_ae_dev *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  return VAR_6;
 }

 VAR_5->pdev = VAR_3;
 VAR_5->flag = VAR_4->driver_data;
 VAR_5->reset_type = VAR_2;
 FUNC_3(VAR_3, VAR_5);
 FUNC_4(VAR_3, VAR_5);

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_3->dev, VAR_5);
  FUNC_4(VAR_3, ((void*)0));
 }

 return VAR_6;
}
