
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_part_parser {int list; int * cleanup; struct module* owner; } ;
struct module {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mtd_part_parser *VAR_3, struct module *VAR_4)
{
 VAR_3->owner = VAR_4;

 if (!VAR_3->cleanup)
  VAR_3->cleanup = &VAR_0;

 FUNC_1(&VAR_1);
 FUNC_0(&VAR_3->list, &VAR_2);
 FUNC_2(&VAR_1);

 return 0;
}
