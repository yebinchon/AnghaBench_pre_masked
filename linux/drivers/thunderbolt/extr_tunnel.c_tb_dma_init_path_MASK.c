
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tb_path {unsigned int egress_fc_enable; unsigned int ingress_shared_buffer; int priority; int weight; int clear_fc; int path_length; TYPE_1__* hops; int egress_shared_buffer; int ingress_fc_enable; } ;
struct TYPE_2__ {int initial_credits; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct tb_path *VAR_2, unsigned int VAR_3,
        unsigned int VAR_4, u32 VAR_5)
{
 int VAR_6;

 VAR_2->egress_fc_enable = VAR_4;
 VAR_2->ingress_fc_enable = VAR_0;
 VAR_2->egress_shared_buffer = VAR_1;
 VAR_2->ingress_shared_buffer = VAR_3;
 VAR_2->priority = 5;
 VAR_2->weight = 1;
 VAR_2->clear_fc = 1;

 for (VAR_6 = 0; VAR_6 < VAR_2->path_length; VAR_6++)
  VAR_2->hops[VAR_6].initial_credits = VAR_5;
}
