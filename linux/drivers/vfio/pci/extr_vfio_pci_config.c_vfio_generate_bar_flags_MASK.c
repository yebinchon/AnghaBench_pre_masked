
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
typedef int __le32 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct pci_dev*,int) ;

__attribute__((used)) static __le32 FUNC_2(struct pci_dev *VAR_7, int VAR_8)
{
 unsigned long VAR_9 = FUNC_1(VAR_7, VAR_8);
 u32 VAR_10;

 if (VAR_9 & VAR_0)
  return FUNC_0(VAR_5);

 VAR_10 = VAR_6;

 if (VAR_9 & VAR_2)
  VAR_10 |= VAR_3;

 if (VAR_9 & VAR_1)
  VAR_10 |= VAR_4;

 return FUNC_0(VAR_10);
}
