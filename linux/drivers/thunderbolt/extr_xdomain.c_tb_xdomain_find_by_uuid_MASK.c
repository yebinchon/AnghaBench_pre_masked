
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct tb_xdomain_lookup {int const* uuid; } ;
struct tb_xdomain {int dummy; } ;
struct tb {int root_switch; } ;
typedef int lookup ;


 int FUNC_0 (struct tb_xdomain_lookup*,int ,int) ;
 struct tb_xdomain* FUNC_1 (int ,struct tb_xdomain_lookup*) ;
 struct tb_xdomain* FUNC_2 (struct tb_xdomain*) ;

struct tb_xdomain *FUNC_3(struct tb *VAR_0, const uuid_t *VAR_1)
{
 struct tb_xdomain_lookup VAR_2;
 struct tb_xdomain *VAR_3;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.uuid = VAR_1;

 VAR_3 = FUNC_1(VAR_0->root_switch, &VAR_2);
 return FUNC_2(VAR_3);
}
