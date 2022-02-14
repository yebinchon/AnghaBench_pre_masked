
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vmci_handle {int resource; int context; } ;
struct vmci_ctx {int dummy; } ;
struct qp_broker_entry {scalar_t__ const create_id; scalar_t__ const attach_id; int produce_q; int state; int consume_q; } ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__ const,int ,int ) ;
 int FUNC_3 (char*,int ,int ,int) ;
 int FUNC_4 (int ) ;
 struct qp_broker_entry* FUNC_5 (struct vmci_handle) ;
 TYPE_1__ VAR_6 ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct qp_broker_entry*) ;
 scalar_t__ FUNC_10 (struct vmci_ctx*) ;
 int FUNC_11 (struct vmci_ctx*,struct vmci_handle) ;
 scalar_t__ FUNC_12 (struct vmci_handle) ;

int FUNC_13(struct vmci_handle VAR_7,
    struct vmci_ctx *VAR_8,
    u32 VAR_9)
{
 struct qp_broker_entry *VAR_10;
 const u32 VAR_11 = FUNC_10(VAR_8);
 int VAR_12;

 if (FUNC_12(VAR_7) || !VAR_8 ||
     VAR_11 == VAR_4)
  return VAR_0;

 FUNC_0(&VAR_6.mutex);

 if (!FUNC_11(VAR_8, VAR_7)) {
  FUNC_2("Context (ID=0x%x) not attached to queue pair (handle=0x%x:0x%x)\n",
    VAR_11, VAR_7.context, VAR_7.resource);
  VAR_12 = VAR_1;
  goto out;
 }

 VAR_10 = FUNC_5(VAR_7);
 if (!VAR_10) {
  FUNC_2("Context (ID=0x%x) reports being attached to queue pair (handle=0x%x:0x%x) that isn't present in broker\n",
    VAR_11, VAR_7.context, VAR_7.resource);
  VAR_12 = VAR_1;
  goto out;
 }

 if (VAR_11 != VAR_10->create_id && VAR_11 != VAR_10->attach_id) {
  VAR_12 = VAR_2;
  goto out;
 }

 if (VAR_11 != VAR_3) {
  FUNC_4(VAR_10->produce_q);
  VAR_12 = FUNC_9(VAR_10);
  if (VAR_12 < VAR_5)
   FUNC_3("Failed to save queue headers for queue pair (handle=0x%x:0x%x,result=%d)\n",
    VAR_7.context, VAR_7.resource, VAR_12);

  FUNC_6(VAR_9, VAR_10->produce_q, VAR_10->consume_q);
  FUNC_7(VAR_10->produce_q,
            VAR_10->consume_q);




  VAR_10->state--;

  FUNC_8(VAR_10->produce_q);
 }

 VAR_12 = VAR_5;

 out:
 FUNC_1(&VAR_6.mutex);
 return VAR_12;
}
