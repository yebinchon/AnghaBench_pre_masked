
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pcan_pccard {scalar_t__ ccr; scalar_t__ ioport_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pcan_pccard *VAR_2, int VAR_3, u8 VAR_4)
{

 if (VAR_3 == VAR_0) {
  if (VAR_2->ccr == VAR_4)
   return;
  VAR_2->ccr = VAR_4;
 }

 FUNC_0(VAR_4, VAR_2->ioport_addr + VAR_1 + VAR_3);
}
