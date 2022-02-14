
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_path {int path_length; TYPE_1__* hops; int clear_fc; } ;
struct TYPE_2__ {int in_hop_index; int in_port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct tb_path *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = VAR_2; VAR_3 < VAR_1->path_length; VAR_3++) {
  VAR_4 = FUNC_0(VAR_1->hops[VAR_3].in_port,
            VAR_1->hops[VAR_3].in_hop_index,
            VAR_1->clear_fc);
  if (VAR_4 && VAR_4 != -VAR_0)
   FUNC_1(VAR_1->hops[VAR_3].in_port,
         "hop deactivation failed for hop %d, index %d\n",
         VAR_3, VAR_1->hops[VAR_3].in_hop_index);
 }
}
