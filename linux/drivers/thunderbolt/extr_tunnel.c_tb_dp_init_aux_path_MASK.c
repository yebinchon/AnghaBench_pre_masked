
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_path {int egress_fc_enable; int priority; int weight; int path_length; TYPE_1__* hops; void* ingress_shared_buffer; int ingress_fc_enable; void* egress_shared_buffer; } ;
struct TYPE_2__ {int initial_credits; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct tb_path *VAR_4)
{
 int VAR_5;

 VAR_4->egress_fc_enable = VAR_3 | VAR_1;
 VAR_4->egress_shared_buffer = VAR_2;
 VAR_4->ingress_fc_enable = VAR_0;
 VAR_4->ingress_shared_buffer = VAR_2;
 VAR_4->priority = 2;
 VAR_4->weight = 1;

 for (VAR_5 = 0; VAR_5 < VAR_4->path_length; VAR_5++)
  VAR_4->hops[VAR_5].initial_credits = 1;
}
