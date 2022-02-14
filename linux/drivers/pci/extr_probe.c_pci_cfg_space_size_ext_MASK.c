
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = VAR_2;

 if (FUNC_1(VAR_3, VAR_5, &VAR_4) != VAR_0)
  return VAR_2;
 if (VAR_4 == 0xffffffff || FUNC_0(VAR_3))
  return VAR_2;

 return VAR_1;
}
