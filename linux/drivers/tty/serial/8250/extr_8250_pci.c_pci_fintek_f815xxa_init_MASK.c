
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6;

 if (!(FUNC_0(VAR_3, 0) & VAR_2))
  return -VAR_1;

 switch (VAR_3->device) {
 case 0x1204:
 case 0x1208:
  VAR_4 = VAR_3->device & 0xff;
  break;
 case 0x1212:
  VAR_4 = 12;
  break;
 default:
  return -VAR_0;
 }


 FUNC_1(VAR_3, 0x209, 0x40);

 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {

  VAR_6 = 0x2A0 + 0x08 * VAR_5;


  FUNC_1(VAR_3, VAR_6 + 0x01, 0x33);


  FUNC_1(VAR_3, VAR_6 + 0, 0x01);
 }

 return VAR_4;
}
