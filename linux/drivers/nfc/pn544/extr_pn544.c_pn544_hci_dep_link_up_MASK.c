
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
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct nfc_hci_dev*,int ,int ,struct sk_buff**) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,char*,int ,int,int,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct nfc_hci_dev *VAR_6,
    struct nfc_target *VAR_7, u8 VAR_8,
    u8 *VAR_9, size_t VAR_10)
{
 struct sk_buff *VAR_11 = ((void*)0);
 int VAR_12;

 VAR_12 = FUNC_2(VAR_6, VAR_7->hci_reader_gate,
    VAR_5, &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_11->len == 0 || VAR_11->len > VAR_3) {
  VAR_12 = -VAR_1;
  goto exit;
 }
 FUNC_4(VAR_2, "remote gb: ", VAR_0,
   16, 1, VAR_11->data, VAR_11->len, 1);

 VAR_12 = FUNC_3(VAR_6->ndev, VAR_11->data,
      VAR_11->len);

 if (VAR_12 == 0)
  VAR_12 = FUNC_1(VAR_6->ndev, VAR_7->idx, VAR_8,
     VAR_4);
exit:
 FUNC_0(VAR_11);
 return VAR_12;
}
