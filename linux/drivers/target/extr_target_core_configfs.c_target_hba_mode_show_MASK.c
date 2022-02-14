
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_hba {int hba_flags; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 struct se_hba* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1, char *VAR_2)
{
 struct se_hba *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = 0;

 if (VAR_3->hba_flags & VAR_0)
  VAR_4 = 1;

 return FUNC_0(VAR_2, "%d\n", VAR_4);
}
