
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* hi; void* lo; } ;
struct set_timesync_ramrod_data {TYPE_2__ offset_delta; int drift_adjust_period; int drift_adjust_value; int add_sub_drift_adjust_value; int offset_cmd; int drift_adjust_cmd; } ;
struct bnx2x_func_set_timesync_params {int offset_delta; int drift_adjust_period; int drift_adjust_value; int add_sub_drift_adjust_value; int offset_cmd; int drift_adjust_cmd; } ;
struct TYPE_3__ {struct bnx2x_func_set_timesync_params set_timesync; } ;
struct bnx2x_func_state_params {TYPE_1__ params; struct bnx2x_func_sp_obj* f_obj; } ;
struct bnx2x_func_sp_obj {int rdata_mapping; scalar_t__ rdata; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,void*,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnx2x*,int ,int ,int ,int ,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct set_timesync_ramrod_data*,int ,int) ;

__attribute__((used)) static inline
int FUNC_6(struct bnx2x *VAR_3,
     struct bnx2x_func_state_params *VAR_4)
{
 struct bnx2x_func_sp_obj *VAR_5 = VAR_4->f_obj;
 struct set_timesync_ramrod_data *VAR_6 =
  (struct set_timesync_ramrod_data *)VAR_5->rdata;
 dma_addr_t VAR_7 = VAR_5->rdata_mapping;
 struct bnx2x_func_set_timesync_params *VAR_8 =
  &VAR_4->params.set_timesync;

 FUNC_5(VAR_6, 0, sizeof(*VAR_6));


 VAR_6->drift_adjust_cmd = VAR_8->drift_adjust_cmd;
 VAR_6->offset_cmd = VAR_8->offset_cmd;
 VAR_6->add_sub_drift_adjust_value =
  VAR_8->add_sub_drift_adjust_value;
 VAR_6->drift_adjust_value = VAR_8->drift_adjust_value;
 VAR_6->drift_adjust_period = VAR_8->drift_adjust_period;
 VAR_6->offset_delta.lo =
  FUNC_4(FUNC_2(VAR_8->offset_delta));
 VAR_6->offset_delta.hi =
  FUNC_4(FUNC_1(VAR_8->offset_delta));

 FUNC_0(VAR_0, "Set timesync command params: drift_cmd = %d, offset_cmd = %d, add_sub_drift = %d, drift_val = %d, drift_period = %d, offset_lo = %d, offset_hi = %d\n",
    VAR_6->drift_adjust_cmd, VAR_6->offset_cmd,
    VAR_6->add_sub_drift_adjust_value, VAR_6->drift_adjust_value,
    VAR_6->drift_adjust_period, VAR_6->offset_delta.lo,
    VAR_6->offset_delta.hi);

 return FUNC_3(VAR_3, VAR_2, 0,
        FUNC_1(VAR_7),
        FUNC_2(VAR_7), VAR_1);
}
