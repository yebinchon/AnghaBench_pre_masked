
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_hba {int hba_index; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct se_hba* se_hba; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 TYPE_1__* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1, char *VAR_2)
{
 struct se_hba *VAR_3 = FUNC_1(VAR_1)->se_hba;

 return FUNC_0(VAR_2, VAR_0, "%u\n", VAR_3->hba_index);
}
