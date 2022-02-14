
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct tb_xdomain {int receive_path; int receive_ring; int transmit_path; int transmit_ring; int route; TYPE_1__ dev; } ;
struct tb_tunnel {int list; } ;
struct tb_switch {int dummy; } ;
struct tb_port {int dummy; } ;
struct tb_cm {int tunnel_list; } ;
struct tb {int lock; int root_switch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tb_port* FUNC_3 (int ,int ) ;
 struct tb_port* FUNC_4 (int ,struct tb_switch*) ;
 int FUNC_5 (struct tb_port*,char*) ;
 struct tb_cm* FUNC_6 (struct tb*) ;
 struct tb_switch* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct tb_tunnel*) ;
 struct tb_tunnel* FUNC_9 (struct tb*,struct tb_port*,struct tb_port*,int ,int ,int ,int ) ;
 int FUNC_10 (struct tb_tunnel*) ;

__attribute__((used)) static int FUNC_11(struct tb *VAR_3, struct tb_xdomain *VAR_4)
{
 struct tb_cm *VAR_5 = FUNC_6(VAR_3);
 struct tb_port *VAR_6, *VAR_7;
 struct tb_tunnel *VAR_8;
 struct tb_switch *VAR_9;

 VAR_9 = FUNC_7(VAR_4->dev.parent);
 VAR_7 = FUNC_4(VAR_4->route, VAR_9);
 VAR_6 = FUNC_3(VAR_3->root_switch, VAR_2);

 FUNC_1(&VAR_3->lock);
 VAR_8 = FUNC_9(VAR_3, VAR_6, VAR_7, VAR_4->transmit_ring,
         VAR_4->transmit_path, VAR_4->receive_ring,
         VAR_4->receive_path);
 if (!VAR_8) {
  FUNC_2(&VAR_3->lock);
  return -VAR_1;
 }

 if (FUNC_8(VAR_8)) {
  FUNC_5(VAR_6,
        "DMA tunnel activation failed, aborting\n");
  FUNC_10(VAR_8);
  FUNC_2(&VAR_3->lock);
  return -VAR_0;
 }

 FUNC_0(&VAR_8->list, &VAR_5->tunnel_list);
 FUNC_2(&VAR_3->lock);
 return 0;
}
