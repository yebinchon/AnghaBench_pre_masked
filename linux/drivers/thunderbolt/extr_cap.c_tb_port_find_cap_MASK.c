
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_port {int dummy; } ;
typedef enum tb_port_cap { ____Placeholder_tb_port_cap } tb_port_cap ;


 int FUNC_0 (struct tb_port*,int) ;
 int FUNC_1 (struct tb_port*) ;
 int FUNC_2 (struct tb_port*,int) ;

int FUNC_3(struct tb_port *VAR_0, enum tb_port_cap VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, 1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0);
 FUNC_2(VAR_0, 0);

 return VAR_2;
}
