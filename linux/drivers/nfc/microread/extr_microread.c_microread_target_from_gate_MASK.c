
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_target {int supported_protocols; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct nfc_hci_dev *VAR_2, u8 VAR_3,
          struct nfc_target *VAR_4)
{
 switch (VAR_3) {
 case 128:
  VAR_4->supported_protocols = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
