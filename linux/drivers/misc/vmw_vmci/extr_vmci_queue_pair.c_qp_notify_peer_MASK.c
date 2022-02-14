
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vmci_handle {int dummy; } ;
struct TYPE_8__ {int payload_size; void* src; void* dst; } ;
struct TYPE_5__ {int event; } ;
struct TYPE_7__ {TYPE_4__ hdr; TYPE_1__ event_data; } ;
struct TYPE_6__ {scalar_t__ peer_id; struct vmci_handle handle; } ;
struct vmci_event_qp {TYPE_3__ msg; TYPE_2__ payload; } ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*,scalar_t__) ;
 int FUNC_1 (scalar_t__,TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (struct vmci_handle) ;
 void* FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(bool VAR_8,
     struct vmci_handle VAR_9,
     u32 VAR_10,
     u32 VAR_11)
{
 int VAR_12;
 struct vmci_event_qp VAR_13;

 if (FUNC_2(VAR_9) || VAR_10 == VAR_6 ||
     VAR_11 == VAR_6)
  return VAR_1;
 VAR_13.msg.hdr.dst = FUNC_3(VAR_11, VAR_2);
 VAR_13.msg.hdr.src = FUNC_3(VAR_5,
       VAR_0);
 VAR_13.msg.hdr.payload_size = sizeof(VAR_13) - sizeof(VAR_13.msg.hdr);
 VAR_13.msg.event_data.event = VAR_8 ?
     VAR_3 : VAR_4;
 VAR_13.payload.handle = VAR_9;
 VAR_13.payload.peer_id = VAR_10;

 VAR_12 = FUNC_1(VAR_5,
        &VAR_13.msg.hdr, 0);
 if (VAR_12 < VAR_7)
  FUNC_0("Failed to enqueue queue_pair %s event datagram for context (ID=0x%x)\n",
   VAR_8 ? "ATTACH" : "DETACH", VAR_11);

 return VAR_12;
}
