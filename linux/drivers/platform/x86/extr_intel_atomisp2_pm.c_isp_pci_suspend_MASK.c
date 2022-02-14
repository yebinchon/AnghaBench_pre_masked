
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int current_state; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (struct pci_dev*,int ,int *) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,int ) ;
 struct pci_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_4(VAR_4);
 u32 VAR_6;

 FUNC_3(VAR_5, VAR_3, 0);






 FUNC_1(VAR_5, VAR_0, &VAR_6);
 VAR_6 |= VAR_1;
 FUNC_3(VAR_5, VAR_0, VAR_6);






 FUNC_2(VAR_5);
 VAR_5->current_state = VAR_2;
 FUNC_0(VAR_5, 0);

 return 0;
}
