
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_target {int supported_protocols; int nfcid1_len; int hci_reader_gate; int * nfcid1; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct nfc_hci_dev*,int ,int ,int *,int,int *) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct nfc_hci_dev *VAR_11,
       struct nfc_target *VAR_12)
{
 FUNC_1("supported protocol %d\b", VAR_12->supported_protocols);
 if (VAR_12->supported_protocols & (VAR_4 |
     VAR_3)) {
  return FUNC_0(VAR_11, VAR_12->hci_reader_gate,
     VAR_10,
     ((void*)0), 0, ((void*)0));
 } else if (VAR_12->supported_protocols & VAR_6) {
  if (VAR_12->nfcid1_len != 4 && VAR_12->nfcid1_len != 7 &&
      VAR_12->nfcid1_len != 10)
   return -VAR_0;

   return FUNC_0(VAR_11, VAR_1,
         VAR_9,
         VAR_12->nfcid1, VAR_12->nfcid1_len, ((void*)0));
 } else if (VAR_12->supported_protocols & (VAR_5 |
      VAR_2)) {
  return -VAR_0;
 } else if (VAR_12->supported_protocols & VAR_7) {
  return FUNC_0(VAR_11, VAR_12->hci_reader_gate,
     VAR_8,
     ((void*)0), 0, ((void*)0));
 }

 return 0;
}
