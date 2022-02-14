
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int,int *) ;
 int FUNC_2 (struct pci_dev*,int,int *) ;
 int FUNC_3 (struct pci_dev*,int,int *) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_1, int VAR_2,
     __le32 *VAR_3, int VAR_4)
{
 int VAR_5 = -VAR_0;
 u32 VAR_6 = 0;

 switch (VAR_4) {
 case 1:
 {
  u8 VAR_7;
  VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_7);
  VAR_6 = VAR_7;
  break;
 }
 case 2:
 {
  u16 VAR_8;
  VAR_5 = FUNC_3(VAR_1, VAR_2, &VAR_8);
  VAR_6 = VAR_8;
  break;
 }
 case 4:
  VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_6);
  break;
 }

 *VAR_3 = FUNC_0(VAR_6);

 return VAR_5;
}
