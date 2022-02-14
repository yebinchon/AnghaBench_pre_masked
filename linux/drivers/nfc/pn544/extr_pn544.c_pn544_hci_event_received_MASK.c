
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {size_t* data; int len; } ;
struct nfc_hci_dev {int ndev; TYPE_1__* pipes; } ;
struct TYPE_2__ {size_t gate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nfc_hci_dev*,size_t,int ,struct sk_buff**) ;
 int FUNC_2 (struct nfc_hci_dev*,size_t,int ,int *,int ) ;
 int FUNC_3 (struct nfc_hci_dev*,size_t) ;
 int FUNC_4 (int ,int ,int ,size_t*,int) ;
 int FUNC_5 (int ,struct sk_buff*) ;
 int FUNC_6 (char*,size_t) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_8(struct nfc_hci_dev *VAR_8, u8 VAR_9, u8 VAR_10,
        struct sk_buff *VAR_11)
{
 struct sk_buff *VAR_12 = ((void*)0);
 u8 VAR_13 = VAR_8->pipes[VAR_9].gate;
 int VAR_14;

 FUNC_6("hci event %d\n", VAR_10);
 switch (VAR_10) {
 case 130:
  if (VAR_13 == VAR_6) {
   VAR_14 = FUNC_3(VAR_8, VAR_13);
  } else if (VAR_13 == VAR_7) {
   VAR_14 = FUNC_1(VAR_8, VAR_13, VAR_5,
           &VAR_12);
   if (VAR_14 < 0)
    goto exit;

   VAR_14 = FUNC_4(VAR_8->ndev, VAR_4,
          VAR_2, VAR_12->data,
          VAR_12->len);

   FUNC_0(VAR_12);
  } else {
   VAR_14 = -VAR_0;
  }
  break;
 case 129:
  VAR_14 = FUNC_2(VAR_8, VAR_13, VAR_3,
           ((void*)0), 0);
  break;
 case 128:
  if (VAR_11->len < 2) {
   VAR_14 = -VAR_1;
   goto exit;
  }

  if (VAR_11->data[0] != 0) {
   FUNC_6("data0 %d\n", VAR_11->data[0]);
   VAR_14 = -VAR_1;
   goto exit;
  }

  FUNC_7(VAR_11, 2);
  return FUNC_5(VAR_8->ndev, VAR_11);
 default:
  return 1;
 }

exit:
 FUNC_0(VAR_11);

 return VAR_14;
}
