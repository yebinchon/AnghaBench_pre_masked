
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int version_str ;
typedef scalar_t__ u32 ;
struct netlink_ext_ack {int dummy; } ;
struct mlx5_core_dev {int board_id; } ;
struct devlink_info_req {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct devlink_info_req*,int ) ;
 int FUNC_1 (struct devlink_info_req*,char*,int ) ;
 int FUNC_2 (struct devlink_info_req*,char*,char*) ;
 int FUNC_3 (struct devlink_info_req*,char*,char*) ;
 struct mlx5_core_dev* FUNC_4 (struct devlink*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct mlx5_core_dev*,scalar_t__*,scalar_t__*) ;
 int FUNC_9 (char*,int,char*,int,int,int) ;

__attribute__((used)) static int
FUNC_10(struct devlink *VAR_2, struct devlink_info_req *VAR_3,
        struct netlink_ext_ack *VAR_4)
{
 struct mlx5_core_dev *VAR_5 = FUNC_4(VAR_2);
 char VAR_6[VAR_0];
 u32 VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_1);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_3, "fw.psid", VAR_5->board_id);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_8(VAR_5, &VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_9(VAR_6, sizeof(VAR_6), "%d.%d.%04d",
   FUNC_5(VAR_7), FUNC_6(VAR_7),
   FUNC_7(VAR_7));
 VAR_9 = FUNC_2(VAR_3, "fw.version", VAR_6);
 if (VAR_9)
  return VAR_9;


 if (VAR_8 == 0)
  VAR_8 = VAR_7;

 FUNC_9(VAR_6, sizeof(VAR_6), "%d.%d.%04d",
   FUNC_5(VAR_8), FUNC_6(VAR_8),
   FUNC_7(VAR_8));
 VAR_9 = FUNC_3(VAR_3, "fw.version", VAR_6);
 if (VAR_9)
  return VAR_9;

 return 0;
}
