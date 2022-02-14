
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t10_wwn {char* unit_serial; char* vendor; } ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_lun {int lun_se_dev; struct se_portal_group* lun_tpg; } ;
struct se_device {struct t10_wwn t10_wwn; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* (* tpg_get_wwn ) (struct se_portal_group*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_device* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,char*,char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (struct se_portal_group*) ;
 char* FUNC_6 (struct se_portal_group*) ;
 struct se_lun* FUNC_7 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_8(struct config_item *VAR_2,
  char *VAR_3)
{
 struct se_lun *VAR_4 = FUNC_7(VAR_2);
 struct se_device *VAR_5;
 struct se_portal_group *VAR_6 = VAR_4->lun_tpg;
 struct t10_wwn *VAR_7;
 ssize_t VAR_8 = -VAR_0;

 FUNC_1();
 VAR_5 = FUNC_0(VAR_4->lun_se_dev);
 if (VAR_5) {
  VAR_7 = &VAR_5->t10_wwn;

  VAR_8 = FUNC_3(VAR_3, VAR_1, "%s+%s\n",
    VAR_6->se_tpg_tfo->tpg_get_wwn(VAR_6),
    (FUNC_4(VAR_7->unit_serial)) ? VAR_7->unit_serial :
    VAR_7->vendor);
 }
 FUNC_2();
 return VAR_8;
}
