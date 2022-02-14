
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unlink_msg ;
struct vmci_handle {int dummy; } ;
struct TYPE_2__ {scalar_t__ payload_size; int src; int dst; } ;
struct vmci_doorbell_unlink_msg {TYPE_1__ hdr; struct vmci_handle handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct vmci_handle VAR_4)
{
 struct vmci_doorbell_unlink_msg VAR_5;

 VAR_5.hdr.dst = FUNC_0(VAR_3,
           VAR_2);
 VAR_5.hdr.src = VAR_0;
 VAR_5.hdr.payload_size = sizeof(VAR_5) - VAR_1;
 VAR_5.handle = VAR_4;

 return FUNC_1(&VAR_5.hdr);
}
