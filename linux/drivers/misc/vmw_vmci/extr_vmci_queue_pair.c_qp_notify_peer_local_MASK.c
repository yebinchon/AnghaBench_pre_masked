
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct vmci_handle {int dummy; } ;
struct TYPE_8__ {int payload_size; void* src; void* dst; } ;
struct TYPE_5__ {int event; } ;
struct TYPE_7__ {TYPE_4__ hdr; TYPE_1__ event_data; } ;
struct TYPE_6__ {struct vmci_handle handle; int peer_id; } ;
struct vmci_event_qp {TYPE_3__ msg; TYPE_2__ payload; } ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(bool VAR_5, struct vmci_handle VAR_6)
{
 u32 VAR_7 = FUNC_1();
 struct vmci_event_qp VAR_8;

 VAR_8.msg.hdr.dst = FUNC_2(VAR_7, VAR_1);
 VAR_8.msg.hdr.src = FUNC_2(VAR_4,
       VAR_0);
 VAR_8.msg.hdr.payload_size = sizeof(VAR_8) - sizeof(VAR_8.msg.hdr);
 VAR_8.msg.event_data.event =
     VAR_5 ? VAR_2 : VAR_3;
 VAR_8.payload.peer_id = VAR_7;
 VAR_8.payload.handle = VAR_6;

 return FUNC_0(&VAR_8.msg.hdr);
}
