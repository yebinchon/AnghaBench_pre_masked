
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct vmci_handle {int dummy; } ;
struct vmci_datagram_queue_entry {size_t dg_size; int list_item; struct vmci_datagram* dg; } ;
struct vmci_datagram {struct vmci_handle src; } ;
struct TYPE_2__ {int wait_queue; } ;
struct vmci_ctx {scalar_t__ datagram_queue_size; int lock; TYPE_1__ host_context; int pending_datagrams; int datagram_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 size_t FUNC_1 (struct vmci_datagram*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (struct vmci_ctx*) ;
 int FUNC_3 (struct vmci_datagram_queue_entry*) ;
 struct vmci_datagram_queue_entry* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*,size_t) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct vmci_ctx* FUNC_10 (size_t) ;
 int FUNC_11 (struct vmci_ctx*) ;
 int FUNC_12 (struct vmci_handle,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *) ;

int FUNC_15(u32 VAR_9, struct vmci_datagram *VAR_10)
{
 struct vmci_datagram_queue_entry *VAR_11;
 struct vmci_ctx *VAR_12;
 struct vmci_handle VAR_13;
 size_t VAR_14;

 VAR_14 = FUNC_1(VAR_10);
 if (VAR_14 > VAR_8) {
  FUNC_6("Datagram too large (bytes=%zu)\n", VAR_14);
  return VAR_2;
 }


 VAR_12 = FUNC_10(VAR_9);
 if (!VAR_12) {
  FUNC_6("Invalid context (ID=0x%x)\n", VAR_9);
  return VAR_2;
 }


 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_0);
 if (VAR_11 == ((void*)0)) {
  FUNC_7("Failed to allocate memory for datagram\n");
  FUNC_11(VAR_12);
  return VAR_3;
 }
 VAR_11->dg = VAR_10;
 VAR_11->dg_size = VAR_14;
 VAR_13 = VAR_10->src;
 FUNC_0(&VAR_11->list_item);

 FUNC_8(&VAR_12->lock);
 if (VAR_12->datagram_queue_size + VAR_14 >=
     VAR_7 &&
     (!FUNC_12(VAR_13,
    FUNC_13
    (VAR_5,
     VAR_1)) ||
      VAR_12->datagram_queue_size + VAR_14 >=
      VAR_6)) {
  FUNC_9(&VAR_12->lock);
  FUNC_11(VAR_12);
  FUNC_3(VAR_11);
  FUNC_6("Context (ID=0x%x) receive queue is full\n", VAR_9);
  return VAR_4;
 }

 FUNC_5(&VAR_11->list_item, &VAR_12->datagram_queue);
 VAR_12->pending_datagrams++;
 VAR_12->datagram_queue_size += VAR_14;
 FUNC_2(VAR_12);
 FUNC_14(&VAR_12->host_context.wait_queue);
 FUNC_9(&VAR_12->lock);
 FUNC_11(VAR_12);

 return VAR_14;
}
