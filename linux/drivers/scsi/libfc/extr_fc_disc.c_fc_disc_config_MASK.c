
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_disc {void* priv; } ;
struct TYPE_2__ {scalar_t__ disc_recv_req; scalar_t__ disc_stop_final; scalar_t__ disc_stop; scalar_t__ disc_start; } ;
struct fc_lport {struct fc_disc disc; TYPE_1__ tt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_0(struct fc_lport *VAR_4, void *VAR_5)
{
 struct fc_disc *VAR_6;

 if (!VAR_4->tt.disc_start)
  VAR_4->tt.disc_start = VAR_1;

 if (!VAR_4->tt.disc_stop)
  VAR_4->tt.disc_stop = VAR_2;

 if (!VAR_4->tt.disc_stop_final)
  VAR_4->tt.disc_stop_final = VAR_3;

 if (!VAR_4->tt.disc_recv_req)
  VAR_4->tt.disc_recv_req = VAR_0;

 VAR_6 = &VAR_4->disc;

 VAR_6->priv = VAR_5;
}
