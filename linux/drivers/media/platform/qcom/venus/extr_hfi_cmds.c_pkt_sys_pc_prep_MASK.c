
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int pkt_type; } ;
struct hfi_sys_pc_prep_pkt {TYPE_1__ hdr; } ;


 int VAR_0 ;

void FUNC_0(struct hfi_sys_pc_prep_pkt *VAR_1)
{
 VAR_1->hdr.size = sizeof(*VAR_1);
 VAR_1->hdr.pkt_type = VAR_0;
}
