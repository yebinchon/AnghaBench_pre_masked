
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_core {TYPE_1__* bus_info; } ;
struct devlink_info_req {int dummy; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int device_kind; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct devlink_info_req*,int ) ;
 int FUNC_2 (struct devlink_info_req*,char*,char*) ;
 int FUNC_3 (struct devlink_info_req*,char*,char*) ;
 struct mlxsw_core* FUNC_4 (struct devlink*) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int*,char*,int*,int*,int*) ;
 int FUNC_7 (struct mlxsw_core*,int ,char*) ;
 int FUNC_8 (char*,char*,int,...) ;

__attribute__((used)) static int
FUNC_9(struct devlink *VAR_3, struct devlink_info_req *VAR_4,
         struct netlink_ext_ack *VAR_5)
{
 struct mlxsw_core *VAR_6 = FUNC_4(VAR_3);
 char VAR_7[VAR_0];
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 char VAR_12[VAR_1];
 char VAR_13[32];
 int VAR_14;

 VAR_14 = FUNC_1(VAR_4,
        VAR_6->bus_info->device_kind);
 if (VAR_14)
  return VAR_14;

 FUNC_5(VAR_12);
 VAR_14 = FUNC_7(VAR_6, FUNC_0(VAR_2), VAR_12);
 if (VAR_14)
  return VAR_14;
 FUNC_6(VAR_12, &VAR_8, VAR_7, &VAR_9,
         &VAR_10, &VAR_11);

 FUNC_8(VAR_13, "%X", VAR_8);
 VAR_14 = FUNC_2(VAR_4, "hw.revision", VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_4, "fw.psid", VAR_7);
 if (VAR_14)
  return VAR_14;

 FUNC_8(VAR_13, "%d.%d.%d", VAR_9, VAR_10, VAR_11);
 VAR_14 = FUNC_3(VAR_4, "fw.version", VAR_13);
 if (VAR_14)
  return VAR_14;

 return 0;
}
