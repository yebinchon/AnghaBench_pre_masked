
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_nci_se_status {int dummy; } ;
struct TYPE_2__ {int bwi_active; int se_active; int xch_error; struct st_nci_se_status* se_status; int wt_timeout; int se_active_timer; int bwi_timer; int req_completion; } ;
struct st_nci_info {TYPE_1__ se_info; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct st_nci_info* FUNC_2 (struct nci_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int ) ;

int FUNC_4(struct nci_dev *VAR_3, struct st_nci_se_status *VAR_4)
{
 struct st_nci_info *VAR_5 = FUNC_2(VAR_3);

 FUNC_1(&VAR_5->se_info.req_completion);

 FUNC_3(&VAR_5->se_info.bwi_timer, VAR_2, 0);
 VAR_5->se_info.bwi_active = 0;

 FUNC_3(&VAR_5->se_info.se_active_timer,
      VAR_1, 0);
 VAR_5->se_info.se_active = 0;

 VAR_5->se_info.xch_error = 0;

 VAR_5->se_info.wt_timeout =
  FUNC_0(VAR_0);

 VAR_5->se_info.se_status = VAR_4;

 return 0;
}
