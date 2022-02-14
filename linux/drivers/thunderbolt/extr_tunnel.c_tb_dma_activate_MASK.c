
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_tunnel {struct tb_port* src_port; } ;
struct tb_port {int dummy; } ;


 int FUNC_0 (struct tb_port*) ;
 int FUNC_1 (struct tb_port*,int ) ;

__attribute__((used)) static int FUNC_2(struct tb_tunnel *VAR_0, bool VAR_1)
{
 struct tb_port *VAR_2 = VAR_0->src_port;
 u32 VAR_3;

 VAR_3 = VAR_1 ? FUNC_0(VAR_2) : 0;
 return FUNC_1(VAR_2, VAR_3);
}
