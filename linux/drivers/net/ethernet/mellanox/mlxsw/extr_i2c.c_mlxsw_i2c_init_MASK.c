
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_res {int dummy; } ;
struct TYPE_3__ {int subminor; int minor; int major; } ;
struct TYPE_4__ {TYPE_1__ fw_rev; } ;
struct mlxsw_i2c {TYPE_2__ bus_info; struct mlxsw_core* core; } ;
struct mlxsw_core {int dummy; } ;
struct mlxsw_config_profile {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct mlxsw_core*,char*) ;
 int FUNC_6 (struct mlxsw_core*,char*,struct mlxsw_res*) ;

__attribute__((used)) static int
FUNC_7(void *VAR_1, struct mlxsw_core *VAR_2,
        const struct mlxsw_config_profile *VAR_3,
        struct mlxsw_res *VAR_4)
{
 struct mlxsw_i2c *VAR_5 = VAR_1;
 char *VAR_6;
 int VAR_7;

 VAR_5->core = VAR_2;

 VAR_6 = FUNC_0();
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_2, VAR_6);
 if (VAR_7)
  goto mbox_put;

 VAR_5->bus_info.fw_rev.major =
  FUNC_2(VAR_6);
 VAR_5->bus_info.fw_rev.minor =
  FUNC_3(VAR_6);
 VAR_5->bus_info.fw_rev.subminor =
  FUNC_4(VAR_6);

 VAR_7 = FUNC_6(VAR_2, VAR_6, VAR_4);

mbox_put:
 FUNC_1(VAR_6);
 return VAR_7;
}
