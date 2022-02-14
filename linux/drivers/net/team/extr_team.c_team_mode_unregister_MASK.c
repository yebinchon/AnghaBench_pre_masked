
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_mode_item {int list; } ;
struct team_mode {int kind; } ;


 struct team_mode_item* FUNC_0 (int ) ;
 int FUNC_1 (struct team_mode_item*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(const struct team_mode *VAR_1)
{
 struct team_mode_item *VAR_2;

 FUNC_3(&VAR_0);
 VAR_2 = FUNC_0(VAR_1->kind);
 if (VAR_2) {
  FUNC_2(&VAR_2->list);
  FUNC_1(VAR_2);
 }
 FUNC_4(&VAR_0);
}
