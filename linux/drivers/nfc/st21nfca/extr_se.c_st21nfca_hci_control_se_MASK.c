
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int se_active; int req_completion; int se_active_timer; int expected_pipes; int count_pipes; } ;
struct st21nfca_hci_info {TYPE_1__ se_info; } ;
struct sk_buff {int len; scalar_t__* data; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 struct st21nfca_hci_info* FUNC_3 (struct nfc_hci_dev*) ;
 int FUNC_4 (struct nfc_hci_dev*,int ,int ,struct sk_buff**) ;
 int FUNC_5 (struct nfc_hci_dev*,int ,scalar_t__,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct nfc_hci_dev *VAR_14, u32 VAR_15,
    u8 VAR_16)
{
 struct st21nfca_hci_info *VAR_17 = FUNC_3(VAR_14);
 int VAR_18, VAR_19;
 struct sk_buff *VAR_20;
 u8 VAR_21, VAR_22;

 switch (VAR_15) {
 case 129:
  VAR_21 = (VAR_16 == VAR_11 ?
     VAR_6 :
     VAR_7);

  VAR_17->se_info.count_pipes = 0;
  VAR_17->se_info.expected_pipes = VAR_9;
  break;
 case 128:
  VAR_21 = (VAR_16 == VAR_11 ?
     VAR_4 :
     VAR_5);

  VAR_17->se_info.count_pipes = 0;
  VAR_17->se_info.expected_pipes = VAR_8;
  break;
 default:
  return -VAR_0;
 }





 FUNC_6(&VAR_17->se_info.req_completion);
 VAR_18 = FUNC_5(VAR_14, VAR_3, VAR_21,
          ((void*)0), 0);
 if (VAR_18 < 0)
  return VAR_18;

 FUNC_1(&VAR_17->se_info.se_active_timer, VAR_13 +
  FUNC_2(VAR_12));
 VAR_17->se_info.se_active = 1;


 FUNC_7(&VAR_17->se_info.req_completion);

 VAR_18 = FUNC_4(VAR_14, VAR_1,
   VAR_2,
   &VAR_20);
 if (VAR_18 < 0)
  return VAR_18;

 for (VAR_19 = 0; VAR_19 < VAR_20->len &&
  VAR_20->data[VAR_19] != VAR_15; VAR_19++)
  ;
 VAR_22 = VAR_20->data[VAR_19];
 FUNC_0(VAR_20);

 if (VAR_16 == VAR_11 && VAR_22 == VAR_15)
  return VAR_15;
 else if (VAR_16 == VAR_10 && VAR_22 != VAR_15)
  return VAR_15;

 return -1;
}
