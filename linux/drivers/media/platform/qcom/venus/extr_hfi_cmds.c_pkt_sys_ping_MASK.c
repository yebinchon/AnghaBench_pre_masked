
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; int pkt_type; } ;
struct hfi_sys_ping_pkt {int client_data; TYPE_1__ hdr; } ;


 int VAR_0 ;

void FUNC_0(struct hfi_sys_ping_pkt *VAR_1, u32 VAR_2)
{
 VAR_1->hdr.size = sizeof(*VAR_1);
 VAR_1->hdr.pkt_type = VAR_0;
 VAR_1->client_data = VAR_2;
}
