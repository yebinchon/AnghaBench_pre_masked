
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_mcast_ramrod_params {int mcast_list_len; struct bnx2x_mcast_obj* mcast_obj; } ;
struct bnx2x_mcast_obj {int (* get_registry_size ) (struct bnx2x_mcast_obj*) ;scalar_t__ max_cmd_len; int total_pending_num; int (* set_registry_size ) (struct bnx2x_mcast_obj*,scalar_t__) ;} ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_mcast_cmd { ____Placeholder_bnx2x_mcast_cmd } bnx2x_mcast_cmd ;


 int FUNC_0 (char*,...) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 int VAR_2 ;
 int FUNC_2 (struct bnx2x_mcast_obj*) ;
 int FUNC_3 (struct bnx2x_mcast_obj*,scalar_t__) ;
 int FUNC_4 (struct bnx2x_mcast_obj*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_3,
       struct bnx2x_mcast_ramrod_params *VAR_4,
       enum bnx2x_mcast_cmd VAR_5)
{
 struct bnx2x_mcast_obj *VAR_6 = VAR_4->mcast_obj;
 int VAR_7 = VAR_6->get_registry_size(VAR_6);

 if (VAR_5 == VAR_0) {
  FUNC_0("Can't use `set' command on e1!\n");
  return -VAR_2;
 }

 switch (VAR_5) {

 case 129:
  VAR_6->set_registry_size(VAR_6, 0);



 case 128:
  VAR_4->mcast_list_len = VAR_7;
  FUNC_1(VAR_1, "Command %d, p->mcast_list_len=%d\n",
     VAR_5, VAR_4->mcast_list_len);
  break;

 case 131:
 case 130:




  if (VAR_4->mcast_list_len > VAR_6->max_cmd_len) {
   FUNC_0("Can't configure more than %d multicast MACs on 57710\n",
      VAR_6->max_cmd_len);
   return -VAR_2;
  }




  FUNC_1(VAR_1, "p->mcast_list_len=%d\n", VAR_4->mcast_list_len);
  if (VAR_4->mcast_list_len > 0)
   VAR_6->set_registry_size(VAR_6, VAR_4->mcast_list_len);

  break;

 default:
  FUNC_0("Unknown command: %d\n", VAR_5);
  return -VAR_2;
 }




 if (VAR_4->mcast_list_len)
  VAR_6->total_pending_num += VAR_6->max_cmd_len;

 return 0;
}
