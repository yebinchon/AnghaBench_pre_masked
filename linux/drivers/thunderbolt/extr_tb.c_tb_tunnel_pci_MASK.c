
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_tunnel {int list; } ;
struct TYPE_2__ {int parent; } ;
struct tb_switch {TYPE_1__ dev; } ;
struct tb_port {int dummy; } ;
struct tb_cm {int tunnel_list; } ;
struct tb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 struct tb_port* FUNC_1 (struct tb_switch*,struct tb_port*) ;
 struct tb_port* FUNC_2 (struct tb_switch*,int ) ;
 struct tb_port* FUNC_3 (int ,struct tb_switch*) ;
 int FUNC_4 (struct tb_port*,char*) ;
 struct tb_cm* FUNC_5 (struct tb*) ;
 int FUNC_6 (struct tb_switch*) ;
 struct tb_switch* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct tb_tunnel*) ;
 struct tb_tunnel* FUNC_9 (struct tb*,struct tb_port*,struct tb_port*) ;
 int FUNC_10 (struct tb_tunnel*) ;

__attribute__((used)) static int FUNC_11(struct tb *VAR_3, struct tb_switch *VAR_4)
{
 struct tb_port *VAR_5, *VAR_6, *VAR_7;
 struct tb_cm *VAR_8 = FUNC_5(VAR_3);
 struct tb_switch *VAR_9;
 struct tb_tunnel *VAR_10;

 VAR_5 = FUNC_2(VAR_4, VAR_2);
 if (!VAR_5)
  return 0;





 VAR_9 = FUNC_7(VAR_4->dev.parent);
 VAR_7 = FUNC_3(FUNC_6(VAR_4), VAR_9);
 VAR_6 = FUNC_1(VAR_9, VAR_7);
 if (!VAR_6)
  return 0;

 VAR_10 = FUNC_9(VAR_3, VAR_5, VAR_6);
 if (!VAR_10)
  return -VAR_1;

 if (FUNC_8(VAR_10)) {
  FUNC_4(VAR_5,
        "PCIe tunnel activation failed, aborting\n");
  FUNC_10(VAR_10);
  return -VAR_0;
 }

 FUNC_0(&VAR_10->list, &VAR_8->tunnel_list);
 return 0;
}
