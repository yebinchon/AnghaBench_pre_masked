
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_portal_group {int proto_id; } ;
struct se_lun {int lun_se_dev; struct se_portal_group* lun_tpg; } ;
struct se_device {int dummy; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_device* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,char*,int) ;
 struct se_lun* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_2,
  char *VAR_3)
{
 struct se_lun *VAR_4 = FUNC_4(VAR_2);
 struct se_device *VAR_5;
 struct se_portal_group *VAR_6 = VAR_4->lun_tpg;
 ssize_t VAR_7 = -VAR_0;

 FUNC_1();
 VAR_5 = FUNC_0(VAR_4->lun_se_dev);
 if (VAR_5)
  VAR_7 = FUNC_3(VAR_3, VAR_1, "%u\n", VAR_6->proto_id);
 FUNC_2();
 return VAR_7;
}
