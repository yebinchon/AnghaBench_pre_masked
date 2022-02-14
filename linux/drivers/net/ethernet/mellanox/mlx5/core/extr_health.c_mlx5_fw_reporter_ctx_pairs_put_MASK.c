
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fw_reporter_ctx {int miss_counter; int err_synd; } ;
struct devlink_fmsg {int dummy; } ;


 int FUNC_0 (struct devlink_fmsg*,char*,int ) ;
 int FUNC_1 (struct devlink_fmsg*,char*,int ) ;

__attribute__((used)) static int
FUNC_2(struct devlink_fmsg *VAR_0,
          struct mlx5_fw_reporter_ctx *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, "syndrome",
           VAR_1->err_synd);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_0(VAR_0, "fw_miss_counter",
     VAR_1->miss_counter);
 if (VAR_2)
  return VAR_2;
 return 0;
}
