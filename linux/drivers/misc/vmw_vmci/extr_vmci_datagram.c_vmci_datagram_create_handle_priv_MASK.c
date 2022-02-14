
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vmci_datagram_recv_cb ;
typedef int u32 ;
struct vmci_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,int *,void*,struct vmci_handle*) ;
 int FUNC_1 (char*) ;

int FUNC_2(u32 VAR_2,
         u32 VAR_3,
         u32 VAR_4,
         vmci_datagram_recv_cb VAR_5,
         void *VAR_6,
         struct vmci_handle *VAR_7)
{
 if (VAR_7 == ((void*)0))
  return VAR_0;

 if (VAR_5 == ((void*)0)) {
  FUNC_1("Client callback needed when creating datagram\n");
  return VAR_0;
 }

 if (VAR_4 & ~VAR_1)
  return VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
    VAR_6, VAR_7);
}
