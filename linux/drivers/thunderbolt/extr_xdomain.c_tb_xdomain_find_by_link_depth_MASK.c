
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct tb_xdomain_lookup {void* depth; void* link; } ;
struct tb_xdomain {int dummy; } ;
struct tb {int root_switch; } ;
typedef int lookup ;


 int FUNC_0 (struct tb_xdomain_lookup*,int ,int) ;
 struct tb_xdomain* FUNC_1 (int ,struct tb_xdomain_lookup*) ;
 struct tb_xdomain* FUNC_2 (struct tb_xdomain*) ;

struct tb_xdomain *FUNC_3(struct tb *VAR_0, u8 VAR_1,
       u8 VAR_2)
{
 struct tb_xdomain_lookup VAR_3;
 struct tb_xdomain *VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.link = VAR_1;
 VAR_3.depth = VAR_2;

 VAR_4 = FUNC_1(VAR_0->root_switch, &VAR_3);
 return FUNC_2(VAR_4);
}
