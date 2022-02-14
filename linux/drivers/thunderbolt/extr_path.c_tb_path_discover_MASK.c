
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_switch {struct tb_port* ports; int tb; } ;
struct tb_regs_hop {size_t out_port; int next_hop; int enable; } ;
struct tb_port {struct tb_port* remote; struct tb_switch* sw; } ;
struct tb_path {char const* name; size_t path_length; int activated; TYPE_1__* hops; int tb; } ;
struct TYPE_2__ {int in_hop_index; int in_counter_index; int next_hop_index; struct tb_port* out_port; struct tb_port* in_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (size_t,int,int ) ;
 int FUNC_1 (struct tb_path*) ;
 struct tb_path* FUNC_2 (int,int ) ;
 int FUNC_3 (struct tb_port*,struct tb_port*,int) ;
 int FUNC_4 (struct tb_path*) ;
 scalar_t__ FUNC_5 (struct tb_port*,int,int) ;
 scalar_t__ FUNC_6 (struct tb_port*,int,int) ;
 int FUNC_7 (struct tb_port*,struct tb_regs_hop*,int ,int,int) ;
 int FUNC_8 (struct tb_port*,int) ;
 int FUNC_9 (struct tb_port*,char*,int) ;

struct tb_path *FUNC_10(struct tb_port *VAR_3, int VAR_4,
     struct tb_port *VAR_5, int VAR_6,
     struct tb_port **VAR_7, const char *VAR_8)
{
 struct tb_port *VAR_9;
 struct tb_regs_hop VAR_10;
 struct tb_path *VAR_11;
 struct tb_switch *VAR_12;
 struct tb_port *VAR_13;
 size_t VAR_14;
 int VAR_15, VAR_16, VAR_17;

 if (VAR_4 < 0 && VAR_5) {







  VAR_4 = FUNC_3(VAR_3, VAR_5, VAR_6);
  if (!VAR_4)
   return ((void*)0);
 }

 VAR_13 = VAR_3;
 VAR_17 = VAR_4;
 VAR_14 = 0;

 for (VAR_16 = 0; VAR_13 && VAR_16 < VAR_2; VAR_16++) {
  VAR_12 = VAR_13->sw;

  VAR_15 = FUNC_7(VAR_13, &VAR_10, VAR_1, 2 * VAR_17, 2);
  if (VAR_15) {
   FUNC_9(VAR_13, "failed to read path at %d\n", VAR_17);
   return ((void*)0);
  }


  if (!VAR_10.enable)
   break;

  VAR_9 = &VAR_12->ports[VAR_10.out_port];
  if (VAR_7)
   *VAR_7 = VAR_9;

  VAR_17 = VAR_10.next_hop;
  VAR_13 = VAR_9->remote;
  VAR_14++;
 }

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_0);
 if (!VAR_11)
  return ((void*)0);

 VAR_11->name = VAR_8;
 VAR_11->tb = VAR_3->sw->tb;
 VAR_11->path_length = VAR_14;
 VAR_11->activated = 1;

 VAR_11->hops = FUNC_0(VAR_14, sizeof(*VAR_11->hops), VAR_0);
 if (!VAR_11->hops) {
  FUNC_1(VAR_11);
  return ((void*)0);
 }

 VAR_13 = VAR_3;
 VAR_17 = VAR_4;

 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  int VAR_18;

  VAR_12 = VAR_13->sw;

  VAR_15 = FUNC_7(VAR_13, &VAR_10, VAR_1, 2 * VAR_17, 2);
  if (VAR_15) {
   FUNC_9(VAR_13, "failed to read path at %d\n", VAR_17);
   goto err;
  }

  if (FUNC_5(VAR_13, VAR_17, VAR_17) < 0)
   goto err;

  VAR_9 = &VAR_12->ports[VAR_10.out_port];
  VAR_18 = VAR_10.next_hop;

  if (FUNC_6(VAR_9, VAR_18, VAR_18) < 0) {
   FUNC_8(VAR_13, VAR_17);
   goto err;
  }

  VAR_11->hops[VAR_16].in_port = VAR_13;
  VAR_11->hops[VAR_16].in_hop_index = VAR_17;
  VAR_11->hops[VAR_16].in_counter_index = -1;
  VAR_11->hops[VAR_16].out_port = VAR_9;
  VAR_11->hops[VAR_16].next_hop_index = VAR_18;

  VAR_17 = VAR_18;
  VAR_13 = VAR_9->remote;
 }

 return VAR_11;

err:
 FUNC_9(VAR_3, "failed to discover path starting at HopID %d\n",
       VAR_4);
 FUNC_4(VAR_11);
 return ((void*)0);
}
