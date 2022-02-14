
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int cfg_size; } ;
struct file {int dummy; } ;
typedef int loff_t ;


 struct pci_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,int ,int,int ) ;

__attribute__((used)) static loff_t FUNC_3(struct file *VAR_0, loff_t VAR_1, int VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_0(FUNC_1(VAR_0));
 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3->cfg_size);
}
