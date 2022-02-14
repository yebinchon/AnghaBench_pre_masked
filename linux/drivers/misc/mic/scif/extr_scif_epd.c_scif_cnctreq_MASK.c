
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t node; } ;
struct TYPE_3__ {int port; } ;
struct scifmsg {TYPE_2__ src; int uop; TYPE_1__ dst; } ;
struct scif_endpt {scalar_t__ backlog; scalar_t__ conreqcnt; int lock; int conwq; int conlist; } ;
struct scif_dev {int dummy; } ;
struct scif_conreq {int list; struct scifmsg msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scif_conreq*) ;
 struct scif_conreq* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int * VAR_2 ;
 struct scif_endpt* FUNC_3 (int ) ;
 int FUNC_4 (int *,struct scifmsg*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct scif_dev *VAR_3, struct scifmsg *VAR_4)
{
 struct scif_endpt *VAR_5 = ((void*)0);
 struct scif_conreq *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)

  goto conreq_sendrej;

 VAR_5 = FUNC_3(VAR_4->dst.port);
 if (!VAR_5)

  goto conreq_sendrej_free;
 else
  FUNC_5(&VAR_5->lock);

 if (VAR_5->backlog <= VAR_5->conreqcnt) {

  FUNC_6(&VAR_5->lock);
  goto conreq_sendrej_free;
 }

 VAR_6->msg = *VAR_4;
 FUNC_2(&VAR_6->list, &VAR_5->conlist);
 VAR_5->conreqcnt++;
 FUNC_7(&VAR_5->conwq);
 FUNC_6(&VAR_5->lock);
 return;

conreq_sendrej_free:
 FUNC_0(VAR_6);
conreq_sendrej:
 VAR_4->uop = VAR_1;
 FUNC_4(&VAR_2[VAR_4->src.node], VAR_4);
}
