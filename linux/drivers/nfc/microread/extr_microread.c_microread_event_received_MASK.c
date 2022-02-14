
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int len; int * data; } ;
struct nfc_hci_dev {int ndev; TYPE_1__* pipes; } ;
struct TYPE_2__ {size_t gate; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nfc_hci_dev*,size_t,struct sk_buff*) ;
 int FUNC_2 (struct nfc_hci_dev*,size_t,int ,int *,int ) ;
 int FUNC_3 (struct nfc_hci_dev*,int ,int ,size_t*,int) ;
 int FUNC_4 (int ,int ,int ,int *,int) ;
 int FUNC_5 (int ,struct sk_buff*) ;
 int FUNC_6 (char*,size_t,size_t) ;
 int FUNC_7 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_8(struct nfc_hci_dev *VAR_7, u8 VAR_8,
         u8 VAR_9, struct sk_buff *VAR_10)
{
 int VAR_11;
 u8 VAR_12 = VAR_7->pipes[VAR_8].gate;
 u8 VAR_13;

 FUNC_6("Microread received event 0x%x to gate 0x%x\n", VAR_9, VAR_12);

 switch (VAR_9) {
 case 131:
  FUNC_1(VAR_7, VAR_12, VAR_10);
  return 0;

 case 130:
  if (VAR_10->len < 1) {
   FUNC_0(VAR_10);
   return -VAR_1;
  }

  if (VAR_10->data[VAR_10->len - 1]) {
   FUNC_0(VAR_10);
   return -VAR_0;
  }

  FUNC_7(VAR_10, VAR_10->len - 1);

  VAR_11 = FUNC_5(VAR_7->ndev, VAR_10);
  break;

 case 132:
 case 133:
  FUNC_0(VAR_10);
  return 0;

 case 129:
  VAR_11 = FUNC_4(VAR_7->ndev, VAR_6,
         VAR_5, VAR_10->data,
         VAR_10->len);

  FUNC_0(VAR_10);
  break;

 case 134:
  if (VAR_10->len < 1) {
   FUNC_0(VAR_10);
   return -VAR_1;
  }

  if (VAR_10->data[VAR_10->len-1]) {
   FUNC_0(VAR_10);
   return -VAR_0;
  }

  FUNC_7(VAR_10, VAR_10->len - 1);

  VAR_11 = FUNC_5(VAR_7->ndev, VAR_10);
  break;

 case 128:
  FUNC_0(VAR_10);

  VAR_13 = 0xff;
  VAR_11 = FUNC_3(VAR_7, VAR_3,
          VAR_4, &VAR_13, 1);
  if (VAR_11)
   break;

  VAR_11 = FUNC_2(VAR_7, VAR_12,
           VAR_2, ((void*)0),
           0);
  break;

 default:
  return 1;
 }

 return VAR_11;
}
