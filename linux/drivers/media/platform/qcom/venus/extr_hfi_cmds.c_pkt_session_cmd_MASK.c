
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int size; int pkt_type; } ;
struct TYPE_4__ {int session_id; TYPE_1__ hdr; } ;
struct hfi_session_pkt {TYPE_2__ shdr; } ;


 int FUNC_0 (void*) ;

void FUNC_1(struct hfi_session_pkt *VAR_0, u32 VAR_1, void *VAR_2)
{
 VAR_0->shdr.hdr.size = sizeof(*VAR_0);
 VAR_0->shdr.hdr.pkt_type = VAR_1;
 VAR_0->shdr.session_id = FUNC_0(VAR_2);
}
