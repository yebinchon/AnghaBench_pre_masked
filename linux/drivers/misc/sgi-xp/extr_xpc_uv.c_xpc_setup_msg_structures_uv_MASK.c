
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_channel_uv {int msg_slot_free_list; int send_msg_slots; int * cached_notify_gru_mq_desc; } ;
struct TYPE_2__ {struct xpc_channel_uv uv; } ;
struct xpc_channel {int flags; TYPE_1__ sn; } ;
struct gru_message_queue_desc {int dummy; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct xpc_channel*) ;
 int FUNC_4 (struct xpc_channel*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static enum xp_retval
FUNC_6(struct xpc_channel *VAR_4)
{
 static enum xp_retval VAR_5;
 struct xpc_channel_uv *VAR_6 = &VAR_4->sn.uv;

 FUNC_0(VAR_4->flags & VAR_1);

 VAR_6->cached_notify_gru_mq_desc = FUNC_2(sizeof(struct
         gru_message_queue_desc),
         VAR_0);
 if (VAR_6->cached_notify_gru_mq_desc == ((void*)0))
  return VAR_2;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 == VAR_3) {

  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5 != VAR_3) {
   FUNC_1(VAR_6->send_msg_slots);
   FUNC_5(&VAR_6->msg_slot_free_list);
  }
 }
 return VAR_5;
}
