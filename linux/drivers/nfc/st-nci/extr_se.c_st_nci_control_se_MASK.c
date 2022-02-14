
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int se_active; TYPE_2__* se_status; int req_completion; int se_active_timer; } ;
struct st_nci_info {TYPE_3__ se_info; } ;
struct sk_buff {int len; scalar_t__* data; } ;
struct nci_dev {TYPE_1__* hci_dev; } ;
struct TYPE_5__ {scalar_t__ is_uicc_present; scalar_t__ is_ese_present; } ;
struct TYPE_4__ {int expected_pipes; int count_pipes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

 scalar_t__ VAR_10 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 struct st_nci_info* FUNC_3 (struct nci_dev*) ;
 int FUNC_4 (struct nci_dev*,int ,int ,struct sk_buff**) ;
 int FUNC_5 (struct nci_dev*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct nci_dev *VAR_11, u8 VAR_12,
        u8 VAR_13)
{
 struct st_nci_info *VAR_14 = FUNC_3(VAR_11);
 int VAR_15, VAR_16;
 struct sk_buff *VAR_17;
 u8 VAR_18;

 switch (VAR_12) {
 case 128:
  VAR_11->hci_dev->count_pipes = 0;
  VAR_11->hci_dev->expected_pipes = VAR_6;
  break;
 case 129:
  VAR_11->hci_dev->count_pipes = 0;
  VAR_11->hci_dev->expected_pipes = VAR_5;
  break;
 default:
  return -VAR_0;
 }





 FUNC_6(&VAR_14->se_info.req_completion);
 VAR_15 = FUNC_5(VAR_11, VAR_12, VAR_13);
 if (VAR_15 != VAR_4)
  return VAR_15;

 FUNC_1(&VAR_14->se_info.se_active_timer, VAR_10 +
  FUNC_2(VAR_9));
 VAR_14->se_info.se_active = 1;


 FUNC_8(&VAR_14->se_info.req_completion);






 if (VAR_14->se_info.se_status->is_ese_present &&
     VAR_14->se_info.se_status->is_uicc_present)
  FUNC_7(15000, 20000);

 VAR_15 = FUNC_4(VAR_11, VAR_1,
   VAR_2, &VAR_17);
 if (VAR_15 != VAR_3)
  return VAR_15;

 for (VAR_16 = 0; VAR_16 < VAR_17->len &&
  VAR_17->data[VAR_16] != VAR_12; VAR_16++)
  ;
 VAR_18 = VAR_17->data[VAR_16];
 FUNC_0(VAR_17);
 if (VAR_13 == VAR_8 && VAR_18 == VAR_12)
  return VAR_12;
 else if (VAR_13 == VAR_7 && VAR_18 != VAR_12)
  return VAR_12;

 return -1;
}
