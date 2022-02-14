
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mac_stx {int dummy; } ;
struct host_port_stats {int * mac_stx; } ;
struct TYPE_2__ {scalar_t__ mac_type; scalar_t__ line_speed; scalar_t__ link_up; } ;
struct bnx2x {scalar_t__ state; TYPE_1__ link_vars; int link_params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (struct bnx2x*) ;
 struct host_port_stats* FUNC_6 (struct bnx2x*,int ) ;
 int FUNC_7 (struct bnx2x*,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_9(struct bnx2x *VAR_5)
{

 FUNC_7(VAR_5, VAR_3);

 FUNC_4(&VAR_5->link_params, &VAR_5->link_vars);

 FUNC_2(VAR_5);

 if (VAR_5->link_vars.link_up) {

  if (VAR_5->link_vars.mac_type != VAR_1) {
   struct host_port_stats *VAR_6;

   VAR_6 = FUNC_6(VAR_5, VAR_4);

   FUNC_8(&(VAR_6->mac_stx[0]), 0,
          sizeof(struct mac_stx));
  }
  if (VAR_5->state == VAR_0)
   FUNC_7(VAR_5, VAR_2);
 }

 if (VAR_5->link_vars.link_up && VAR_5->link_vars.line_speed)
  FUNC_5(VAR_5);

 FUNC_1(VAR_5);

 if (FUNC_0(VAR_5))
  FUNC_3(VAR_5);
}
