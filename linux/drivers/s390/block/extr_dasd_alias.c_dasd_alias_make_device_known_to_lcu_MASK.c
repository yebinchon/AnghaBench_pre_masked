
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_uid {int dummy; } ;
struct dasd_eckd_private {struct alias_server* lcu; } ;
struct dasd_device {int alias_list; TYPE_1__* discipline; struct dasd_eckd_private* private; } ;
struct alias_server {int lock; int inactive_devices; int lculist; int lcu; int server; } ;
struct alias_lcu {int lock; int inactive_devices; int lculist; int lcu; int server; } ;
struct TYPE_4__ {int lock; int serverlist; } ;
struct TYPE_3__ {int (* get_uid ) (struct dasd_device*,struct dasd_uid*) ;} ;


 scalar_t__ FUNC_0 (struct alias_server*) ;
 int FUNC_1 (struct alias_server*) ;
 struct alias_server* FUNC_2 (struct dasd_uid*) ;
 struct alias_server* FUNC_3 (struct dasd_uid*) ;
 struct alias_server* FUNC_4 (struct alias_server*,struct dasd_uid*) ;
 struct alias_server* FUNC_5 (struct dasd_uid*) ;
 int FUNC_6 (struct alias_server*) ;
 int FUNC_7 (struct alias_server*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (struct dasd_device*,struct dasd_uid*) ;

int FUNC_14(struct dasd_device *VAR_1)
{
 struct dasd_eckd_private *VAR_2 = VAR_1->private;
 unsigned long VAR_3;
 struct alias_server *VAR_4, *VAR_5;
 struct alias_lcu *VAR_6, *VAR_7;
 struct dasd_uid VAR_8;

 VAR_1->discipline->get_uid(VAR_1, &VAR_8);
 FUNC_10(&VAR_0.lock, VAR_3);
 VAR_4 = FUNC_5(&VAR_8);
 if (!VAR_4) {
  FUNC_12(&VAR_0.lock, VAR_3);
  VAR_5 = FUNC_3(&VAR_8);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);
  FUNC_10(&VAR_0.lock, VAR_3);
  VAR_4 = FUNC_5(&VAR_8);
  if (!VAR_4) {
   FUNC_8(&VAR_5->server, &VAR_0.serverlist);
   VAR_4 = VAR_5;
  } else {

   FUNC_7(VAR_5);
  }
 }

 VAR_6 = FUNC_4(VAR_4, &VAR_8);
 if (!VAR_6) {
  FUNC_12(&VAR_0.lock, VAR_3);
  VAR_7 = FUNC_2(&VAR_8);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
  FUNC_10(&VAR_0.lock, VAR_3);
  VAR_6 = FUNC_4(VAR_4, &VAR_8);
  if (!VAR_6) {
   FUNC_8(&VAR_7->lcu, &VAR_4->lculist);
   VAR_6 = VAR_7;
  } else {

   FUNC_6(VAR_7);
  }
 }
 FUNC_9(&VAR_6->lock);
 FUNC_8(&VAR_1->alias_list, &VAR_6->inactive_devices);
 VAR_2->lcu = VAR_6;
 FUNC_11(&VAR_6->lock);
 FUNC_12(&VAR_0.lock, VAR_3);

 return 0;
}
