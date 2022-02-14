
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_port_number; } ;
struct tb_switch {struct tb_port* ports; TYPE_1__ config; } ;
struct tb_port {int port; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct tb_port* FUNC_1 (struct tb_switch*,int ) ;
 int FUNC_2 (struct tb_port*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tb_port*) ;
 int FUNC_5 (struct tb_switch*) ;
 scalar_t__ FUNC_6 (struct tb_switch*) ;
 scalar_t__ FUNC_7 (struct tb_switch*) ;

__attribute__((used)) static struct tb_port *FUNC_8(struct tb_switch *VAR_1,
      const struct tb_port *VAR_2)
{





 if (!FUNC_5(VAR_1)) {
  int VAR_3 = FUNC_3(VAR_2->port);
  int VAR_4;





  if (FUNC_6(VAR_1))
   VAR_4 = !VAR_3 ? 6 : 7;
  else if (FUNC_7(VAR_1))
   VAR_4 = !VAR_3 ? 6 : 8;
  else
   goto out;


  if (FUNC_0(VAR_4 > VAR_1->config.max_port_number))
   goto out;
  if (FUNC_0(!FUNC_4(&VAR_1->ports[VAR_4])))
   goto out;
  if (FUNC_0(FUNC_2(&VAR_1->ports[VAR_4])))
   goto out;

  return &VAR_1->ports[VAR_4];
 }

out:
 return FUNC_1(VAR_1, VAR_0);
}
