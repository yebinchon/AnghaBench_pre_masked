
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_tunnel {int list; } ;
struct TYPE_2__ {int parent; } ;
struct tb_switch {TYPE_1__ dev; } ;
struct tb_port {struct tb_switch* sw; } ;
struct tb_cm {int tunnel_list; } ;
struct tb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 struct tb_port* FUNC_1 (struct tb_switch*,int ) ;
 int FUNC_2 (struct tb_port*,char*) ;
 int FUNC_3 (struct tb_port*,char*) ;
 scalar_t__ FUNC_4 (struct tb_port*) ;
 struct tb_cm* FUNC_5 (struct tb*) ;
 struct tb_switch* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct tb_tunnel*) ;
 struct tb_tunnel* FUNC_8 (struct tb*,struct tb_port*,struct tb_port*) ;
 int FUNC_9 (struct tb_tunnel*) ;

__attribute__((used)) static int FUNC_10(struct tb *VAR_3, struct tb_port *VAR_4)
{
 struct tb_cm *VAR_5 = FUNC_5(VAR_3);
 struct tb_switch *VAR_6 = VAR_4->sw;
 struct tb_tunnel *VAR_7;
 struct tb_port *VAR_8;

 if (FUNC_4(VAR_4))
  return 0;

 do {
  VAR_6 = FUNC_6(VAR_6->dev.parent);
  if (!VAR_6)
   return 0;
  VAR_8 = FUNC_1(VAR_6, VAR_2);
 } while (!VAR_8);

 VAR_7 = FUNC_8(VAR_3, VAR_8, VAR_4);
 if (!VAR_7) {
  FUNC_2(VAR_4, "DP tunnel allocation failed\n");
  return -VAR_1;
 }

 if (FUNC_7(VAR_7)) {
  FUNC_3(VAR_4, "DP tunnel activation failed, aborting\n");
  FUNC_9(VAR_7);
  return -VAR_0;
 }

 FUNC_0(&VAR_7->list, &VAR_5->tunnel_list);
 return 0;
}
