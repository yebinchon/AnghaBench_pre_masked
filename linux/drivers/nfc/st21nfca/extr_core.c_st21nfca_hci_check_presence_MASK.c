
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_target {int hci_reader_gate; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfc_hci_dev*,int,int ,int*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct nfc_hci_dev *VAR_3,
           struct nfc_target *VAR_4)
{
 u8 VAR_5 = 0x11;

 switch (VAR_4->hci_reader_gate) {
 case 130:
 case 129:







  return FUNC_0(VAR_3, VAR_4->hci_reader_gate,
     VAR_2, &VAR_5, 1, ((void*)0));
 case 128:
  return FUNC_0(VAR_3, VAR_4->hci_reader_gate,
     VAR_1,
     ((void*)0), 0, ((void*)0));
 default:
  return -VAR_0;
 }
}
