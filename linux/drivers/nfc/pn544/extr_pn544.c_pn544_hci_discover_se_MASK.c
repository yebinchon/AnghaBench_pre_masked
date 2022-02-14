
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int len; int* data; } ;
struct nfc_hci_dev {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct nfc_hci_dev*,int ,int ,int *,int ,struct sk_buff**) ;
 int FUNC_3 (struct nfc_hci_dev*,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct nfc_hci_dev *VAR_6)
{
 u32 VAR_7 = 0;
 u8 VAR_8 = 0x01;
 struct sk_buff *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_6, VAR_4, VAR_5,
        ((void*)0), 0, &VAR_9);

 if (VAR_10 == 0) {
  if (VAR_9->len == 2 && VAR_9->data[0] == 0x00)
   FUNC_1(VAR_6->ndev, VAR_7++, VAR_1);

  FUNC_0(VAR_9);
 }

 VAR_10 = FUNC_3(VAR_6, VAR_3,
    VAR_2,
    &VAR_8, 1);
 if (VAR_10 == 0)
  FUNC_1(VAR_6->ndev, VAR_7++, VAR_0);

 return !VAR_7;
}
