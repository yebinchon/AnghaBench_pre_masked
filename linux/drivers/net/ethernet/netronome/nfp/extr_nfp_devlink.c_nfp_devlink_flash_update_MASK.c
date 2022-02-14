
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink*) ;
 int FUNC_1 (int ,char const*,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_2(struct devlink *VAR_1, const char *VAR_2,
    const char *VAR_3, struct netlink_ext_ack *VAR_4)
{
 if (VAR_3)
  return -VAR_0;
 return FUNC_1(FUNC_0(VAR_1), VAR_2, VAR_4);
}
