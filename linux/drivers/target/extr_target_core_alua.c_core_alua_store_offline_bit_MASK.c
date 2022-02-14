
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_lun {int lun_se_dev; } ;
struct se_device {TYPE_2__* se_hba; TYPE_1__* transport; } ;
typedef int ssize_t ;
struct TYPE_4__ {int hba_flags; } ;
struct TYPE_3__ {int transport_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct se_lun*,int ,int) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (char*,...) ;
 struct se_device* FUNC_3 (int ) ;

ssize_t FUNC_4(
 struct se_lun *VAR_4,
 const char *VAR_5,
 size_t VAR_6)
{




 struct se_device *VAR_7 = FUNC_3(VAR_4->lun_se_dev);
 unsigned long VAR_8;
 int VAR_9;

 if (VAR_7->transport->transport_flags & VAR_3 ||
     (VAR_7->se_hba->hba_flags & VAR_2))
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_5, 0, &VAR_8);
 if (VAR_9 < 0) {
  FUNC_2("Unable to extract alua_tg_pt_offline value\n");
  return VAR_9;
 }
 if ((VAR_8 != 0) && (VAR_8 != 1)) {
  FUNC_2("Illegal value for alua_tg_pt_offline: %lu\n",
    VAR_8);
  return -VAR_0;
 }

 VAR_9 = FUNC_0(VAR_4, 0, (int)VAR_8);
 if (VAR_9 < 0)
  return -VAR_0;

 return VAR_6;
}
