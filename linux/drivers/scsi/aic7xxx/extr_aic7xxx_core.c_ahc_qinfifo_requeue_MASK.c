
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scb {TYPE_3__* hscb; } ;
struct ahc_softc {TYPE_2__* next_queued_scb; int qinfifonext; int * qinfifo; } ;
struct TYPE_6__ {int next; int tag; } ;
struct TYPE_5__ {TYPE_1__* hscb; } ;
struct TYPE_4__ {int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahc_softc*,int ,int ) ;
 int FUNC_1 (struct ahc_softc*,struct scb*,int) ;

__attribute__((used)) static void
FUNC_2(struct ahc_softc *VAR_3, struct scb *VAR_4,
      struct scb *VAR_5)
{
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_2, VAR_5->hscb->tag);
 } else {
  VAR_4->hscb->next = VAR_5->hscb->tag;
  FUNC_1(VAR_3, VAR_4,
        VAR_0|VAR_1);
 }
 VAR_3->qinfifo[VAR_3->qinfifonext++] = VAR_5->hscb->tag;
 VAR_5->hscb->next = VAR_3->next_queued_scb->hscb->tag;
 FUNC_1(VAR_3, VAR_5, VAR_0|VAR_1);
}
