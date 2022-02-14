
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct nfc_hci_dev {TYPE_1__* pipes; } ;
struct TYPE_2__ {size_t gate; size_t dest_host; } ;







 int FUNC_0 (char*,size_t,size_t) ;
 int FUNC_1 (struct nfc_hci_dev*,size_t,struct sk_buff*) ;
 int FUNC_2 (struct nfc_hci_dev*,size_t,struct sk_buff*) ;
 int FUNC_3 (struct nfc_hci_dev*,size_t,size_t,struct sk_buff*) ;
 int FUNC_4 (struct nfc_hci_dev*,size_t,struct sk_buff*) ;
 int FUNC_5 (struct nfc_hci_dev*,size_t,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct nfc_hci_dev *VAR_0, u8 VAR_1,
           u8 VAR_2, struct sk_buff *VAR_3)
{
 u8 VAR_4 = VAR_0->pipes[VAR_1].gate;
 u8 VAR_5 = VAR_0->pipes[VAR_1].dest_host;

 FUNC_0("hci event: %d gate: %x\n", VAR_2, VAR_4);

 switch (VAR_4) {
 case 132:
  return FUNC_1(VAR_0, VAR_2, VAR_3);
 case 128:
  return FUNC_4(VAR_0, VAR_2, VAR_3);
 case 129:
  return FUNC_3(VAR_0, VAR_5,
       VAR_2, VAR_3);
 case 130:
  return FUNC_2(VAR_0, VAR_2, VAR_3);
 case 131:
  return FUNC_5(VAR_0, VAR_2, VAR_3);
 default:
  return 1;
 }
}
