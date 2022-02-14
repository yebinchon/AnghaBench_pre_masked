
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pkt; int pkt_newalloc; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
struct adapter {int dummy; } ;



void FUNC_0(struct adapter *VAR_0, union recv_frame *VAR_1)
{
 VAR_1->u.hdr.pkt_newalloc = *(VAR_1->u.hdr.pkt = ((void*)0));
}
