
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dasd_uid {scalar_t__ type; size_t real_unit_addr; size_t base_unit_addr; int vduit; int ssid; int serial; int vendor; } ;
struct dasd_eckd_private {struct alias_pav_group* pavgroup; struct dasd_uid uid; } ;
struct dasd_device {int alias_list; int cdev; struct dasd_eckd_private* private; } ;
struct TYPE_6__ {size_t base_unit_addr; int vduit; int ssid; int serial; int vendor; } ;
struct alias_pav_group {int aliaslist; int baselist; int group; TYPE_3__ uid; } ;
struct alias_lcu {scalar_t__ pav; int grouplist; int active_devices; TYPE_2__* uac; } ;
struct TYPE_5__ {TYPE_1__* unit; } ;
struct TYPE_4__ {scalar_t__ ua_type; size_t base_ua; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct alias_pav_group* FUNC_1 (struct alias_lcu*,struct dasd_uid*) ;
 int FUNC_2 (int ) ;
 struct alias_pav_group* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct alias_lcu *VAR_4,
         struct dasd_device *VAR_5,
         struct dasd_device *VAR_6)
{

 struct dasd_eckd_private *VAR_7 = VAR_5->private;
 struct alias_pav_group *VAR_8;
 struct dasd_uid VAR_9;

 FUNC_7(FUNC_2(VAR_5->cdev));
 VAR_7->uid.type = VAR_4->uac->unit[VAR_7->uid.real_unit_addr].ua_type;
 VAR_7->uid.base_unit_addr =
  VAR_4->uac->unit[VAR_7->uid.real_unit_addr].base_ua;
 VAR_9 = VAR_7->uid;
 FUNC_8(FUNC_2(VAR_5->cdev));

 if (VAR_4->pav == VAR_2) {
  FUNC_5(&VAR_5->alias_list, &VAR_4->active_devices);
  return 0;
 }
 VAR_8 = FUNC_1(VAR_4, &VAR_9);
 if (!VAR_8) {
  VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
  if (!VAR_8)
   return -VAR_0;
  FUNC_6(VAR_8->uid.vendor, VAR_9.vendor, sizeof(VAR_9.vendor));
  FUNC_6(VAR_8->uid.serial, VAR_9.serial, sizeof(VAR_9.serial));
  VAR_8->uid.ssid = VAR_9.ssid;
  if (VAR_9.type == VAR_3)
   VAR_8->uid.base_unit_addr = VAR_9.real_unit_addr;
  else
   VAR_8->uid.base_unit_addr = VAR_9.base_unit_addr;
  FUNC_6(VAR_8->uid.vduit, VAR_9.vduit, sizeof(VAR_9.vduit));
  FUNC_0(&VAR_8->group);
  FUNC_0(&VAR_8->baselist);
  FUNC_0(&VAR_8->aliaslist);
  FUNC_4(&VAR_8->group, &VAR_4->grouplist);
 }
 if (VAR_9.type == VAR_3)
  FUNC_5(&VAR_5->alias_list, &VAR_8->baselist);
 else
  FUNC_5(&VAR_5->alias_list, &VAR_8->aliaslist);
 VAR_7->pavgroup = VAR_8;
 return 0;
}
