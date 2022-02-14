
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_path_hop {int path_length; struct tb_path_hop* hops; int next_hop_index; scalar_t__ out_port; int in_hop_index; scalar_t__ in_port; } ;
struct tb_path {int path_length; struct tb_path* hops; int next_hop_index; scalar_t__ out_port; int in_hop_index; scalar_t__ in_port; } ;


 int FUNC_0 (struct tb_path_hop*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;

void FUNC_3(struct tb_path *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->path_length; VAR_1++) {
  const struct tb_path_hop *VAR_2 = &VAR_0->hops[VAR_1];

  if (VAR_2->in_port)
   FUNC_1(VAR_2->in_port,
       VAR_2->in_hop_index);
  if (VAR_2->out_port)
   FUNC_2(VAR_2->out_port,
        VAR_2->next_hop_index);
 }

 FUNC_0(VAR_0->hops);
 FUNC_0(VAR_0);
}
