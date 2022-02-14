
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pkt; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
struct recv_priv {scalar_t__ precv_frame_buf; } ;
typedef scalar_t__ sint ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct recv_priv *VAR_1)
{
 sint VAR_2;
 union recv_frame *VAR_3;

 VAR_3 = (union recv_frame*) VAR_1->precv_frame_buf;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_3->u.hdr.pkt) {
   FUNC_0(VAR_3->u.hdr.pkt);
   VAR_3->u.hdr.pkt = ((void*)0);
  }
  VAR_3++;
 }
}
