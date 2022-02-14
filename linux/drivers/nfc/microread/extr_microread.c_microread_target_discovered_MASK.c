
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int* data; } ;
struct nfc_target {int hci_reader_gate; int sel_res; int nfcid1_len; int nfcid1; void* supported_protocols; void* sens_res; } ;
struct nfc_hci_dev {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;





 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct nfc_target*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct nfc_target* FUNC_3 (int,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int*,int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int ,struct nfc_target*,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static void FUNC_10(struct nfc_hci_dev *VAR_18, u8 VAR_19,
     struct sk_buff *VAR_20)
{
 struct nfc_target *VAR_21;
 int VAR_22 = 0;

 FUNC_9("target discovered to gate 0x%x\n", VAR_19);

 VAR_21 = FUNC_3(sizeof(struct nfc_target), VAR_2);
 if (VAR_21 == ((void*)0)) {
  VAR_22 = -VAR_1;
  goto exit;
 }

 VAR_21->hci_reader_gate = VAR_19;

 switch (VAR_19) {
 case 132:
  VAR_21->supported_protocols =
        FUNC_6(VAR_20->data[VAR_9]);
  VAR_21->sens_res =
    FUNC_0(*(u16 *)&VAR_20->data[VAR_7]);
  VAR_21->sel_res = VAR_20->data[VAR_9];
  VAR_21->nfcid1_len = VAR_20->data[VAR_8];
  if (VAR_21->nfcid1_len > sizeof(VAR_21->nfcid1)) {
   VAR_22 = -VAR_0;
   goto exit_free;
  }
  FUNC_5(VAR_21->nfcid1, &VAR_20->data[VAR_10],
         VAR_21->nfcid1_len);
  break;
 case 131:
  VAR_21->supported_protocols =
        FUNC_6(VAR_20->data[VAR_5]);
  VAR_21->sens_res =
    FUNC_0(*(u16 *)&VAR_20->data[VAR_3]);
  VAR_21->sel_res = VAR_20->data[VAR_5];
  VAR_21->nfcid1_len = VAR_20->data[VAR_4];
  if (VAR_21->nfcid1_len > sizeof(VAR_21->nfcid1)) {
   VAR_22 = -VAR_0;
   goto exit_free;
  }
  FUNC_5(VAR_21->nfcid1, &VAR_20->data[VAR_6],
         VAR_21->nfcid1_len);
  break;
 case 130:
  VAR_21->supported_protocols = VAR_16;
  FUNC_5(VAR_21->nfcid1, &VAR_20->data[VAR_11], 4);
  VAR_21->nfcid1_len = 4;
  break;
 case 129:
  VAR_21->supported_protocols = VAR_17;
  VAR_21->sens_res =
   FUNC_4(*(u16 *)&VAR_20->data[VAR_12]);
  FUNC_5(VAR_21->nfcid1, &VAR_20->data[VAR_13], 4);
  VAR_21->nfcid1_len = 4;
  break;
 case 128:
  VAR_21->supported_protocols = VAR_15;
  FUNC_5(VAR_21->nfcid1, &VAR_20->data[VAR_14], 8);
  VAR_21->nfcid1_len = 8;
  break;
 default:
  FUNC_9("discard target discovered to gate 0x%x\n", VAR_19);
  goto exit_free;
 }

 VAR_22 = FUNC_7(VAR_18->ndev, VAR_21, 1);

exit_free:
 FUNC_1(VAR_21);

exit:
 FUNC_2(VAR_20);

 if (VAR_22)
  FUNC_8("Failed to handle discovered target err=%d\n", VAR_22);
}
