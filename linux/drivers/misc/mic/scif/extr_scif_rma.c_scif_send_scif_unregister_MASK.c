
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct scifmsg {scalar_t__* payload; int src; int uop; } ;
struct TYPE_2__ {scalar_t__ vaddr; } ;
struct scif_window {TYPE_1__ alloc_handle; } ;
struct scif_endpt {int remote_dev; int port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct scifmsg*) ;

__attribute__((used)) static int FUNC_1(struct scif_endpt *VAR_1,
         struct scif_window *VAR_2)
{
 struct scifmsg VAR_3;

 VAR_3.uop = VAR_0;
 VAR_3.src = VAR_1->port;
 VAR_3.payload[0] = VAR_2->alloc_handle.vaddr;
 VAR_3.payload[1] = (u64)VAR_2;
 return FUNC_0(VAR_1->remote_dev, &VAR_3);
}
