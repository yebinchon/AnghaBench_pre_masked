
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_mcast_ramrod_params {int mcast_list_len; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_mcast_cmd { ____Placeholder_bnx2x_mcast_cmd } bnx2x_mcast_cmd ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct bnx2x *VAR_4,
        struct bnx2x_mcast_ramrod_params *VAR_5,
        enum bnx2x_mcast_cmd VAR_6)
{
 if (VAR_6 == VAR_2) {
  FUNC_0("Can't use `set' command on e1h!\n");
  return -VAR_3;
 }


 if ((VAR_6 == VAR_0) || (VAR_6 == VAR_1))
  VAR_5->mcast_list_len = 1;

 return 0;
}
