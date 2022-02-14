
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_path {int egress_fc_enable; int priority; int weight; TYPE_1__* hops; scalar_t__ nfc_credits; scalar_t__ drop_packages; void* ingress_shared_buffer; int ingress_fc_enable; void* egress_shared_buffer; } ;
struct TYPE_2__ {int initial_credits; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct tb_path *VAR_4)
{
 VAR_4->egress_fc_enable = VAR_3 | VAR_1;
 VAR_4->egress_shared_buffer = VAR_2;
 VAR_4->ingress_fc_enable = VAR_0;
 VAR_4->ingress_shared_buffer = VAR_2;
 VAR_4->priority = 3;
 VAR_4->weight = 1;
 VAR_4->drop_packages = 0;
 VAR_4->nfc_credits = 0;
 VAR_4->hops[0].initial_credits = 7;
 VAR_4->hops[1].initial_credits = 16;
}
