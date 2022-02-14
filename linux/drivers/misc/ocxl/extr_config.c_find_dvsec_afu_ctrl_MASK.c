
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pci_dev*,int,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_6, u8 VAR_7)
{
 int VAR_8 = 0;
 u16 VAR_9, VAR_10;
 u8 VAR_11;

 while ((VAR_8 = FUNC_0(VAR_6, VAR_8,
          VAR_4))) {
  FUNC_2(VAR_6, VAR_8 + VAR_3,
    &VAR_9);
  FUNC_2(VAR_6, VAR_8 + VAR_2, &VAR_10);

  if (VAR_9 == VAR_5 &&
   VAR_10 == VAR_1) {
   FUNC_1(VAR_6,
     VAR_8 + VAR_0,
     &VAR_11);
   if (VAR_11 == VAR_7)
    return VAR_8;
  }
 }
 return 0;
}
