
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp {TYPE_1__* bus_info; } ;
struct mlxsw_core {int dummy; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct mlxsw_sp* FUNC_0 (struct mlxsw_core*) ;
 int FUNC_1 (struct mlxsw_sp*,struct firmware const*,struct netlink_ext_ack*) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,char const*,int ) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_core *VAR_1,
     const char *VAR_2, const char *VAR_3,
     struct netlink_ext_ack *VAR_4)
{
 struct mlxsw_sp *VAR_5 = FUNC_0(VAR_1);
 const struct firmware *VAR_6;
 int VAR_7;

 if (VAR_3)
  return -VAR_0;

 VAR_7 = FUNC_3(&VAR_6, VAR_2,
          VAR_5->bus_info->dev);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_4);
 FUNC_2(VAR_6);

 return VAR_7;
}
