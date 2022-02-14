
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dasd_uid {int dummy; } ;
struct dasd_eckd_private {struct alias_lcu* lcu; } ;
struct dasd_device {int alias_list; TYPE_1__* discipline; struct dasd_eckd_private* private; } ;
struct alias_server {int server; int lculist; } ;
struct TYPE_7__ {struct dasd_device* device; int dwork; } ;
struct TYPE_6__ {struct dasd_device* device; int worker; } ;
struct alias_lcu {int lock; int lcu; int inactive_devices; int active_devices; int grouplist; TYPE_3__ ruac_data; TYPE_2__ suc_data; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_5__ {int (* get_uid ) (struct dasd_device*,struct dasd_uid*) ;} ;


 struct alias_server* FUNC_0 (struct dasd_uid*) ;
 int FUNC_1 (struct alias_lcu*) ;
 int FUNC_2 (struct alias_server*) ;
 int FUNC_3 (struct alias_lcu*,int *) ;
 TYPE_4__ VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dasd_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (struct dasd_device*,struct dasd_uid*) ;

void FUNC_15(struct dasd_device *VAR_1)
{
 struct dasd_eckd_private *VAR_2 = VAR_1->private;
 unsigned long VAR_3;
 struct alias_lcu *VAR_4;
 struct alias_server *VAR_5;
 int VAR_6;
 struct dasd_uid VAR_7;

 VAR_4 = VAR_2->lcu;

 if (!VAR_4)
  return;
 VAR_1->discipline->get_uid(VAR_1, &VAR_7);
 FUNC_11(&VAR_4->lock, VAR_3);
 FUNC_8(&VAR_1->alias_list);

 if (VAR_1 == VAR_4->suc_data.device) {
  FUNC_13(&VAR_4->lock, VAR_3);
  FUNC_5(&VAR_4->suc_data.worker);
  FUNC_11(&VAR_4->lock, VAR_3);
  if (VAR_1 == VAR_4->suc_data.device) {
   FUNC_6(VAR_1);
   VAR_4->suc_data.device = ((void*)0);
  }
 }
 VAR_6 = 0;
 if (VAR_1 == VAR_4->ruac_data.device) {
  FUNC_13(&VAR_4->lock, VAR_3);
  VAR_6 = 1;
  FUNC_4(&VAR_4->ruac_data.dwork);
  FUNC_11(&VAR_4->lock, VAR_3);
  if (VAR_1 == VAR_4->ruac_data.device) {
   FUNC_6(VAR_1);
   VAR_4->ruac_data.device = ((void*)0);
  }
 }
 VAR_2->lcu = ((void*)0);
 FUNC_13(&VAR_4->lock, VAR_3);

 FUNC_11(&VAR_0.lock, VAR_3);
 FUNC_10(&VAR_4->lock);
 if (FUNC_9(&VAR_4->grouplist) &&
     FUNC_9(&VAR_4->active_devices) &&
     FUNC_9(&VAR_4->inactive_devices)) {
  FUNC_7(&VAR_4->lcu);
  FUNC_12(&VAR_4->lock);
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
 } else {
  if (VAR_6)
   FUNC_3(VAR_4, ((void*)0));
  FUNC_12(&VAR_4->lock);
 }
 VAR_5 = FUNC_0(&VAR_7);
 if (VAR_5 && FUNC_9(&VAR_5->lculist)) {
  FUNC_7(&VAR_5->server);
  FUNC_2(VAR_5);
 }
 FUNC_13(&VAR_0.lock, VAR_3);
}
