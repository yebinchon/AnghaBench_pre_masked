
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct vmci_handle {int resource; int context; } ;
struct vmci_ctx {int dummy; } ;
struct TYPE_4__ {int resource; int context; } ;
struct TYPE_5__ {TYPE_1__ handle; } ;
struct qp_broker_entry {scalar_t__ const create_id; scalar_t__ const attach_id; scalar_t__ state; int vmci_page_files; TYPE_2__ qp; int consume_q; int produce_q; } ;
struct TYPE_6__ {int mutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ const VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__ const,int ,int ) ;
 struct qp_broker_entry* FUNC_3 (struct vmci_handle) ;
 TYPE_3__ VAR_11 ;
 int FUNC_4 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,struct vmci_handle,scalar_t__ const,scalar_t__) ;
 scalar_t__ FUNC_8 (struct vmci_ctx*) ;
 int FUNC_9 (struct vmci_ctx*,struct vmci_handle) ;
 scalar_t__ FUNC_10 (struct vmci_handle) ;

int FUNC_11(struct vmci_handle VAR_12,
      u64 VAR_13,
      u64 VAR_14,
      struct vmci_ctx *VAR_15)
{
 struct qp_broker_entry *VAR_16;
 int VAR_17;
 const u32 VAR_18 = FUNC_8(VAR_15);

 if (FUNC_10(VAR_12) || !VAR_15 ||
     VAR_18 == VAR_9)
  return VAR_4;






 if (VAR_13 == 0 || VAR_14 == 0)
  return VAR_4;

 FUNC_0(&VAR_11.mutex);

 if (!FUNC_9(VAR_15, VAR_12)) {
  FUNC_2("Context (ID=0x%x) not attached to queue pair (handle=0x%x:0x%x)\n",
   VAR_18, VAR_12.context, VAR_12.resource);
  VAR_17 = VAR_5;
  goto out;
 }

 VAR_16 = FUNC_3(VAR_12);
 if (!VAR_16) {
  VAR_17 = VAR_5;
  goto out;
 }







 if (VAR_16->create_id != VAR_18 &&
     (VAR_16->create_id != VAR_8 ||
      VAR_16->attach_id != VAR_18)) {
  VAR_17 = VAR_6;
  goto out;
 }

 if (VAR_16->state != VAR_3 &&
     VAR_16->state != VAR_1) {
  VAR_17 = VAR_7;
  goto out;
 }

 VAR_17 = FUNC_4(VAR_13, VAR_14,
      VAR_16->produce_q, VAR_16->consume_q);
 if (VAR_17 < VAR_10)
  goto out;

 VAR_17 = FUNC_5(VAR_16->produce_q, VAR_16->consume_q);
 if (VAR_17 < VAR_10) {
  FUNC_6(VAR_16->produce_q,
            VAR_16->consume_q);
  goto out;
 }

 if (VAR_16->state == VAR_3)
  VAR_16->state = VAR_2;
 else
  VAR_16->state = VAR_0;

 VAR_16->vmci_page_files = 1;

 if (VAR_16->state == VAR_0) {
  VAR_17 =
      FUNC_7(1, VAR_12, VAR_18, VAR_16->create_id);
  if (VAR_17 < VAR_10) {
   FUNC_2("Failed to notify peer (ID=0x%x) of attach to queue pair (handle=0x%x:0x%x)\n",
    VAR_16->create_id, VAR_16->qp.handle.context,
    VAR_16->qp.handle.resource);
  }
 }

 VAR_17 = VAR_10;
 out:
 FUNC_1(&VAR_11.mutex);
 return VAR_17;
}
