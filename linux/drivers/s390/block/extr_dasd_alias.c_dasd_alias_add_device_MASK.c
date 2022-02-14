
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t real_unit_addr; scalar_t__ type; } ;
struct dasd_eckd_private {TYPE_1__ uid; struct alias_lcu* lcu; } ;
struct dasd_device {int alias_list; struct dasd_eckd_private* private; } ;
struct alias_lcu {int flags; int lock; int active_devices; TYPE_3__* uac; } ;
typedef size_t __u8 ;
struct TYPE_6__ {TYPE_2__* unit; } ;
struct TYPE_5__ {scalar_t__ ua_type; } ;


 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct alias_lcu*,struct dasd_device*,struct dasd_device*) ;
 int FUNC_2 (struct alias_lcu*,struct dasd_device*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct dasd_device *VAR_2)
{
 struct dasd_eckd_private *VAR_3 = VAR_2->private;
 __u8 VAR_4 = VAR_3->uid.real_unit_addr;
 struct alias_lcu *VAR_5 = VAR_3->lcu;
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = 0;
 FUNC_4(&VAR_5->lock, VAR_6);




 if (VAR_3->uid.type != VAR_5->uac->unit[VAR_4].ua_type) {
  VAR_5->flags |= VAR_1;
  FUNC_0(VAR_0, VAR_2, "%s",
         "uid type mismatch - trigger rescan");
 }
 if (!(VAR_5->flags & VAR_1)) {
  VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_2);
  if (VAR_7)
   VAR_5->flags |= VAR_1;
 }
 if (VAR_5->flags & VAR_1) {
  FUNC_3(&VAR_2->alias_list, &VAR_5->active_devices);
  FUNC_2(VAR_5, VAR_2);
 }
 FUNC_5(&VAR_5->lock, VAR_6);
 return VAR_7;
}
