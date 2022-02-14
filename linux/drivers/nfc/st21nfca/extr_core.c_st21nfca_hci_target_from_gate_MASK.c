
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nfc_target {int supported_protocols; int sens_res; int sel_res; int nfcid1_len; int nfcid1; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfc_hci_dev*,int*) ;
 int FUNC_3 (struct nfc_hci_dev*,int*) ;
 int FUNC_4 (struct nfc_hci_dev*,int*,int*) ;
 int FUNC_5 (struct nfc_hci_dev*,struct nfc_target*) ;

__attribute__((used)) static int FUNC_6(struct nfc_hci_dev *VAR_5, u8 VAR_6,
      struct nfc_target *VAR_7)
{
 int VAR_8, VAR_9;
 u16 VAR_10;
 u8 VAR_11;
 u8 VAR_12[VAR_1];

 switch (VAR_6) {
 case 129:
  VAR_7->supported_protocols = VAR_2;
  break;
 case 130:

  VAR_8 = FUNC_2(VAR_5, &VAR_10);
  if (VAR_8 < 0)
   return VAR_8;
  if (VAR_10 == 0x000c) {
   VAR_7->supported_protocols = VAR_4;
   VAR_7->sens_res = 0x0c00;
  } else {
   VAR_8 = FUNC_3(VAR_5, &VAR_11);
   if (VAR_8 < 0)
    return VAR_8;

   VAR_8 = FUNC_4(VAR_5, VAR_12, &VAR_9);
   if (VAR_8 < 0)
    return VAR_8;

   VAR_7->supported_protocols =
       FUNC_1(VAR_11);
   if (VAR_7->supported_protocols == 0xffffffff)
    return -VAR_0;

   VAR_7->sens_res = VAR_10;
   VAR_7->sel_res = VAR_11;
   FUNC_0(VAR_7->nfcid1, VAR_12, VAR_9);
   VAR_7->nfcid1_len = VAR_9;
  }

  break;
 case 128:
  VAR_7->supported_protocols = VAR_3;
  VAR_8 = FUNC_5(VAR_5, VAR_7);
  if (VAR_8 < 0)
   return VAR_8;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
