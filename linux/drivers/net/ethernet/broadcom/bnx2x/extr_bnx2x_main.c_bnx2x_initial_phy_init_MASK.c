
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct link_params {scalar_t__* req_line_speed; int* speed_cap_mask; int loopback_mode; } ;
struct TYPE_2__ {scalar_t__ link_up; } ;
struct bnx2x {struct link_params link_params; int period_task; TYPE_1__ link_vars; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct link_params*,TYPE_1__*) ;
 int FUNC_8 (struct bnx2x*) ;
 int FUNC_9 (struct bnx2x*) ;
 int FUNC_10 (struct bnx2x*,int ) ;
 int VAR_11 ;
 int FUNC_11 (int ,int *,int ) ;

int FUNC_12(struct bnx2x *VAR_12, int VAR_13)
{
 int VAR_14, VAR_15 = FUNC_4(VAR_12);
 u16 VAR_16 = VAR_12->link_params.req_line_speed[VAR_15];

 if (!FUNC_1(VAR_12)) {
  FUNC_9(VAR_12);
  FUNC_2(VAR_12);

  if (VAR_13 == VAR_1) {
   struct link_params *VAR_17 = &VAR_12->link_params;
   VAR_17->loopback_mode = VAR_4;

   if (VAR_17->req_line_speed[VAR_15] < VAR_9) {
    if (VAR_17->speed_cap_mask[VAR_15] &
        VAR_6)
     VAR_17->req_line_speed[VAR_15] =
     VAR_9;
    else if (VAR_17->speed_cap_mask[VAR_15] &
         VAR_5)
      VAR_17->req_line_speed[VAR_15] =
      VAR_8;
    else
     VAR_17->req_line_speed[VAR_15] =
     VAR_7;
   }
  }

  if (VAR_13 == VAR_2) {
   struct link_params *VAR_18 = &VAR_12->link_params;
   VAR_18->loopback_mode = VAR_3;
  }

  VAR_14 = FUNC_7(&VAR_12->link_params, &VAR_12->link_vars);

  FUNC_8(VAR_12);

  FUNC_5(VAR_12);

  FUNC_3(VAR_12);

  if (VAR_12->link_vars.link_up) {
   FUNC_10(VAR_12, VAR_10);
   FUNC_6(VAR_12);
  }
  FUNC_11(VAR_11, &VAR_12->period_task, 0);
  VAR_12->link_params.req_line_speed[VAR_15] = VAR_16;
  return VAR_14;
 }
 FUNC_0("Bootcode is missing - can not initialize link\n");
 return -VAR_0;
}
