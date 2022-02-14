
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sublog {int ioerr; int serr; int devsc; int seqc; int termc; int sacc; int fvf; int arep; int esf; } ;
struct TYPE_16__ {int scnt; scalar_t__ cons; scalar_t__ pvrf; int auth; scalar_t__ scavf; int fsaf; scalar_t__ fsavf; int cpt; } ;
struct TYPE_17__ {TYPE_7__ erw; int saddr; int faddr; struct sublog sublog; } ;
struct TYPE_11__ {int lpum; } ;
struct TYPE_18__ {TYPE_8__ esw0; TYPE_2__ esw1; } ;
struct TYPE_12__ {int cstat; scalar_t__ eswf; } ;
struct TYPE_13__ {TYPE_3__ cmd; } ;
struct irb {TYPE_9__ esw; TYPE_4__ scsw; } ;
struct ccw_device {TYPE_6__* private; } ;
struct TYPE_14__ {int doverify; } ;
struct TYPE_15__ {TYPE_5__ flags; TYPE_1__* dma_area; } ;
struct TYPE_10__ {struct irb irb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct irb*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ccw_device *VAR_3, struct irb *VAR_4)
{
 struct irb *VAR_5;
 struct sublog *VAR_6, *VAR_7;

 if (!FUNC_0(VAR_4))
  return;

 VAR_5 = &VAR_3->private->dma_area->irb;


 VAR_5->esw.esw1.lpum = VAR_4->esw.esw1.lpum;


 if (VAR_4->scsw.cmd.eswf) {
  VAR_6 = &VAR_5->esw.esw0.sublog;
  VAR_7 = &VAR_4->esw.esw0.sublog;

  VAR_6->esf = VAR_7->esf;




  if (VAR_4->scsw.cmd.cstat & (VAR_1 |
           VAR_0 |
           VAR_2)) {

   VAR_6->arep = VAR_7->arep;

   VAR_6->fvf = VAR_7->fvf;

   VAR_6->sacc = VAR_7->sacc;

   VAR_6->termc = VAR_7->termc;

   VAR_6->seqc = VAR_7->seqc;
  }

  VAR_6->devsc = VAR_7->devsc;

  VAR_6->serr = VAR_7->serr;

  VAR_6->ioerr = VAR_7->ioerr;

  if (VAR_4->scsw.cmd.cstat & VAR_2)
   VAR_5->esw.esw0.erw.cpt = VAR_4->esw.esw0.erw.cpt;

  VAR_5->esw.esw0.erw.fsavf = VAR_4->esw.esw0.erw.fsavf;
  if (VAR_5->esw.esw0.erw.fsavf) {

   FUNC_1(VAR_5->esw.esw0.faddr, VAR_4->esw.esw0.faddr,
          sizeof (VAR_4->esw.esw0.faddr));

   VAR_5->esw.esw0.erw.fsaf = VAR_4->esw.esw0.erw.fsaf;
  }

  VAR_5->esw.esw0.erw.scavf = VAR_4->esw.esw0.erw.scavf;
  if (VAR_4->esw.esw0.erw.scavf)

   VAR_5->esw.esw0.saddr = VAR_4->esw.esw0.saddr;

 }



 VAR_5->esw.esw0.erw.auth = VAR_4->esw.esw0.erw.auth;

 VAR_5->esw.esw0.erw.pvrf = VAR_4->esw.esw0.erw.pvrf;
 if (VAR_4->esw.esw0.erw.pvrf)
  VAR_3->private->flags.doverify = 1;

 VAR_5->esw.esw0.erw.cons = VAR_4->esw.esw0.erw.cons;
 if (VAR_4->esw.esw0.erw.cons)
  VAR_5->esw.esw0.erw.scnt = VAR_4->esw.esw0.erw.scnt;
}
