
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int devfn; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11, VAR_12 = VAR_7;
 u8 VAR_13, VAR_14;

 if (VAR_10 == VAR_3 || VAR_10 == VAR_2)
  VAR_14 = VAR_0;
 else
  VAR_14 = VAR_1;

 VAR_9 = FUNC_0(VAR_8->bus, VAR_8->devfn, VAR_9,
          VAR_5, &VAR_12);
 while (VAR_9) {
  VAR_11 = FUNC_1(VAR_8, VAR_9 + 3, &VAR_13);
  if (VAR_11 != VAR_4)
   return 0;

  if ((VAR_13 & VAR_14) == VAR_10)
   return VAR_9;

  VAR_9 = FUNC_0(VAR_8->bus, VAR_8->devfn,
           VAR_9 + VAR_6,
           VAR_5, &VAR_12);
 }

 return 0;
}
