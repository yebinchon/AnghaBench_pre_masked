
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_switch_nvm {int buf; int id; scalar_t__ active; scalar_t__ non_active; int authenticating; } ;
struct tb_switch {struct tb_switch_nvm* nvm; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct tb_switch_nvm*) ;
 int FUNC_2 (struct tb_switch*) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct tb_switch *VAR_1)
{
 struct tb_switch_nvm *VAR_2;

 VAR_2 = VAR_1->nvm;
 VAR_1->nvm = ((void*)0);

 if (!VAR_2)
  return;


 if (!VAR_2->authenticating)
  FUNC_2(VAR_1);

 if (VAR_2->non_active)
  FUNC_3(VAR_2->non_active);
 if (VAR_2->active)
  FUNC_3(VAR_2->active);
 FUNC_0(&VAR_0, VAR_2->id);
 FUNC_4(VAR_2->buf);
 FUNC_1(VAR_2);
}
