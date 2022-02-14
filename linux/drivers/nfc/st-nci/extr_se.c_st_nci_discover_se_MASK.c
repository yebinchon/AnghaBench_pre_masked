
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* se_status; } ;
struct st_nci_info {TYPE_2__ se_info; int flags; } ;
struct nci_dev {int nfc_dev; } ;
struct TYPE_3__ {scalar_t__ is_ese_present; scalar_t__ is_uicc_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct st_nci_info* FUNC_0 (struct nci_dev*) ;
 int FUNC_1 (struct nci_dev*,int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct nci_dev*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct nci_dev *VAR_8)
{
 u8 VAR_9[2];
 int VAR_10, VAR_11 = 0;
 int VAR_12 = 0;
 struct st_nci_info *VAR_13 = FUNC_0(VAR_8);

 FUNC_3("st_nci_discover_se\n");

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10 != 0)
  return VAR_10;

 if (FUNC_5(VAR_6, &VAR_13->flags))
  return 0;

 if (VAR_13->se_info.se_status->is_uicc_present)
  VAR_9[VAR_11++] = VAR_7;
 if (VAR_13->se_info.se_status->is_ese_present)
  VAR_9[VAR_11++] = VAR_5;

 if (VAR_11) {
  VAR_10 = FUNC_1(VAR_8, VAR_0,
          VAR_1,
          VAR_9, VAR_11);
  if (VAR_10 != VAR_2)
   return VAR_10;
 }

 if (VAR_13->se_info.se_status->is_uicc_present) {
  FUNC_2(VAR_8->nfc_dev, VAR_7, VAR_4);
  VAR_12++;
 }

 if (VAR_13->se_info.se_status->is_ese_present) {
  FUNC_2(VAR_8->nfc_dev, VAR_5, VAR_3);
  VAR_12++;
 }

 return !VAR_12;
}
