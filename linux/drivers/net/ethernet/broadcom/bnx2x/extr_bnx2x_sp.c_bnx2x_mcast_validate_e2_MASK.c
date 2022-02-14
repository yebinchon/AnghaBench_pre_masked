
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_mcast_ramrod_params {int mcast_list_len; struct bnx2x_mcast_obj* mcast_obj; } ;
struct bnx2x_mcast_obj {int (* get_registry_size ) (struct bnx2x_mcast_obj*) ;int total_pending_num; int max_cmd_len; int (* set_registry_size ) (struct bnx2x_mcast_obj*,int) ;} ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_mcast_cmd { ____Placeholder_bnx2x_mcast_cmd } bnx2x_mcast_cmd ;


 int FUNC_0 (char*,int) ;





 int VAR_0 ;
 int FUNC_1 (struct bnx2x_mcast_obj*) ;
 int FUNC_2 (struct bnx2x_mcast_obj*,int) ;
 int FUNC_3 (struct bnx2x_mcast_obj*,int) ;
 int FUNC_4 (struct bnx2x_mcast_obj*,int) ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_1,
       struct bnx2x_mcast_ramrod_params *VAR_2,
       enum bnx2x_mcast_cmd VAR_3)
{
 struct bnx2x_mcast_obj *VAR_4 = VAR_2->mcast_obj;
 int VAR_5 = VAR_4->get_registry_size(VAR_4);

 switch (VAR_3) {

 case 130:
  VAR_4->set_registry_size(VAR_4, 0);



 case 129:







  VAR_2->mcast_list_len = VAR_5;
  break;

 case 132:
 case 131:




  VAR_4->set_registry_size(VAR_4, VAR_5 + VAR_2->mcast_list_len);
  break;

 case 128:
  VAR_4->set_registry_size(VAR_4, VAR_5 + VAR_2->mcast_list_len);
  VAR_4->total_pending_num += VAR_4->max_cmd_len;
  break;

 default:
  FUNC_0("Unknown command: %d\n", VAR_3);
  return -VAR_0;
 }


 VAR_4->total_pending_num += VAR_2->mcast_list_len;

 return 0;
}
