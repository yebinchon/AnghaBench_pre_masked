
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,char*,int) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

int FUNC_3(struct pci_dev *VAR_3)
{
 u8 VAR_4;

 if (!VAR_2)
  return -VAR_0;



 FUNC_1(VAR_3, VAR_1, &VAR_4);
 if (VAR_4 >= VAR_2 &&
     (VAR_4 % VAR_2) == 0)
  return 0;


 FUNC_2(VAR_3, VAR_1, VAR_2);

 FUNC_1(VAR_3, VAR_1, &VAR_4);
 if (VAR_4 == VAR_2)
  return 0;

 FUNC_0(VAR_3, "cache line size of %d is not supported\n",
     VAR_2 << 2);

 return -VAR_0;
}
