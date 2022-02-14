
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scb {TYPE_1__* hscb; } ;
struct ahd_softc {int dummy; } ;
struct TYPE_2__ {scalar_t__ datacnt; scalar_t__ dataptr; int sgptr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ahd_softc *VAR_1, struct scb *VAR_2)
{
 VAR_2->hscb->sgptr = FUNC_0(VAR_0);
 VAR_2->hscb->dataptr = 0;
 VAR_2->hscb->datacnt = 0;
}
