
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct st21nfca_hci_info {TYPE_1__* se_status; } ;
struct sk_buff {int* data; scalar_t__ len; } ;
struct nfc_hci_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_ese_present; scalar_t__ is_uicc_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct sk_buff*) ;
 struct st21nfca_hci_info* FUNC_1 (struct nfc_hci_dev*) ;
 int FUNC_2 (struct nfc_hci_dev*,int ,int ,struct sk_buff**) ;
 int FUNC_3 (struct nfc_hci_dev*,int ,int ,int *,int ) ;
 int FUNC_4 (struct nfc_hci_dev*,int ,int ,int*,int) ;
 int FUNC_5 (int ,char*,int ,int,int,int*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct nfc_hci_dev *VAR_14)
{
 struct st21nfca_hci_info *VAR_15 = FUNC_1(VAR_14);
 struct sk_buff *VAR_16;

 u8 VAR_17;
 u8 VAR_18[2];
 int VAR_19 = 0;
 int VAR_20;

 if (VAR_15->se_status->is_uicc_present)
  VAR_18[VAR_19++] = VAR_10;
 if (VAR_15->se_status->is_ese_present)
  VAR_18[VAR_19++] = VAR_12;

 if (VAR_19) {
  VAR_20 = FUNC_4(VAR_14, VAR_4,
     VAR_5,
     (u8 *) &VAR_18, VAR_19);
  if (VAR_20 < 0)
   return VAR_20;
 }


 VAR_20 = FUNC_2(VAR_14, VAR_11,
         VAR_13, &VAR_16);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_17 = VAR_16->data[0];
 FUNC_0(VAR_16);
 if (VAR_17 == 0) {
  VAR_17 = 1;

  VAR_20 = FUNC_4(VAR_14, VAR_11,
     VAR_13, &VAR_17, 1);
  if (VAR_20 < 0)
   return VAR_20;
 }

 VAR_20 = FUNC_3(VAR_14, VAR_9,
          VAR_6, ((void*)0), 0);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_14, VAR_7,
         VAR_8, &VAR_16);
 if (VAR_20 < 0)
  return VAR_20;

 if (VAR_16->len != VAR_2) {
  FUNC_0(VAR_16);
  return -VAR_1;
 }

 FUNC_5(VAR_3, "FULL VERSION SOFTWARE INFO: ",
         VAR_0, 16, 1,
         VAR_16->data, VAR_2, 0);

 FUNC_0(VAR_16);

 return 0;
}
