
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tb_path {int priority; int weight; int nfc_credits; void* ingress_shared_buffer; void* ingress_fc_enable; void* egress_shared_buffer; void* egress_fc_enable; TYPE_3__* hops; } ;
struct TYPE_6__ {TYPE_2__* in_port; } ;
struct TYPE_4__ {int nfc_credits; } ;
struct TYPE_5__ {TYPE_1__ config; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct tb_path *VAR_4, bool VAR_5)
{
 u32 VAR_6 = VAR_4->hops[0].in_port->config.nfc_credits;

 VAR_4->egress_fc_enable = VAR_0;
 VAR_4->egress_shared_buffer = VAR_0;
 VAR_4->ingress_fc_enable = VAR_0;
 VAR_4->ingress_shared_buffer = VAR_0;
 VAR_4->priority = 1;
 VAR_4->weight = 1;

 if (VAR_5) {
  VAR_4->nfc_credits = VAR_6 & VAR_3;
 } else {
  u32 VAR_7;

  VAR_7 = (VAR_6 & VAR_1) >>
   VAR_2;

  VAR_4->nfc_credits = FUNC_0(VAR_7 - 2, 12U);
 }
}
