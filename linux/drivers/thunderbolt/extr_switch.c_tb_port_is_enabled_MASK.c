
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct tb_port {TYPE_1__ config; } ;






 int FUNC_0 (struct tb_port*) ;
 int FUNC_1 (struct tb_port*) ;

bool FUNC_2(struct tb_port *VAR_0)
{
 switch (VAR_0->config.type) {
 case 128:
 case 129:
  return FUNC_1(VAR_0);

 case 131:
 case 130:
  return FUNC_0(VAR_0);

 default:
  return 0;
 }
}
