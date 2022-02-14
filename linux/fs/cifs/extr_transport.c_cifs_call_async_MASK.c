
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {int dummy; } ;
struct mid_q_entry {int credits; int qhead; int mid_state; int * handle; void* callback_data; int * callback; int * receive; } ;
struct cifs_credits {int value; unsigned int instance; } ;
struct TCP_Server_Info {unsigned int reconnect_instance; int sequence_number; int srv_mutex; int pending_mid_q; TYPE_1__* ops; } ;
typedef int mid_receive_t ;
typedef int mid_handle_t ;
typedef int mid_callback_t ;
struct TYPE_2__ {struct mid_q_entry* (* setup_async_request ) (struct TCP_Server_Info*,struct smb_rqst*) ;} ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mid_q_entry*) ;
 int VAR_4 ;
 int FUNC_1 (struct mid_q_entry*) ;
 int FUNC_2 (struct TCP_Server_Info*,struct cifs_credits*,int) ;
 int FUNC_3 (struct mid_q_entry*) ;
 int FUNC_4 (struct TCP_Server_Info*) ;
 int FUNC_5 (struct TCP_Server_Info*) ;
 int FUNC_6 (struct mid_q_entry*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct TCP_Server_Info*,int ) ;
 int FUNC_11 (struct TCP_Server_Info*,int,struct smb_rqst*,int const) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct mid_q_entry* FUNC_14 (struct TCP_Server_Info*,struct smb_rqst*) ;
 int FUNC_15 (struct TCP_Server_Info*,int const,unsigned int*) ;

int
FUNC_16(struct TCP_Server_Info *VAR_5, struct smb_rqst *VAR_6,
  mid_receive_t *VAR_7, mid_callback_t *VAR_8,
  mid_handle_t *VAR_9, void *VAR_10, const int VAR_11,
  const struct cifs_credits *VAR_12)
{
 int VAR_13;
 struct mid_q_entry *VAR_14;
 struct cifs_credits VAR_15 = { .value = 0, .instance = 0 };
 unsigned int VAR_16;
 int VAR_17;

 VAR_17 = VAR_11 & VAR_1;

 if ((VAR_11 & VAR_0) == 0) {
  VAR_13 = FUNC_15(VAR_5, VAR_11, &VAR_16);
  if (VAR_13)
   return VAR_13;
  VAR_15.value = 1;
  VAR_15.instance = VAR_16;
 } else
  VAR_16 = VAR_12->instance;

 FUNC_8(&VAR_5->srv_mutex);






 if (VAR_16 != VAR_5->reconnect_instance) {
  FUNC_9(&VAR_5->srv_mutex);
  FUNC_2(VAR_5, &VAR_15, VAR_17);
  return -VAR_2;
 }

 VAR_14 = VAR_5->ops->setup_async_request(VAR_5, VAR_6);
 if (FUNC_0(VAR_14)) {
  FUNC_9(&VAR_5->srv_mutex);
  FUNC_2(VAR_5, &VAR_15, VAR_17);
  return FUNC_1(VAR_14);
 }

 VAR_14->receive = VAR_7;
 VAR_14->callback = VAR_8;
 VAR_14->callback_data = VAR_10;
 VAR_14->handle = VAR_9;
 VAR_14->mid_state = VAR_4;


 FUNC_12(&VAR_3);
 FUNC_7(&VAR_14->qhead, &VAR_5->pending_mid_q);
 FUNC_13(&VAR_3);





 FUNC_6(VAR_14);
 FUNC_5(VAR_5);
 VAR_13 = FUNC_11(VAR_5, 1, VAR_6, VAR_11);
 FUNC_4(VAR_5);

 if (VAR_13 < 0) {
  FUNC_10(VAR_5, VAR_14->credits);
  VAR_5->sequence_number -= 2;
  FUNC_3(VAR_14);
 }

 FUNC_9(&VAR_5->srv_mutex);

 if (VAR_13 == 0)
  return 0;

 FUNC_2(VAR_5, &VAR_15, VAR_17);
 return VAR_13;
}
