
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_5, u16 VAR_6)
{
 int VAR_7;
 u32 VAR_8, VAR_9;

 if (!FUNC_1(VAR_5))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_5, VAR_4);
 if (!VAR_7)
  return -VAR_0;


 FUNC_2(VAR_5, VAR_7 + VAR_2, &VAR_8);
 VAR_6 &= (VAR_8 | VAR_3);

 FUNC_2(VAR_5, VAR_7 + VAR_1, &VAR_9);

 return VAR_6 & ~VAR_9 ? 0 : 1;
}
