
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ ioport; scalar_t__ maddr; } ;
struct ahc_softc {scalar_t__ tag; TYPE_1__ bsh; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;

uint8_t
FUNC_3(struct ahc_softc * VAR_1, long VAR_2)
{
 uint8_t VAR_3;

 if (VAR_1->tag == VAR_0) {
  VAR_3 = FUNC_2(VAR_1->bsh.maddr + VAR_2);
 } else {
  VAR_3 = FUNC_0(VAR_1->bsh.ioport + VAR_2);
 }
 FUNC_1();
 return (VAR_3);
}
