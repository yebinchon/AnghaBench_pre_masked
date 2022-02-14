
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_switch {int dummy; } ;
struct nvm_auth_status {int status; } ;


 struct nvm_auth_status* FUNC_0 (struct tb_switch const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(const struct tb_switch *VAR_1, u32 *VAR_2)
{
 struct nvm_auth_status *VAR_3;

 FUNC_1(&VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 FUNC_2(&VAR_0);

 *VAR_2 = VAR_3 ? VAR_3->status : 0;
}
