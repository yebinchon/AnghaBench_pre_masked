
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_hba {int hba_id; TYPE_2__* backend; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {char* name; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,char*,int,char*,char*) ;
 struct se_hba* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1, char *VAR_2)
{
 struct se_hba *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2, "HBA Index: %d plugin: %s version: %s\n",
   VAR_3->hba_id, VAR_3->backend->ops->name,
   VAR_0);
}
