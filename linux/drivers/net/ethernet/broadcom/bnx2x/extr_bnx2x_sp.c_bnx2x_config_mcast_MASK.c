
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_raw_obj {int (* clear_pending ) (struct bnx2x_raw_obj*) ;int (* set_pending ) (struct bnx2x_raw_obj*) ;scalar_t__ (* check_pending ) (struct bnx2x_raw_obj*) ;} ;
struct bnx2x_mcast_ramrod_params {int ramrod_flags; int mcast_list_len; struct bnx2x_mcast_obj* mcast_obj; } ;
struct bnx2x_mcast_obj {int (* get_registry_size ) (struct bnx2x_mcast_obj*) ;int (* validate ) (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int) ;scalar_t__ total_pending_num; scalar_t__ max_cmd_len; int (* enqueue_cmd ) (struct bnx2x*,struct bnx2x_mcast_obj*,struct bnx2x_mcast_ramrod_params*,int) ;int (* config_mcast ) (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int) ;int (* wait_comp ) (struct bnx2x*,struct bnx2x_mcast_obj*) ;int (* revert ) (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int,int) ;int (* check_sched ) (struct bnx2x_mcast_obj*) ;struct bnx2x_raw_obj raw; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_mcast_cmd { ____Placeholder_bnx2x_mcast_cmd } bnx2x_mcast_cmd ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x_mcast_obj*) ;
 int FUNC_2 (struct bnx2x_raw_obj*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int,int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int) ;
 int FUNC_5 (struct bnx2x_mcast_obj*) ;
 scalar_t__ FUNC_6 (struct bnx2x_raw_obj*) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_mcast_obj*,struct bnx2x_mcast_ramrod_params*,int) ;
 scalar_t__ FUNC_8 (struct bnx2x_raw_obj*) ;
 int FUNC_9 (struct bnx2x_raw_obj*) ;
 int FUNC_10 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int) ;
 int FUNC_11 (struct bnx2x*,struct bnx2x_mcast_obj*) ;
 scalar_t__ FUNC_12 (int ,int *) ;

int FUNC_13(struct bnx2x *VAR_2,
         struct bnx2x_mcast_ramrod_params *VAR_3,
         enum bnx2x_mcast_cmd VAR_4)
{
 struct bnx2x_mcast_obj *VAR_5 = VAR_3->mcast_obj;
 struct bnx2x_raw_obj *VAR_6 = &VAR_5->raw;
 int VAR_7 = 0, VAR_8;




 VAR_8 = VAR_5->get_registry_size(VAR_5);


 VAR_7 = VAR_5->validate(VAR_2, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;


 if ((!VAR_3->mcast_list_len) && (!VAR_5->check_sched(VAR_5)))
  return 0;

 FUNC_0(VAR_0, "o->total_pending_num=%d p->mcast_list_len=%d o->max_cmd_len=%d\n",
    VAR_5->total_pending_num, VAR_3->mcast_list_len, VAR_5->max_cmd_len);




 if (VAR_6->check_pending(VAR_6) ||
     ((VAR_5->max_cmd_len > 0) && (VAR_5->total_pending_num > VAR_5->max_cmd_len))) {
  VAR_7 = VAR_5->enqueue_cmd(VAR_2, VAR_3->mcast_obj, VAR_3, VAR_4);
  if (VAR_7 < 0)
   goto error_exit1;




  VAR_3->mcast_list_len = 0;
 }

 if (!VAR_6->check_pending(VAR_6)) {


  VAR_6->set_pending(VAR_6);


  VAR_7 = VAR_5->config_mcast(VAR_2, VAR_3, VAR_4);
  if (VAR_7 < 0)
   goto error_exit2;


  if (FUNC_12(VAR_1, &VAR_3->ramrod_flags))
   VAR_7 = VAR_5->wait_comp(VAR_2, VAR_5);
 }

 return VAR_7;

error_exit2:
 VAR_6->clear_pending(VAR_6);

error_exit1:
 VAR_5->revert(VAR_2, VAR_3, VAR_8, VAR_4);

 return VAR_7;
}
