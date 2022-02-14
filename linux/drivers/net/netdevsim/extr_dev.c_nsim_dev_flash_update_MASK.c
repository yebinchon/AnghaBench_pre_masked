
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_dev {scalar_t__ fw_update_status; } ;
struct netlink_ext_ack {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct devlink*) ;
 int FUNC_2 (struct devlink*,char*,char const*,int,int) ;
 struct nsim_dev* FUNC_3 (struct devlink*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct devlink *VAR_3, const char *VAR_4,
     const char *VAR_5,
     struct netlink_ext_ack *VAR_6)
{
 struct nsim_dev *VAR_7 = FUNC_3(VAR_3);
 int VAR_8;

 if (VAR_7->fw_update_status) {
  FUNC_0(VAR_3);
  FUNC_2(VAR_3,
         "Preparing to flash",
         VAR_5, 0, 0);
 }

 for (VAR_8 = 0; VAR_8 < VAR_2 / VAR_0; VAR_8++) {
  if (VAR_7->fw_update_status)
   FUNC_2(VAR_3, "Flashing",
          VAR_5,
          VAR_8 * VAR_0,
          VAR_2);
  FUNC_4(VAR_1);
 }

 if (VAR_7->fw_update_status) {
  FUNC_2(VAR_3, "Flashing",
         VAR_5,
         VAR_2,
         VAR_2);
  FUNC_2(VAR_3, "Flashing done",
         VAR_5, 0, 0);
  FUNC_1(VAR_3);
 }

 return 0;
}
