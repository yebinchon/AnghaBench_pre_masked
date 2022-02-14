
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_mcast_ramrod_params {scalar_t__ mcast_list_len; struct bnx2x_mcast_obj* mcast_obj; } ;
struct bnx2x_mcast_obj {scalar_t__ max_cmd_len; int total_pending_num; int (* set_registry_size ) (struct bnx2x_mcast_obj*,int) ;} ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_mcast_cmd { ____Placeholder_bnx2x_mcast_cmd } bnx2x_mcast_cmd ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x_mcast_obj*,int) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_1,
          struct bnx2x_mcast_ramrod_params *VAR_2,
      int VAR_3,
      enum bnx2x_mcast_cmd VAR_4)
{
 struct bnx2x_mcast_obj *VAR_5 = VAR_2->mcast_obj;

 VAR_5->set_registry_size(VAR_5, VAR_3);
 VAR_5->total_pending_num -= VAR_2->mcast_list_len;

 if (VAR_4 == VAR_0)
  VAR_5->total_pending_num -= VAR_5->max_cmd_len;
}
