
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tb_port*,char*,int) ;
 int FUNC_1 (struct tb_port*,int *,int ,int,int) ;

int FUNC_2(struct tb_port *VAR_1, int VAR_2)
{
 u32 VAR_3[3] = { 0, 0, 0 };
 FUNC_0(VAR_1, "clearing counter %d\n", VAR_2);
 return FUNC_1(VAR_1, VAR_3, VAR_0, 3 * VAR_2, 3);
}
