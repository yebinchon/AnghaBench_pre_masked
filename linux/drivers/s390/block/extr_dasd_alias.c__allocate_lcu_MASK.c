
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dasd_uid {int ssid; int serial; int vendor; } ;
struct ccw1 {int dummy; } ;
struct TYPE_6__ {int dwork; } ;
struct TYPE_5__ {int worker; } ;
struct TYPE_4__ {int ssid; int serial; int vendor; } ;
struct alias_lcu {int flags; struct alias_lcu* uac; struct alias_lcu* rsu_cqr; struct alias_lcu* cpaddr; int lcu_setup; int lock; TYPE_3__ ruac_data; TYPE_2__ suc_data; int grouplist; int active_devices; int inactive_devices; int lcu; int pav; TYPE_1__ uid; void* data; } ;


 int VAR_0 ;
 struct alias_lcu* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct alias_lcu*) ;
 void* FUNC_6 (int,int) ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *) ;
 int VAR_7 ;

__attribute__((used)) static struct alias_lcu *FUNC_9(struct dasd_uid *VAR_8)
{
 struct alias_lcu *VAR_9;

 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_0);
 VAR_9->uac = FUNC_6(sizeof(*(VAR_9->uac)), VAR_2 | VAR_1);
 if (!VAR_9->uac)
  goto out_err1;
 VAR_9->rsu_cqr = FUNC_6(sizeof(*VAR_9->rsu_cqr), VAR_2 | VAR_1);
 if (!VAR_9->rsu_cqr)
  goto out_err2;
 VAR_9->rsu_cqr->cpaddr = FUNC_6(sizeof(struct ccw1),
           VAR_2 | VAR_1);
 if (!VAR_9->rsu_cqr->cpaddr)
  goto out_err3;
 VAR_9->rsu_cqr->data = FUNC_6(16, VAR_2 | VAR_1);
 if (!VAR_9->rsu_cqr->data)
  goto out_err4;

 FUNC_7(VAR_9->uid.vendor, VAR_8->vendor, sizeof(VAR_8->vendor));
 FUNC_7(VAR_9->uid.serial, VAR_8->serial, sizeof(VAR_8->serial));
 VAR_9->uid.ssid = VAR_8->ssid;
 VAR_9->pav = VAR_4;
 VAR_9->flags = VAR_3 | VAR_5;
 FUNC_2(&VAR_9->lcu);
 FUNC_2(&VAR_9->inactive_devices);
 FUNC_2(&VAR_9->active_devices);
 FUNC_2(&VAR_9->grouplist);
 FUNC_3(&VAR_9->suc_data.worker, VAR_7);
 FUNC_1(&VAR_9->ruac_data.dwork, VAR_6);
 FUNC_8(&VAR_9->lock);
 FUNC_4(&VAR_9->lcu_setup);
 return VAR_9;

out_err4:
 FUNC_5(VAR_9->rsu_cqr->cpaddr);
out_err3:
 FUNC_5(VAR_9->rsu_cqr);
out_err2:
 FUNC_5(VAR_9->uac);
out_err1:
 FUNC_5(VAR_9);
 return FUNC_0(-VAR_0);
}
