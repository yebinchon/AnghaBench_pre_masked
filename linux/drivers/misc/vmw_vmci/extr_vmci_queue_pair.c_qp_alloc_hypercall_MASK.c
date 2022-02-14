
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {scalar_t__ payload_size; int src; int dst; } ;
struct vmci_qp_alloc_msg {int num_ppns; TYPE_2__ hdr; int consume_size; int produce_size; int flags; int peer; int handle; } ;
struct TYPE_3__ {int consume_size; int produce_size; int flags; int peer; int handle; } ;
struct qp_guest_endpoint {int num_ppns; int ppn_set; TYPE_1__ qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vmci_qp_alloc_msg*) ;
 struct vmci_qp_alloc_msg* FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(const struct qp_guest_endpoint *VAR_8)
{
 struct vmci_qp_alloc_msg *VAR_9;
 size_t VAR_10;
 size_t VAR_11;
 int VAR_12;

 if (!VAR_8 || VAR_8->num_ppns <= 2)
  return VAR_3;

 VAR_11 = FUNC_5() ? sizeof(u64) : sizeof(u32);
 VAR_10 = sizeof(*VAR_9) +
     (size_t) VAR_8->num_ppns * VAR_11;
 VAR_9 = FUNC_1(VAR_10, VAR_0);
 if (!VAR_9)
  return VAR_4;

 VAR_9->hdr.dst = FUNC_3(VAR_5,
           VAR_6);
 VAR_9->hdr.src = VAR_1;
 VAR_9->hdr.payload_size = VAR_10 - VAR_2;
 VAR_9->handle = VAR_8->qp.handle;
 VAR_9->peer = VAR_8->qp.peer;
 VAR_9->flags = VAR_8->qp.flags;
 VAR_9->produce_size = VAR_8->qp.produce_size;
 VAR_9->consume_size = VAR_8->qp.consume_size;
 VAR_9->num_ppns = VAR_8->num_ppns;

 VAR_12 = FUNC_2((u8 *)VAR_9 + sizeof(*VAR_9),
         &VAR_8->ppn_set);
 if (VAR_12 == VAR_7)
  VAR_12 = FUNC_4(&VAR_9->hdr);

 FUNC_0(VAR_9);

 return VAR_12;
}
