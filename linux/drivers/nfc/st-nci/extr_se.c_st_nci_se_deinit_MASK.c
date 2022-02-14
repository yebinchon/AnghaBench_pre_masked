
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bwi_active; int se_active; int se_active_timer; int bwi_timer; } ;
struct st_nci_info {TYPE_1__ se_info; } ;
struct nci_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 struct st_nci_info* FUNC_1 (struct nci_dev*) ;

void FUNC_2(struct nci_dev *VAR_0)
{
 struct st_nci_info *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->se_info.bwi_active)
  FUNC_0(&VAR_1->se_info.bwi_timer);
 if (VAR_1->se_info.se_active)
  FUNC_0(&VAR_1->se_info.se_active_timer);

 VAR_1->se_info.se_active = 0;
 VAR_1->se_info.bwi_active = 0;
}
