
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;




 scalar_t__ VAR_4 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_5)
{
 u16 VAR_6;

 if (VAR_4)
  return;

 FUNC_0(VAR_5, VAR_3, &VAR_6);
 switch (VAR_6) {
 case 131:
 case 130:
  VAR_4 = VAR_0;
  break;
 case 129:
  VAR_4 = VAR_1;
  break;
 case 128:
 default:
  VAR_4 = VAR_2;
  break;
 }
}
