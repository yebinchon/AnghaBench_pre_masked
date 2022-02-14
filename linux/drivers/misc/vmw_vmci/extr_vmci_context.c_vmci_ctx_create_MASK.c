
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int wait_queue; } ;
struct vmci_ctx {int user_version; void* queue_pair_array; void* doorbell_array; int list_item; scalar_t__ cid; int * notify_page; int * notify; int cred; scalar_t__ priv_flags; void* pending_doorbell_array; TYPE_1__ host_context; int notifier_list; int datagram_queue; int lock; int kref; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {int lock; int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmci_ctx* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_2 (struct cred const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vmci_ctx*) ;
 int FUNC_5 (int *) ;
 struct vmci_ctx* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 void* FUNC_15 (int ,int ) ;
 int FUNC_16 (void*) ;

struct vmci_ctx *FUNC_17(u32 VAR_10, u32 VAR_11,
     uintptr_t VAR_12,
     int VAR_13,
     const struct cred *VAR_14)
{
 struct vmci_ctx *VAR_15;
 int VAR_16;

 if (VAR_10 == VAR_3) {
  FUNC_9("Invalid context ID for VMCI context\n");
  VAR_16 = -VAR_0;
  goto err_out;
 }

 if (VAR_11 & ~VAR_6) {
  FUNC_9("Invalid flag (flags=0x%x) for VMCI context\n",
    VAR_11);
  VAR_16 = -VAR_0;
  goto err_out;
 }

 if (VAR_13 == 0) {
  FUNC_9("Invalid suer_version %d\n", VAR_13);
  VAR_16 = -VAR_0;
  goto err_out;
 }

 VAR_15 = FUNC_6(sizeof(*VAR_15), VAR_2);
 if (!VAR_15) {
  FUNC_10("Failed to allocate memory for VMCI context\n");
  VAR_16 = -VAR_0;
  goto err_out;
 }

 FUNC_5(&VAR_15->kref);
 FUNC_12(&VAR_15->lock);
 FUNC_1(&VAR_15->list_item);
 FUNC_1(&VAR_15->datagram_queue);
 FUNC_1(&VAR_15->notifier_list);


 FUNC_3(&VAR_15->host_context.wait_queue);

 VAR_15->queue_pair_array =
  FUNC_15(0, VAR_5);
 if (!VAR_15->queue_pair_array) {
  VAR_16 = -VAR_1;
  goto err_free_ctx;
 }

 VAR_15->doorbell_array =
  FUNC_15(0, VAR_4);
 if (!VAR_15->doorbell_array) {
  VAR_16 = -VAR_1;
  goto err_free_qp_array;
 }

 VAR_15->pending_doorbell_array =
  FUNC_15(0, VAR_4);
 if (!VAR_15->pending_doorbell_array) {
  VAR_16 = -VAR_1;
  goto err_free_db_array;
 }

 VAR_15->user_version = VAR_13;

 VAR_15->priv_flags = VAR_11;

 if (VAR_14)
  VAR_15->cred = FUNC_2(VAR_14);

 VAR_15->notify = &VAR_8;
 VAR_15->notify_page = ((void*)0);







 FUNC_11(&VAR_9.lock);

 while (FUNC_14(VAR_10)) {

  VAR_10 = FUNC_8(VAR_10, VAR_7 - 1) + 1;
  if (VAR_10 == VAR_3)
   VAR_10 = VAR_7;
 }
 VAR_15->cid = VAR_10;

 FUNC_7(&VAR_15->list_item, &VAR_9.head);
 FUNC_13(&VAR_9.lock);

 return VAR_15;

 err_free_db_array:
 FUNC_16(VAR_15->doorbell_array);
 err_free_qp_array:
 FUNC_16(VAR_15->queue_pair_array);
 err_free_ctx:
 FUNC_4(VAR_15);
 err_out:
 return FUNC_0(VAR_16);
}
