
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct vmci_qp_page_store {int len; int pages; } ;
struct vmci_handle {int resource; int context; } ;
struct vmci_ctx {int dummy; } ;
struct qp_broker_entry {scalar_t__ const create_id; scalar_t__ const attach_id; int client_data; int (* wakeup_cb ) (int ) ;int state; int produce_q; int consume_q; int qp; } ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,scalar_t__ const,int ,int ) ;
 int FUNC_4 (int ) ;
 struct qp_broker_entry* FUNC_5 (struct vmci_handle) ;
 TYPE_1__ VAR_6 ;
 int FUNC_6 (struct vmci_qp_page_store*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct qp_broker_entry*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct vmci_ctx*) ;
 int FUNC_11 (struct vmci_ctx*,struct vmci_handle) ;
 scalar_t__ FUNC_12 (struct vmci_handle) ;

int FUNC_13(struct vmci_handle VAR_7,
         struct vmci_ctx *VAR_8,
         u64 VAR_9)
{
 struct qp_broker_entry *VAR_10;
 const u32 VAR_11 = FUNC_10(VAR_8);
 int VAR_12;

 if (FUNC_12(VAR_7) || !VAR_8 ||
     VAR_11 == VAR_4)
  return VAR_0;

 FUNC_1(&VAR_6.mutex);

 if (!FUNC_11(VAR_8, VAR_7)) {
  FUNC_3("Context (ID=0x%x) not attached to queue pair (handle=0x%x:0x%x)\n",
    VAR_11, VAR_7.context, VAR_7.resource);
  VAR_12 = VAR_1;
  goto out;
 }

 VAR_10 = FUNC_5(VAR_7);
 if (!VAR_10) {
  FUNC_3("Context (ID=0x%x) reports being attached to queue pair (handle=0x%x:0x%x) that isn't present in broker\n",
    VAR_11, VAR_7.context, VAR_7.resource);
  VAR_12 = VAR_1;
  goto out;
 }

 if (VAR_11 != VAR_10->create_id && VAR_11 != VAR_10->attach_id) {
  VAR_12 = VAR_2;
  goto out;
 }

 VAR_12 = VAR_5;

 if (VAR_11 != VAR_3) {
  struct vmci_qp_page_store VAR_13;

  VAR_13.pages = VAR_9;
  VAR_13.len = FUNC_0(VAR_10->qp);

  FUNC_4(VAR_10->produce_q);
  FUNC_8(VAR_10);
  VAR_12 =
      FUNC_6(&VAR_13,
       VAR_10->produce_q,
       VAR_10->consume_q);
  FUNC_7(VAR_10->produce_q);
  if (VAR_12 == VAR_5) {


   VAR_10->state++;

   if (VAR_10->wakeup_cb)
    VAR_10->wakeup_cb(VAR_10->client_data);
  }
 }

 out:
 FUNC_2(&VAR_6.mutex);
 return VAR_12;
}
