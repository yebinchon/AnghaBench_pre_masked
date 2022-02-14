
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_port {int link_nr; struct tb_port* dual_link_port; int sw; } ;
struct tb_path {size_t path_length; char const* name; struct tb* tb; TYPE_1__* hops; } ;
struct tb {int dummy; } ;
struct TYPE_2__ {int in_hop_index; int in_counter_index; int next_hop_index; struct tb_port* out_port; struct tb_port* in_port; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (size_t,int,int ) ;
 int FUNC_2 (struct tb_path*) ;
 struct tb_path* FUNC_3 (int,int ) ;
 struct tb_port* FUNC_4 (struct tb_port*,struct tb_port*,struct tb_port*) ;
 int FUNC_5 (struct tb_path*) ;
 int FUNC_6 (struct tb_port*,int,int) ;
 int FUNC_7 (struct tb_port*,int,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

struct tb_path *FUNC_10(struct tb *VAR_1, struct tb_port *VAR_2, int VAR_3,
         struct tb_port *VAR_4, int VAR_5, int VAR_6,
         const char *VAR_7)
{
 struct tb_port *VAR_8, *VAR_9;
 int VAR_10, VAR_11;
 struct tb_path *VAR_12;
 size_t VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_0);
 if (!VAR_12)
  return ((void*)0);





 VAR_13 = FUNC_0(FUNC_9(FUNC_8(VAR_2->sw)) -
         FUNC_9(FUNC_8(VAR_4->sw))) + 1;

 VAR_12->hops = FUNC_1(VAR_13, sizeof(*VAR_12->hops), VAR_0);
 if (!VAR_12->hops) {
  FUNC_2(VAR_12);
  return ((void*)0);
 }

 VAR_10 = VAR_3;
 VAR_9 = ((void*)0);

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_8 = FUNC_4(VAR_2, VAR_4, VAR_9);
  if (!VAR_8)
   goto err;

  if (VAR_8->dual_link_port && VAR_8->link_nr != VAR_6)
   VAR_8 = VAR_8->dual_link_port;

  VAR_15 = FUNC_6(VAR_8, VAR_10, VAR_10);
  if (VAR_15 < 0)
   goto err;
  VAR_10 = VAR_15;

  VAR_9 = FUNC_4(VAR_2, VAR_4, VAR_8);
  if (!VAR_9)
   goto err;

  if (VAR_9->dual_link_port && VAR_9->link_nr != VAR_6)
   VAR_9 = VAR_9->dual_link_port;

  if (VAR_14 == VAR_13 - 1)
   VAR_15 = FUNC_7(VAR_9, VAR_5,
            VAR_5);
  else
   VAR_15 = FUNC_7(VAR_9, -1, -1);

  if (VAR_15 < 0)
   goto err;
  VAR_11 = VAR_15;

  VAR_12->hops[VAR_14].in_hop_index = VAR_10;
  VAR_12->hops[VAR_14].in_port = VAR_8;
  VAR_12->hops[VAR_14].in_counter_index = -1;
  VAR_12->hops[VAR_14].out_port = VAR_9;
  VAR_12->hops[VAR_14].next_hop_index = VAR_11;

  VAR_10 = VAR_11;
 }

 VAR_12->tb = VAR_1;
 VAR_12->path_length = VAR_13;
 VAR_12->name = VAR_7;

 return VAR_12;

err:
 FUNC_5(VAR_12);
 return ((void*)0);
}
