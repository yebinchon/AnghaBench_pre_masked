
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct pci_dev*,int ,int ,int) ;
 int FUNC_3 (struct pci_dev*) ;

int FUNC_4(struct pci_dev *VAR_5, int VAR_6)
{
 u16 VAR_7;

 if (VAR_6 < 128 || VAR_6 > 4096 || !FUNC_1(VAR_6))
  return -VAR_0;






 if (VAR_4 == VAR_1) {
  int VAR_8 = FUNC_3(VAR_5);

  if (VAR_8 < VAR_6)
   VAR_6 = VAR_8;
 }

 VAR_7 = (FUNC_0(VAR_6) - 8) << 12;

 return FUNC_2(VAR_5, VAR_2,
        VAR_3, VAR_7);
}
