
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scb {int flags; struct hardware_scb* hscb; } ;
struct hardware_scb {size_t tag; scalar_t__ control; } ;
struct ahc_softc {TYPE_1__* scb_data; } ;
struct TYPE_4__ {int sle; } ;
struct TYPE_3__ {int free_scbs; int ** scbindex; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct scb*,int ) ;
 int FUNC_1 (struct ahc_softc*,struct scb*) ;
 TYPE_2__ VAR_1 ;

void
FUNC_2(struct ahc_softc *VAR_2, struct scb *VAR_3)
{
 struct hardware_scb *VAR_4;

 VAR_4 = VAR_3->hscb;

 VAR_2->scb_data->scbindex[VAR_4->tag] = ((void*)0);
 VAR_3->flags = VAR_0;
 VAR_4->control = 0;

 FUNC_0(&VAR_2->scb_data->free_scbs, VAR_3, VAR_1.sle);


 FUNC_1(VAR_2, VAR_3);
}
