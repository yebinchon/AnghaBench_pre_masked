
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sge_uld_rxq_info {unsigned int nrxq; unsigned int nciq; unsigned short* rspq_id; int* msix_tbl; struct sge_ofld_rxq* uldrxq; } ;
struct TYPE_12__ {scalar_t__ size; } ;
struct TYPE_11__ {unsigned short abs_id; scalar_t__ desc; } ;
struct sge_ofld_rxq {TYPE_5__ fl; TYPE_4__ rspq; int stats; } ;
struct TYPE_8__ {scalar_t__ abs_id; } ;
struct sge {TYPE_1__ intrq; } ;
struct TYPE_9__ {unsigned int nports; } ;
struct adapter {int flags; int * port; TYPE_3__* msix_info_ulds; TYPE_2__ params; struct sge sge; } ;
struct TYPE_10__ {int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,TYPE_4__*,TYPE_5__*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct adapter*,TYPE_4__*,int,int ,int,TYPE_5__*,int ,int *,int ) ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_4,
     struct sge_uld_rxq_info *VAR_5, bool VAR_6)
{
 unsigned int VAR_7 = VAR_5->nrxq + VAR_5->nciq;
 int VAR_8, VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0;
 struct sge_ofld_rxq *VAR_13 = VAR_5->uldrxq;
 unsigned short *VAR_14 = VAR_5->rspq_id;
 struct sge *VAR_15 = &VAR_4->sge;
 unsigned int VAR_16;

 VAR_16 = VAR_5->nrxq / VAR_4->params.nports;

 if (VAR_4->flags & VAR_0)
  VAR_10 = 1;
 else
  VAR_10 = -((int)VAR_15->intrq.abs_id + 1);

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++, VAR_13++) {
  if (VAR_8 == VAR_5->nrxq) {

   VAR_16 = VAR_5->nciq / VAR_4->params.nports;
   VAR_11 = 0;
  }

  if (VAR_10 >= 0) {
   VAR_12 = FUNC_1(VAR_4);
   if (VAR_12 < 0) {
    VAR_9 = -VAR_1;
    goto freeout;
   }
   VAR_10 = VAR_4->msix_info_ulds[VAR_12].idx;
  }
  VAR_9 = FUNC_3(VAR_4, &VAR_13->rspq, 0,
           VAR_4->port[VAR_11++ / VAR_16],
           VAR_10,
           VAR_13->fl.size ? &VAR_13->fl : ((void*)0),
           VAR_3,
           VAR_6 ? VAR_2 : ((void*)0),
           0);
  if (VAR_9)
   goto freeout;
  if (VAR_10 >= 0)
   VAR_5->msix_tbl[VAR_8] = VAR_12;
  FUNC_2(&VAR_13->stats, 0, sizeof(VAR_13->stats));
  if (VAR_14)
   VAR_14[VAR_8] = VAR_13->rspq.abs_id;
 }
 return 0;
freeout:
 VAR_13 = VAR_5->uldrxq;
 for ( ; VAR_8; VAR_8--, VAR_13++) {
  if (VAR_13->rspq.desc)
   FUNC_0(VAR_4, &VAR_13->rspq,
         VAR_13->fl.size ? &VAR_13->fl : ((void*)0));
 }
 return VAR_9;
}
