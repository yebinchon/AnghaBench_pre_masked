
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {int dummy; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int is_probed; int dev; } ;
struct drv_dev_and_id {struct pci_device_id const* member_2; struct pci_dev* member_1; struct pci_driver* member_0; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drv_dev_and_id*) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int,int (*) (struct drv_dev_and_id*),struct drv_dev_and_id*) ;

__attribute__((used)) static int FUNC_9(struct pci_driver *VAR_3, struct pci_dev *VAR_4,
     const struct pci_device_id *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct drv_dev_and_id VAR_9 = { VAR_3, VAR_4, VAR_5 };






 VAR_7 = FUNC_4(&VAR_4->dev);
 VAR_4->is_probed = 1;

 FUNC_0();





 if (VAR_7 < 0 || VAR_7 >= VAR_0 || !FUNC_6(VAR_7) ||
     FUNC_7(VAR_4))
  VAR_8 = VAR_2;
 else
  VAR_8 = FUNC_2(FUNC_3(VAR_7), VAR_1);

 if (VAR_8 < VAR_2)
  VAR_6 = FUNC_8(VAR_8, FUNC_5, &VAR_9);
 else
  VAR_6 = FUNC_5(&VAR_9);

 VAR_4->is_probed = 0;
 FUNC_1();
 return VAR_6;
}
