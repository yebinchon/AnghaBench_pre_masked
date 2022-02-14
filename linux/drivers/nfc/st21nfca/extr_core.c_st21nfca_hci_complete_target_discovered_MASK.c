
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct nfc_target {int* sensf_res; scalar_t__ sensf_res_len; scalar_t__ hci_reader_gate; void* supported_protocols; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int*,int ,scalar_t__) ;
 int FUNC_2 (struct nfc_hci_dev*,scalar_t__,int ,struct sk_buff**) ;

__attribute__((used)) static int FUNC_3(struct nfc_hci_dev *VAR_8,
      u8 VAR_9,
      struct nfc_target *VAR_10)
{
 int VAR_11;
 struct sk_buff *VAR_12 = ((void*)0);

 if (VAR_9 == VAR_5) {
  VAR_11 = FUNC_2(VAR_8, VAR_5,
    VAR_7, &VAR_12);
  if (VAR_11 < 0)
   goto exit;

  if (VAR_12->len > VAR_4) {
   VAR_11 = -VAR_0;
   goto exit;
  }
  if (VAR_12->len > 0) {

   FUNC_1(VAR_10->sensf_res, VAR_12->data,
    VAR_12->len);
   VAR_10->sensf_res_len = VAR_12->len;

   if (VAR_10->sensf_res[0] == 0x01 &&
       VAR_10->sensf_res[1] == 0xfe)
    VAR_10->supported_protocols =
       VAR_3;
   else
    VAR_10->supported_protocols =
       VAR_2;
  } else {
   FUNC_0(VAR_12);
   VAR_12 = ((void*)0);

   VAR_11 = FUNC_2(VAR_8, VAR_5,
     VAR_6,
     &VAR_12);
   if (VAR_11 < 0)
    goto exit;

   if (VAR_12->len > VAR_1) {
    VAR_11 = -VAR_0;
    goto exit;
   }
   FUNC_1(VAR_10->sensf_res, VAR_12->data,
    VAR_12->len);
   VAR_10->sensf_res_len = VAR_12->len;
   VAR_10->supported_protocols = VAR_3;
  }
  VAR_10->hci_reader_gate = VAR_5;
 }
 VAR_11 = 1;
exit:
 FUNC_0(VAR_12);
 return VAR_11;
}
