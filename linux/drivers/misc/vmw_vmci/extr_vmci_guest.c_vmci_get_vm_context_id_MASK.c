
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vmci_datagram {scalar_t__ payload_size; int src; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct vmci_datagram*) ;

u32 FUNC_2(void)
{
 if (VAR_4 == VAR_3) {
  struct vmci_datagram VAR_5;
  VAR_5.dst =
      FUNC_0(VAR_2,
         VAR_1);
  VAR_5.src = VAR_0;
  VAR_5.payload_size = 0;
  VAR_4 = FUNC_1(&VAR_5);
 }
 return VAR_4;
}
