
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vmci_handle {scalar_t__ context; int resource; } ;
struct TYPE_2__ {int wait_queue; } ;
struct vmci_ctx {int lock; TYPE_1__ host_context; int pending_doorbell_array; int doorbell_array; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct vmci_ctx*) ;
 int FUNC_2 (char*,scalar_t__,...) ;
 int FUNC_3 (char*,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 struct vmci_ctx* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct vmci_ctx*) ;
 int FUNC_9 (struct vmci_handle,scalar_t__*) ;
 int FUNC_10 (scalar_t__,struct vmci_handle) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (int *,struct vmci_handle) ;
 int FUNC_13 (int ,struct vmci_handle) ;
 scalar_t__ FUNC_14 (struct vmci_handle) ;
 int FUNC_15 (int *) ;

int FUNC_16(u32 VAR_7,
     struct vmci_handle VAR_8,
     u32 VAR_9)
{
 struct vmci_ctx *VAR_10;
 int VAR_11;

 if (FUNC_14(VAR_8))
  return VAR_1;


 VAR_10 = FUNC_7(VAR_8.context);
 if (!VAR_10) {
  FUNC_2("Invalid context (ID=0x%x)\n", VAR_8.context);
  return VAR_2;
 }

 if (VAR_7 != VAR_8.context) {
  u32 VAR_12;

  if (FUNC_0(VAR_7) &&
      FUNC_0(VAR_8.context)) {
   FUNC_2("Doorbell notification from VM to VM not supported (src=0x%x, dst=0x%x)\n",
     VAR_7, VAR_8.context);
   VAR_11 = VAR_0;
   goto out;
  }

  VAR_11 = FUNC_9(VAR_8, &VAR_12);
  if (VAR_11 < VAR_6) {
   FUNC_3("Failed to get privilege flags for destination (handle=0x%x:0x%x)\n",
    VAR_8.context, VAR_8.resource);
   goto out;
  }

  if (VAR_7 != VAR_4 ||
      VAR_9 == VAR_5) {
   VAR_9 = FUNC_6(VAR_7);
  }

  if (FUNC_11(VAR_9, VAR_12)) {
   VAR_11 = VAR_3;
   goto out;
  }
 }

 if (VAR_8.context == VAR_4) {
  VAR_11 = FUNC_10(VAR_7, VAR_8);
 } else {
  FUNC_4(&VAR_10->lock);

  if (!FUNC_13(VAR_10->doorbell_array,
            VAR_8)) {
   VAR_11 = VAR_2;
  } else {
   if (!FUNC_13(
     VAR_10->pending_doorbell_array,
     VAR_8)) {
    VAR_11 = FUNC_12(
     &VAR_10->pending_doorbell_array,
     VAR_8);
    if (VAR_11 == VAR_6) {
     FUNC_1(VAR_10);
     FUNC_15(&VAR_10->host_context.wait_queue);
    }
   } else {
    VAR_11 = VAR_6;
   }
  }
  FUNC_5(&VAR_10->lock);
 }

 out:
 FUNC_8(VAR_10);

 return VAR_11;
}
