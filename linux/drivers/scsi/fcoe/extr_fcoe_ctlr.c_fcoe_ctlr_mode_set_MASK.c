
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcoe_rport {int dummy; } ;
struct fcoe_ctlr {int dummy; } ;
struct TYPE_2__ {int * disc_stop_final; int * disc_stop; int * disc_start; int * disc_recv_req; } ;
struct fc_lport {scalar_t__ state; int rport_priv_size; int point_to_multipoint; TYPE_1__ tt; } ;
typedef enum fip_mode { ____Placeholder_fip_mode } fip_mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fc_lport*,void*) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_2(struct fc_lport *VAR_7, struct fcoe_ctlr *VAR_8,
          enum fip_mode VAR_9)
{
 void *VAR_10;

 FUNC_0(VAR_7->state != VAR_2 &&
  VAR_7->state != VAR_1);

 if (VAR_9 == VAR_0) {
  VAR_7->rport_priv_size = sizeof(struct fcoe_rport);
  VAR_7->point_to_multipoint = 1;
  VAR_7->tt.disc_recv_req = VAR_3;
  VAR_7->tt.disc_start = VAR_4;
  VAR_7->tt.disc_stop = VAR_5;
  VAR_7->tt.disc_stop_final = VAR_6;
  VAR_10 = VAR_8;
 } else {
  VAR_7->rport_priv_size = 0;
  VAR_7->point_to_multipoint = 0;
  VAR_7->tt.disc_recv_req = ((void*)0);
  VAR_7->tt.disc_start = ((void*)0);
  VAR_7->tt.disc_stop = ((void*)0);
  VAR_7->tt.disc_stop_final = ((void*)0);
  VAR_10 = VAR_7;
 }

 FUNC_1(VAR_7, VAR_10);
}
