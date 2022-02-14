
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fw_trace_data {int msg; int event_id; int lost; int timestamp; } ;
struct devlink_fmsg {int dummy; } ;


 int FUNC_0 (struct devlink_fmsg*,char*,int ) ;
 int FUNC_1 (struct devlink_fmsg*) ;
 int FUNC_2 (struct devlink_fmsg*) ;
 int FUNC_3 (struct devlink_fmsg*,char*,int ) ;
 int FUNC_4 (struct devlink_fmsg*,char*,int ) ;
 int FUNC_5 (struct devlink_fmsg*,char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct devlink_fmsg *VAR_0,
        struct mlx5_fw_trace_data *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_4(VAR_0, "timestamp", VAR_1->timestamp);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, "lost", VAR_1->lost);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_5(VAR_0, "event_id", VAR_1->event_id);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_0, "msg", VAR_1->msg);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;
 return 0;
}
