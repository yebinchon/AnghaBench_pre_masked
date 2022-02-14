
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmci_event_release_cb ;
typedef int u64 ;
typedef int u32 ;
struct vmci_queue {int dummy; } ;
struct vmci_handle {int dummy; } ;
struct vmci_ctx {int dummy; } ;
struct qp_broker_entry {int resource; struct vmci_queue* consume_q; struct vmci_queue* produce_q; } ;


 int VAR_0 ;
 struct vmci_handle VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct vmci_handle,int ,int ,int ,int ,int ,int *,struct vmci_ctx*,int ,void*,struct qp_broker_entry**,int*) ;
 struct vmci_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct vmci_ctx*) ;
 scalar_t__ FUNC_4 (struct vmci_handle) ;
 struct vmci_handle FUNC_5 (int ,int ) ;
 struct vmci_handle FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct vmci_handle *VAR_4,
         struct vmci_queue **VAR_5,
         u64 VAR_6,
         struct vmci_queue **VAR_7,
         u64 VAR_8,
         u32 VAR_9,
         u32 VAR_10,
         u32 VAR_11,
         vmci_event_release_cb VAR_12,
         void *VAR_13)
{
 struct vmci_handle VAR_14;
 struct vmci_ctx *VAR_15;
 struct qp_broker_entry *VAR_16;
 int VAR_17;
 bool VAR_18;

 if (FUNC_4(*VAR_4)) {
  VAR_14 = FUNC_5(
   VAR_0, VAR_2);
 } else
  VAR_14 = *VAR_4;

 VAR_15 = FUNC_2(VAR_0);
 VAR_16 = ((void*)0);
 VAR_17 =
     FUNC_1(VAR_14, VAR_9, VAR_10, VAR_11,
       VAR_6, VAR_8, ((void*)0), VAR_15,
       VAR_12, VAR_13, &VAR_16, &VAR_18);
 if (VAR_17 == VAR_3) {
  if (VAR_18) {






   *VAR_5 = VAR_16->consume_q;
   *VAR_7 = VAR_16->produce_q;
  } else {
   *VAR_5 = VAR_16->produce_q;
   *VAR_7 = VAR_16->consume_q;
  }

  *VAR_4 = FUNC_6(&VAR_16->resource);
 } else {
  *VAR_4 = VAR_1;
  FUNC_0("queue pair broker failed to alloc (result=%d)\n",
    VAR_17);
 }
 FUNC_3(VAR_15);
 return VAR_17;
}
