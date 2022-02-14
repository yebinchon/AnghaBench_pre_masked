
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbg_dev {int misc_device; int misc_device_user; int dev; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*) ;
 struct vbg_dev* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct vbg_dev*) ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_4)
{
 struct vbg_dev *VAR_5 = FUNC_5(VAR_4);

 FUNC_2(&VAR_3);
 VAR_2 = ((void*)0);
 FUNC_3(&VAR_3);

 FUNC_0(VAR_5->dev, &VAR_0);
 FUNC_0(VAR_5->dev, &VAR_1);
 FUNC_1(&VAR_5->misc_device_user);
 FUNC_1(&VAR_5->misc_device);
 FUNC_6(VAR_5);
 FUNC_4(VAR_4);
}
