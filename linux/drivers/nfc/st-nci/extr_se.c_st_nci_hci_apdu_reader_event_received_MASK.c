
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int bwi_active; int wt_timeout; int bwi_timer; int cb_context; int (* cb ) (int ,int ,int ,int ) ;} ;
struct st_nci_info {TYPE_1__ se_info; } ;
struct sk_buff {int len; int data; } ;
struct nci_dev {TYPE_2__* nfc_dev; } ;
struct TYPE_4__ {int dev; } ;




 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 struct st_nci_info* FUNC_4 (struct nci_dev*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct nci_dev *VAR_1,
         u8 VAR_2,
         struct sk_buff *VAR_3)
{
 int VAR_4 = 0;
 struct st_nci_info *VAR_5 = FUNC_4(VAR_1);

 FUNC_6("apdu reader gate event: %x\n", VAR_2);

 switch (VAR_2) {
 case 129:
  FUNC_0(&VAR_5->se_info.bwi_timer);
  VAR_5->se_info.bwi_active = 0;
  VAR_5->se_info.cb(VAR_5->se_info.cb_context,
     VAR_3->data, VAR_3->len, 0);
 break;
 case 128:
  FUNC_2(&VAR_5->se_info.bwi_timer, VAR_0 +
     FUNC_3(VAR_5->se_info.wt_timeout));
 break;
 default:
  FUNC_5(&VAR_1->nfc_dev->dev, "Unexpected event on apdu reader gate\n");
  return 1;
 }

 FUNC_1(VAR_3);
 return VAR_4;
}
