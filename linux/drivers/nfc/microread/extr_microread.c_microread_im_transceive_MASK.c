
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; int data; } ;
struct nfc_target {int hci_reader_gate; } ;
struct nfc_hci_dev {int dummy; } ;
struct microread_info {void* async_cb_context; int async_cb; int async_cb_type; } ;
typedef int data_exchange_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_4 ;
 struct microread_info* FUNC_1 (struct nfc_hci_dev*) ;
 int FUNC_2 (struct nfc_hci_dev*,int,int ,int ,int ,int ,struct microread_info*) ;
 int FUNC_3 (struct nfc_hci_dev*,int,int ,int ,int ) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_7(struct nfc_hci_dev *VAR_5,
       struct nfc_target *VAR_6,
       struct sk_buff *VAR_7, data_exchange_cb_t VAR_8,
       void *VAR_9)
{
 struct microread_info *VAR_10 = FUNC_1(VAR_5);
 u8 VAR_11;
 u16 VAR_12;

 FUNC_4("data exchange to gate 0x%x\n", VAR_6->hci_reader_gate);

 if (VAR_6->hci_reader_gate == VAR_3) {
  *(u8 *)FUNC_5(VAR_7, 1) = 0;

  return FUNC_3(VAR_5, VAR_6->hci_reader_gate,
         VAR_2,
         VAR_7->data, VAR_7->len);
 }

 switch (VAR_6->hci_reader_gate) {
 case 132:
  VAR_11 = 0xCB;
  break;
 case 131:
  VAR_11 = 0xCB;
  break;
 case 130:
  VAR_11 = 0xCB;
  break;
 case 129:
  VAR_11 = 0x1B;

  VAR_12 = FUNC_0(0xffff, VAR_7->data, VAR_7->len);
  VAR_12 = ~VAR_12;
  FUNC_6(VAR_7, VAR_12 & 0xff);
  FUNC_6(VAR_7, VAR_12 >> 8);
  break;
 case 128:
  VAR_11 = 0xDB;
  break;
 default:
  FUNC_4("Abort im_transceive to invalid gate 0x%x\n",
   VAR_6->hci_reader_gate);
  return 1;
 }

 *(u8 *)FUNC_5(VAR_7, 1) = VAR_11;

 VAR_10->async_cb_type = VAR_0;
 VAR_10->async_cb = VAR_8;
 VAR_10->async_cb_context = VAR_9;

 return FUNC_2(VAR_5, VAR_6->hci_reader_gate,
          VAR_1,
          VAR_7->data, VAR_7->len,
          VAR_4, VAR_10);
}
