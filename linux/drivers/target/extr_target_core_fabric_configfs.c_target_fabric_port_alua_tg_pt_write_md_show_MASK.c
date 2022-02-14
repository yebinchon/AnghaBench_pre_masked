
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_lun {int lun_se_dev; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct se_lun*,char*) ;
 struct se_lun* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(
  struct config_item *VAR_1, char *VAR_2)
{
 struct se_lun *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_3 || !VAR_3->lun_se_dev)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_2);
}
