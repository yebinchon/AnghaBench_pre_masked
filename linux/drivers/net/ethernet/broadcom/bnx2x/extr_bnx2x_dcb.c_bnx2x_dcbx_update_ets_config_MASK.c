
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
struct bnx2x_ets_params {size_t num_of_cos; TYPE_5__* cos; int member_0; } ;
struct bnx2x_dcbx_pg_params {size_t num_of_cos; TYPE_6__* cos_params; } ;
struct TYPE_7__ {struct bnx2x_dcbx_pg_params ets; } ;
struct bnx2x {int link_vars; int link_params; TYPE_1__ dcbx_port_params; } ;
struct TYPE_12__ {scalar_t__ strict; scalar_t__ bw_tbl; } ;
struct TYPE_9__ {size_t bw; } ;
struct TYPE_8__ {scalar_t__ pri; } ;
struct TYPE_10__ {TYPE_3__ bw_params; TYPE_2__ sp_params; } ;
struct TYPE_11__ {TYPE_4__ params; int state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *,struct bnx2x_ets_params*) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_4)
{
 struct bnx2x_dcbx_pg_params *VAR_5 = &(VAR_4->dcbx_port_params.ets);
 struct bnx2x_ets_params VAR_6 = { 0 };
 u8 VAR_7;

 VAR_6.num_of_cos = VAR_5->num_of_cos;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_of_cos; VAR_7++) {

  if (VAR_5->cos_params[VAR_7].strict != VAR_0) {
   if (VAR_5->cos_params[VAR_7].bw_tbl != VAR_1) {
    FUNC_0("COS can't be not BW and not SP\n");
    return;
   }

   VAR_6.cos[VAR_7].state = VAR_3;
   VAR_6.cos[VAR_7].params.sp_params.pri =
      VAR_5->cos_params[VAR_7].strict;
  } else {
   if (VAR_5->cos_params[VAR_7].bw_tbl == VAR_1) {
    FUNC_0("COS can't be not BW and not SP\n");
    return;
   }
   VAR_6.cos[VAR_7].state = VAR_2;
   VAR_6.cos[VAR_7].params.bw_params.bw =
      (u8)VAR_5->cos_params[VAR_7].bw_tbl;
  }
 }


 if (FUNC_2(&VAR_4->link_params, &VAR_4->link_vars,
      &VAR_6)) {
  FUNC_0("bnx2x_ets_e3b0_config failed\n");
  FUNC_1(&VAR_4->link_params, &VAR_4->link_vars);
 }
}
