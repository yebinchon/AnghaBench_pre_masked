
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vmci_callback ;
typedef scalar_t__ u32 ;
struct vmci_handle {scalar_t__ context; scalar_t__ resource; } ;
struct dbell_entry {int resource; int active; scalar_t__ idx; void* client_data; scalar_t__ notify_cb; scalar_t__ run_delayed; int work; scalar_t__ priv_flags; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int) ;
 int VAR_10 ;
 int FUNC_3 (struct dbell_entry*) ;
 int FUNC_4 (struct dbell_entry*) ;
 int FUNC_5 (struct vmci_handle,scalar_t__) ;
 int FUNC_6 (struct dbell_entry*) ;
 struct dbell_entry* FUNC_7 (int,int ) ;
 int FUNC_8 (char*,scalar_t__,scalar_t__) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (struct vmci_handle) ;
 struct vmci_handle FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (int *,int ,struct vmci_handle) ;
 struct vmci_handle FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct vmci_handle *VAR_11,
    u32 VAR_12,
    u32 VAR_13,
    vmci_callback VAR_14, void *VAR_15)
{
 struct dbell_entry *VAR_16;
 struct vmci_handle VAR_17;
 int VAR_18;

 if (!VAR_11 || !VAR_14 || VAR_12 & ~VAR_4 ||
     VAR_13 & ~VAR_7)
  return VAR_1;

 VAR_16 = FUNC_7(sizeof(*VAR_16), VAR_0);
 if (VAR_16 == ((void*)0)) {
  FUNC_9("Failed allocating memory for datagram entry\n");
  return VAR_2;
 }

 if (FUNC_12(*VAR_11)) {
  u32 VAR_19 = FUNC_10();

  if (VAR_19 == VAR_6) {
   FUNC_9("Failed to get context ID\n");
   VAR_18 = VAR_3;
   goto free_mem;
  }


  VAR_17 = FUNC_13(VAR_19, VAR_6);
 } else {
  bool VAR_20 = 0;
  if (VAR_11->context == VAR_5 ||
      (FUNC_11() &&
       FUNC_10() == VAR_11->context)) {
   VAR_20 = 1;
  }

  if (!VAR_20 || VAR_11->resource == VAR_6) {
   FUNC_8("Invalid argument (handle=0x%x:0x%x)\n",
     VAR_11->context, VAR_11->resource);
   VAR_18 = VAR_1;
   goto free_mem;
  }

  VAR_17 = *VAR_11;
 }

 VAR_16->idx = 0;
 FUNC_0(&VAR_16->node);
 VAR_16->priv_flags = VAR_13;
 FUNC_1(&VAR_16->work, VAR_10);
 VAR_16->run_delayed = VAR_12 & VAR_4;
 VAR_16->notify_cb = VAR_14;
 VAR_16->client_data = VAR_15;
 FUNC_2(&VAR_16->active, 0);

 VAR_18 = FUNC_14(&VAR_16->resource,
       VAR_8,
       VAR_17);
 if (VAR_18 != VAR_9) {
  FUNC_9("Failed to add new resource (handle=0x%x:0x%x), error: %d\n",
   VAR_17.context, VAR_17.resource, VAR_18);
  goto free_mem;
 }

 VAR_17 = FUNC_15(&VAR_16->resource);
 if (FUNC_11()) {
  FUNC_3(VAR_16);
  VAR_18 = FUNC_5(VAR_17, VAR_16->idx);
  if (VAR_9 != VAR_18)
   goto destroy_resource;

  FUNC_2(&VAR_16->active, 1);
 }

 *VAR_11 = VAR_17;

 return VAR_18;

 destroy_resource:
 FUNC_4(VAR_16);
 FUNC_16(&VAR_16->resource);
 free_mem:
 FUNC_6(VAR_16);
 return VAR_18;
}
