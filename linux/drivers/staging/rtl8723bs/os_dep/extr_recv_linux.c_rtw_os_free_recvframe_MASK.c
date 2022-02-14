
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pkt; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;


 int FUNC_0 (int *) ;

void FUNC_1(union recv_frame *VAR_0)
{
 if (VAR_0->u.hdr.pkt) {
  FUNC_0(VAR_0->u.hdr.pkt);

  VAR_0->u.hdr.pkt = ((void*)0);
 }
}
