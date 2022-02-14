
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int len; int* data; } ;
struct nfc_target {int supported_protocols; int nfcid1_len; int* nfcid1; int sens_res; scalar_t__ hci_reader_gate; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nfc_hci_dev*,scalar_t__,int ,struct sk_buff**) ;
 int FUNC_2 (struct nfc_hci_dev*,scalar_t__,int ,int*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct nfc_hci_dev *VAR_12,
      u8 VAR_13,
      struct nfc_target *VAR_14)
{
 struct sk_buff *VAR_15;
 int VAR_16 = 0;

 if (VAR_13 == VAR_11)
  return VAR_16;

 if (VAR_14->supported_protocols & VAR_5) {
  VAR_16 = FUNC_2(VAR_12,
   VAR_11,
   VAR_7, ((void*)0), 0, ((void*)0));
  if (VAR_16 < 0)
   return VAR_16;

  VAR_14->hci_reader_gate = VAR_11;
 } else if (VAR_14->supported_protocols & VAR_4) {
  if (VAR_14->nfcid1_len != 4 && VAR_14->nfcid1_len != 7 &&
      VAR_14->nfcid1_len != 10)
   return -VAR_0;

  VAR_16 = FUNC_2(VAR_12, VAR_1,
         VAR_9,
         VAR_14->nfcid1, VAR_14->nfcid1_len, ((void*)0));
 } else if (VAR_14->supported_protocols & VAR_2) {
  VAR_16 = FUNC_1(VAR_12, VAR_10,
          VAR_6, &VAR_15);
  if (VAR_16 < 0)
   return VAR_16;

  if (VAR_15->len != 8) {
   FUNC_0(VAR_15);
   return -VAR_0;
  }


  if ((VAR_15->data[0] == 0x01) && (VAR_15->data[1] == 0xfe)) {
   FUNC_0(VAR_15);
   VAR_16 = FUNC_2(VAR_12,
     VAR_11,
     VAR_7,
     ((void*)0), 0, ((void*)0));
   if (VAR_16 < 0)
    return VAR_16;

   VAR_14->supported_protocols = VAR_5;
   VAR_14->hci_reader_gate =
    VAR_11;
  } else {
   VAR_16 = FUNC_2(VAR_12, VAR_10,
          VAR_9,
          VAR_15->data, VAR_15->len, ((void*)0));
   FUNC_0(VAR_15);
  }
 } else if (VAR_14->supported_protocols & VAR_3) {




  if (VAR_14->sens_res == 0x4403)
   VAR_16 = FUNC_2(VAR_12, VAR_1,
         VAR_8,
         ((void*)0), 0, ((void*)0));
 }

 return VAR_16;
}
