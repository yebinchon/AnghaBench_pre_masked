
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vmci_handle {int dummy; } ;
struct TYPE_2__ {scalar_t__ payload_size; int src; int dst; } ;
struct vmci_doorbell_link_msg {TYPE_1__ hdr; int notify_idx; struct vmci_handle handle; } ;
typedef int link_msg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct vmci_handle VAR_4, u32 VAR_5)
{
 struct vmci_doorbell_link_msg VAR_6;

 VAR_6.hdr.dst = FUNC_0(VAR_3,
         VAR_2);
 VAR_6.hdr.src = VAR_0;
 VAR_6.hdr.payload_size = sizeof(VAR_6) - VAR_1;
 VAR_6.handle = VAR_4;
 VAR_6.notify_idx = VAR_5;

 return FUNC_1(&VAR_6.hdr);
}
