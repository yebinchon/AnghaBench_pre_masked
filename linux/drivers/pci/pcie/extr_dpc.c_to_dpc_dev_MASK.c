
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct dpc_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct dpc_dev* FUNC_0 (int ) ;
 struct device* FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static struct dpc_dev *FUNC_3(struct pci_dev *VAR_1)
{
 struct device *VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_2)
  return ((void*)0);
 return FUNC_0(FUNC_2(VAR_2));
}
