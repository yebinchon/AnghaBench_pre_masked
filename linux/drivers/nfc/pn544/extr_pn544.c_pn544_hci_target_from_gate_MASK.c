
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_target {int sens_res; int supported_protocols; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




__attribute__((used)) static int FUNC_0(struct nfc_hci_dev *VAR_4, u8 VAR_5,
          struct nfc_target *VAR_6)
{
 switch (VAR_5) {
 case 130:
  VAR_6->supported_protocols = VAR_1;
  break;
 case 129:
  VAR_6->supported_protocols = VAR_2;
  VAR_6->sens_res = 0x0c00;
  break;
 case 128:
  VAR_6->supported_protocols = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
