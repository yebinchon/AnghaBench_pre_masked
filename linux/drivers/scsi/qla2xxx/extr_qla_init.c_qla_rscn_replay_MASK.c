
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rsvd_1; } ;
struct TYPE_6__ {TYPE_1__ b; } ;
struct event_arg {TYPE_2__ id; } ;
struct TYPE_7__ {int disc_state; int vha; TYPE_2__ d_id; scalar_t__ scan_needed; } ;
typedef TYPE_3__ fc_port_t ;
typedef int ea ;



 int VAR_0 ;
 int FUNC_0 (struct event_arg*,int ,int) ;
 int FUNC_1 (int ,struct event_arg*) ;

void FUNC_2(fc_port_t *VAR_1)
{
 struct event_arg VAR_2;

 switch (VAR_1->disc_state) {
 case 128:
  return;
 default:
  break;
 }

 if (VAR_1->scan_needed) {
  FUNC_0(&VAR_2, 0, sizeof(VAR_2));
  VAR_2.id = VAR_1->d_id;
  VAR_2.id.b.rsvd_1 = VAR_0;
  FUNC_1(VAR_1->vha, &VAR_2);
 }
}
