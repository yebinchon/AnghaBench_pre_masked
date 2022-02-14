
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_tunnel {int dst_port; int src_port; struct tb_path** paths; } ;
struct tb_path {int path_length; TYPE_1__* hops; } ;
struct TYPE_2__ {int next_hop_index; int in_hop_index; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct tb_tunnel *VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_4) {
  struct tb_path **VAR_6;
  int VAR_7;

  VAR_6 = VAR_3->paths;
  VAR_7 = VAR_6[VAR_2]->path_length - 1;

  FUNC_2(VAR_3->src_port,
   VAR_6[VAR_2]->hops[0].in_hop_index,
   VAR_6[VAR_1]->hops[0].in_hop_index,
   VAR_6[VAR_0]->hops[VAR_7].next_hop_index);

  FUNC_2(VAR_3->dst_port,
   VAR_6[VAR_2]->hops[VAR_7].next_hop_index,
   VAR_6[VAR_0]->hops[0].in_hop_index,
   VAR_6[VAR_1]->hops[VAR_7].next_hop_index);
 } else {
  FUNC_1(VAR_3->src_port);
  FUNC_2(VAR_3->src_port, 0, 0, 0);
  if (FUNC_3(VAR_3->dst_port))
   FUNC_2(VAR_3->dst_port, 0, 0, 0);
 }

 VAR_5 = FUNC_0(VAR_3->src_port, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (FUNC_3(VAR_3->dst_port))
  return FUNC_0(VAR_3->dst_port, VAR_4);

 return 0;
}
