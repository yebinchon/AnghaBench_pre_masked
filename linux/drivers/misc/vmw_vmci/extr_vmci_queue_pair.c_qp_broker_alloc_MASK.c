
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vmci_event_release_cb ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct vmci_qp_page_store {int dummy; } ;
struct vmci_handle {scalar_t__ const context; scalar_t__ const resource; } ;
struct vmci_ctx {int dummy; } ;
struct qp_broker_entry {int dummy; } ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct vmci_qp_page_store*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,scalar_t__ const,scalar_t__ const,scalar_t__ const) ;
 int FUNC_4 (struct qp_broker_entry*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,struct vmci_qp_page_store*,struct vmci_ctx*,int ,void*,struct qp_broker_entry**) ;
 int FUNC_5 (struct vmci_handle,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,struct vmci_qp_page_store*,struct vmci_ctx*,int ,void*,struct qp_broker_entry**) ;
 struct qp_broker_entry* FUNC_6 (struct vmci_handle) ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_7 (struct vmci_ctx*) ;
 scalar_t__ FUNC_8 (struct vmci_ctx*,struct vmci_handle) ;
 scalar_t__ FUNC_9 (struct vmci_handle) ;

__attribute__((used)) static int FUNC_10(struct vmci_handle VAR_7,
      u32 VAR_8,
      u32 VAR_9,
      u32 VAR_10,
      u64 VAR_11,
      u64 VAR_12,
      struct vmci_qp_page_store *VAR_13,
      struct vmci_ctx *VAR_14,
      vmci_event_release_cb VAR_15,
      void *VAR_16,
      struct qp_broker_entry **VAR_17,
      bool *VAR_18)
{
 const u32 VAR_19 = FUNC_7(VAR_14);
 bool VAR_20;
 struct qp_broker_entry *VAR_21 = ((void*)0);
 bool VAR_22 = VAR_9 & VAR_4;
 int VAR_23;

 if (FUNC_9(VAR_7) ||
     (VAR_9 & ~VAR_5) || VAR_22 ||
     !(VAR_11 || VAR_12) ||
     !VAR_14 || VAR_19 == VAR_3 ||
     VAR_7.context == VAR_3) {
  return VAR_1;
 }

 if (VAR_13 && !FUNC_0(VAR_13))
  return VAR_1;






 FUNC_1(&VAR_6.mutex);

 if (!VAR_22 && FUNC_8(VAR_14, VAR_7)) {
  FUNC_3("Context (ID=0x%x) already attached to queue pair (handle=0x%x:0x%x)\n",
    VAR_19, VAR_7.context, VAR_7.resource);
  FUNC_2(&VAR_6.mutex);
  return VAR_0;
 }

 if (VAR_7.resource != VAR_3)
  VAR_21 = FUNC_6(VAR_7);

 if (!VAR_21) {
  VAR_20 = 1;
  VAR_23 =
      FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10,
         VAR_11, VAR_12, VAR_13,
         VAR_14, VAR_15, VAR_16, VAR_17);
 } else {
  VAR_20 = 0;
  VAR_23 =
      FUNC_4(VAR_21, VAR_8, VAR_9, VAR_10,
         VAR_11, VAR_12, VAR_13,
         VAR_14, VAR_15, VAR_16, VAR_17);
 }

 FUNC_2(&VAR_6.mutex);

 if (VAR_18)
  *VAR_18 = (VAR_19 == VAR_2) &&
      !(VAR_20 && VAR_22);

 return VAR_23;
}
