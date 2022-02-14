
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cg_item; } ;
struct se_hba {TYPE_1__ hba_group; } ;
struct TYPE_4__ {int cg_item; } ;
struct se_device {char* dev_alias; TYPE_2__ dev_group; int dev_flags; struct se_hba* se_hba; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 struct se_device* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct se_device *VAR_6 = FUNC_4(VAR_3);
 struct se_hba *VAR_7 = VAR_6->se_hba;
 ssize_t VAR_8;

 if (VAR_5 > (VAR_2-1)) {
  FUNC_2("alias count: %d exceeds"
   " SE_DEV_ALIAS_LEN-1: %u\n", (int)VAR_5,
   VAR_2-1);
  return -VAR_1;
 }

 VAR_8 = FUNC_3(&VAR_6->dev_alias[0], VAR_2, "%s", VAR_4);
 if (!VAR_8)
  return -VAR_1;
 if (VAR_6->dev_alias[VAR_8 - 1] == '\n')
  VAR_6->dev_alias[VAR_8 - 1] = '\0';

 VAR_6->dev_flags |= VAR_0;

 FUNC_1("Target_Core_ConfigFS: %s/%s set alias: %s\n",
  FUNC_0(&VAR_7->hba_group.cg_item),
  FUNC_0(&VAR_6->dev_group.cg_item),
  VAR_6->dev_alias);

 return VAR_8;
}
