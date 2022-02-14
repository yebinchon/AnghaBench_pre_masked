
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_lun {int lun_se_dev; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct se_lun*,char const*,size_t) ;
 struct se_lun* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct se_lun *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4 || !VAR_4->lun_se_dev)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_2, VAR_3);
}
