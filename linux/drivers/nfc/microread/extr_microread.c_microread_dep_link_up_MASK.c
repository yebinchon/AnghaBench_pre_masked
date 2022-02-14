
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct nfc_target {int idx; int hci_reader_gate; } ;
struct nfc_hci_dev {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct nfc_hci_dev*,int ,int ,struct sk_buff**) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct nfc_hci_dev *VAR_4,
    struct nfc_target *VAR_5, u8 VAR_6,
    u8 *VAR_7, size_t VAR_8)
{
 struct sk_buff *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_10 = FUNC_2(VAR_4, VAR_5->hci_reader_gate,
         VAR_1, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_9->len == 0 || VAR_9->len > VAR_2) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 VAR_10 = FUNC_3(VAR_4->ndev, VAR_9->data,
      VAR_9->len);
 if (VAR_10 == 0)
  VAR_10 = FUNC_1(VAR_4->ndev, VAR_5->idx, VAR_6,
           VAR_3);
exit:
 FUNC_0(VAR_9);

 return VAR_10;
}
