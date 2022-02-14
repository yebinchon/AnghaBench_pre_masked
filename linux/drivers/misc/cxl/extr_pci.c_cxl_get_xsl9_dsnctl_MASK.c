
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*,int*,int*,int*) ;

int FUNC_1(struct pci_dev *VAR_1, u64 VAR_2, u64 *VAR_3)
{
 u64 VAR_4;
 u64 VAR_5, VAR_6, VAR_7;






 if (FUNC_0(VAR_1, &VAR_5, &VAR_6, &VAR_7))
  return -VAR_0;





 VAR_4 = (VAR_5 << (63-15));
 VAR_4 |= (VAR_2 << (63-15));


 VAR_4 |= ((u64)0x09 << (63-28));
 VAR_4 |= (VAR_7 << (63-55));






 VAR_4 |= VAR_6;

 *VAR_3 = VAR_4;
 return 0;
}
