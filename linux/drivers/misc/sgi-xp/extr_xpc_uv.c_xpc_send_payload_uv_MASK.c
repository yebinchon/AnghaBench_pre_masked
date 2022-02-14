
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * xpc_notify_func ;
typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct xpc_send_msg_slot_uv {int * key; int * func; int msg_slot_number; } ;
struct xpc_notify_mq_msghdr_uv {int dummy; } ;
struct TYPE_4__ {size_t size; int msg_slot_number; int ch_number; int partid; } ;
struct xpc_notify_mq_msg_uv {int payload; TYPE_1__ hdr; } ;
struct TYPE_5__ {int cached_notify_gru_mq_desc; } ;
struct TYPE_6__ {TYPE_2__ uv; } ;
struct xpc_channel {size_t entry_size; int flags; int reason; size_t partid; int n_to_notify; TYPE_3__ sn; int number; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int **,int *,int *) ;
 int FUNC_5 (int *,void*,int) ;
 int FUNC_6 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct xpc_channel*,int ,struct xpc_send_msg_slot_uv**) ;
 int FUNC_8 (struct xpc_channel*,struct xpc_send_msg_slot_uv*) ;
 int FUNC_9 (struct xpc_channel*) ;
 int FUNC_10 (struct xpc_channel*) ;
 int * VAR_8 ;
 int FUNC_11 (int ,struct xpc_notify_mq_msg_uv*,size_t) ;

__attribute__((used)) static enum xp_retval
FUNC_12(struct xpc_channel *VAR_9, u32 VAR_10, void *VAR_11,
      u16 VAR_12, u8 VAR_13, xpc_notify_func VAR_14,
      void *VAR_15)
{
 enum xp_retval VAR_16 = VAR_6;
 struct xpc_send_msg_slot_uv *VAR_17 = ((void*)0);
 struct xpc_notify_mq_msg_uv *VAR_18;
 u8 VAR_19[VAR_2];
 size_t VAR_20;

 FUNC_0(VAR_13 != VAR_3);

 VAR_20 = sizeof(struct xpc_notify_mq_msghdr_uv) + VAR_12;
 if (VAR_20 > VAR_9->entry_size)
  return VAR_5;

 FUNC_10(VAR_9);

 if (VAR_9->flags & VAR_1) {
  VAR_16 = VAR_9->reason;
  goto out_1;
 }
 if (!(VAR_9->flags & VAR_0)) {
  VAR_16 = VAR_4;
  goto out_1;
 }

 VAR_16 = FUNC_7(VAR_9, VAR_10, &VAR_17);
 if (VAR_16 != VAR_6)
  goto out_1;

 if (VAR_14 != ((void*)0)) {
  FUNC_3(&VAR_9->n_to_notify);

  VAR_17->key = VAR_15;
  FUNC_6();
  VAR_17->func = VAR_14;

  if (VAR_9->flags & VAR_1) {
   VAR_16 = VAR_9->reason;
   goto out_2;
  }
 }

 VAR_18 = (struct xpc_notify_mq_msg_uv *)&VAR_19;
 VAR_18->hdr.partid = VAR_7;
 VAR_18->hdr.ch_number = VAR_9->number;
 VAR_18->hdr.size = VAR_20;
 VAR_18->hdr.msg_slot_number = VAR_17->msg_slot_number;
 FUNC_5(&VAR_18->payload, VAR_11, VAR_12);

 VAR_16 = FUNC_11(VAR_9->sn.uv.cached_notify_gru_mq_desc, VAR_18,
          VAR_20);
 if (VAR_16 == VAR_6)
  goto out_1;

 FUNC_1(&VAR_8[VAR_9->partid], VAR_16);
out_2:
 if (VAR_14 != ((void*)0)) {
  if (FUNC_4(&VAR_17->func, VAR_14, ((void*)0)) != VAR_14) {
   VAR_16 = VAR_6;
   goto out_1;
  }

  VAR_17->key = ((void*)0);
  FUNC_2(&VAR_9->n_to_notify);
 }
 FUNC_8(VAR_9, VAR_17);
out_1:
 FUNC_9(VAR_9);
 return VAR_16;
}
