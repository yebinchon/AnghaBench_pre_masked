
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_switch {int dummy; } ;
struct nvm_auth_status {int list; } ;


 struct nvm_auth_status* FUNC_0 (struct tb_switch const*) ;
 int FUNC_1 (struct nvm_auth_status*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(const struct tb_switch *VAR_1)
{
 struct nvm_auth_status *VAR_2;

 FUNC_3(&VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  FUNC_2(&VAR_2->list);
  FUNC_1(VAR_2);
 }
 FUNC_4(&VAR_0);
}
