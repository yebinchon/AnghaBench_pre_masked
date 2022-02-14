
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tb_regs_hop {int enable; int counter; int counter_enable; int ingress_fc; int egress_fc; int ingress_shared_buffer; int egress_shared_buffer; scalar_t__ unknown3; int drop_packages; int priority; scalar_t__ unknown2; int weight; scalar_t__ unknown1; int initial_credits; int out_port; int next_hop; int member_0; } ;
struct tb_path {int activated; int path_length; int ingress_fc_enable; int egress_fc_enable; int ingress_shared_buffer; int egress_shared_buffer; int tb; TYPE_6__* hops; int drop_packages; int priority; int weight; int clear_fc; int nfc_credits; int name; } ;
typedef enum tb_path_port { ____Placeholder_tb_path_port } tb_path_port ;
struct TYPE_10__ {int in_counter_index; int in_hop_index; TYPE_2__* in_port; int initial_credits; TYPE_1__* out_port; int next_hop_index; } ;
struct TYPE_9__ {int port; int sw; } ;
struct TYPE_8__ {int port; int sw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (struct tb_path*,int) ;
 int FUNC_2 (struct tb_path*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (TYPE_6__*,struct tb_regs_hop*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,char*,int) ;
 int FUNC_9 (TYPE_2__*,struct tb_regs_hop*,int ,int,int) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct tb_path *VAR_5)
{
 int VAR_6, VAR_7;
 enum tb_path_port VAR_8, VAR_9;
 if (VAR_5->activated) {
  FUNC_3(VAR_5->tb, "trying to activate already activated path\n");
  return -VAR_0;
 }

 FUNC_4(VAR_5->tb,
        "activating %s path from %llx:%x to %llx:%x\n",
        VAR_5->name, FUNC_10(VAR_5->hops[0].in_port->sw),
        VAR_5->hops[0].in_port->port,
        FUNC_10(VAR_5->hops[VAR_5->path_length - 1].out_port->sw),
        VAR_5->hops[VAR_5->path_length - 1].out_port->port);


 for (VAR_6 = VAR_5->path_length - 1; VAR_6 >= 0; VAR_6--) {
  if (VAR_5->hops[VAR_6].in_counter_index == -1)
   continue;
  VAR_7 = FUNC_7(VAR_5->hops[VAR_6].in_port,
         VAR_5->hops[VAR_6].in_counter_index);
  if (VAR_7)
   goto err;
 }


 for (VAR_6 = VAR_5->path_length - 1; VAR_6 >= 0; VAR_6--) {
  VAR_7 = FUNC_6(VAR_5->hops[VAR_6].in_port,
           VAR_5->nfc_credits);
  if (VAR_7) {
   FUNC_2(VAR_5, VAR_6);
   goto err;
  }
 }


 for (VAR_6 = VAR_5->path_length - 1; VAR_6 >= 0; VAR_6--) {
  struct tb_regs_hop VAR_10 = { 0 };


  FUNC_0(VAR_5->hops[VAR_6].in_port,
    VAR_5->hops[VAR_6].in_hop_index, VAR_5->clear_fc);


  VAR_10.next_hop = VAR_5->hops[VAR_6].next_hop_index;
  VAR_10.out_port = VAR_5->hops[VAR_6].out_port->port;
  VAR_10.initial_credits = VAR_5->hops[VAR_6].initial_credits;
  VAR_10.unknown1 = 0;
  VAR_10.enable = 1;


  VAR_8 = (VAR_6 == VAR_5->path_length - 1) ?
    VAR_2 : VAR_3;
  VAR_9 = (VAR_6 == 0) ? VAR_4 : VAR_3;
  VAR_10.weight = VAR_5->weight;
  VAR_10.unknown2 = 0;
  VAR_10.priority = VAR_5->priority;
  VAR_10.drop_packages = VAR_5->drop_packages;
  VAR_10.counter = VAR_5->hops[VAR_6].in_counter_index;
  VAR_10.counter_enable = VAR_5->hops[VAR_6].in_counter_index != -1;
  VAR_10.ingress_fc = VAR_5->ingress_fc_enable & VAR_9;
  VAR_10.egress_fc = VAR_5->egress_fc_enable & VAR_8;
  VAR_10.ingress_shared_buffer = VAR_5->ingress_shared_buffer
         & VAR_9;
  VAR_10.egress_shared_buffer = VAR_5->egress_shared_buffer
         & VAR_8;
  VAR_10.unknown3 = 0;

  FUNC_8(VAR_5->hops[VAR_6].in_port, "Writing hop %d\n", VAR_6);
  FUNC_5(&VAR_5->hops[VAR_6], &VAR_10);
  VAR_7 = FUNC_9(VAR_5->hops[VAR_6].in_port, &VAR_10, VAR_1,
        2 * VAR_5->hops[VAR_6].in_hop_index, 2);
  if (VAR_7) {
   FUNC_1(VAR_5, VAR_6);
   FUNC_2(VAR_5, 0);
   goto err;
  }
 }
 VAR_5->activated = 1;
 FUNC_4(VAR_5->tb, "path activation complete\n");
 return 0;
err:
 FUNC_3(VAR_5->tb, "path activation failed\n");
 return VAR_7;
}
