
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ abs_id; } ;
struct sge {TYPE_1__ fw_evtq; TYPE_1__ intrq; int egr_sz; int txq_maperr; int starving_fl; } ;
struct adapter {int flags; int msi_idx; int * port; struct sge sge; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_1 ;
 int FUNC_1 (struct adapter*,TYPE_1__*,int,int ,int,int *,int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct adapter *VAR_2)
{
 struct sge *VAR_3 = &VAR_2->sge;
 int VAR_4 = 0;

 FUNC_0(VAR_3->starving_fl, VAR_3->egr_sz);
 FUNC_0(VAR_3->txq_maperr, VAR_3->egr_sz);

 if (VAR_2->flags & VAR_0)
  VAR_2->msi_idx = 1;
 else {
  VAR_4 = FUNC_1(VAR_2, &VAR_3->intrq, 0, VAR_2->port[0], 0,
           ((void*)0), ((void*)0), ((void*)0), -1);
  if (VAR_4)
   return VAR_4;
  VAR_2->msi_idx = -((int)VAR_3->intrq.abs_id + 1);
 }

 VAR_4 = FUNC_1(VAR_2, &VAR_3->fw_evtq, 1, VAR_2->port[0],
          VAR_2->msi_idx, ((void*)0), VAR_1, ((void*)0), -1);
 return VAR_4;
}
