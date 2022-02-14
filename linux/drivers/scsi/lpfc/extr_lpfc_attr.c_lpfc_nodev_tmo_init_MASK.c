
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int cfg_devloss_tmo; int cfg_nodev_tmo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lpfc_vport*,int ,int ,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_vport *VAR_6, int VAR_7)
{
 if (VAR_6->cfg_devloss_tmo != VAR_3) {
  VAR_6->cfg_nodev_tmo = VAR_6->cfg_devloss_tmo;
  if (VAR_7 != VAR_3)
   FUNC_0(VAR_6, VAR_1, VAR_2,
      "0407 Ignoring lpfc_nodev_tmo module "
      "parameter because lpfc_devloss_tmo "
      "is set.\n");
  return 0;
 }

 if (VAR_7 >= VAR_5 && VAR_7 <= VAR_4) {
  VAR_6->cfg_nodev_tmo = VAR_7;
  VAR_6->cfg_devloss_tmo = VAR_7;
  return 0;
 }
 FUNC_0(VAR_6, VAR_1, VAR_2,
    "0400 lpfc_nodev_tmo attribute cannot be set to"
    " %d, allowed range is [%d, %d]\n",
    VAR_7, VAR_5, VAR_4);
 VAR_6->cfg_nodev_tmo = VAR_3;
 return -VAR_0;
}
