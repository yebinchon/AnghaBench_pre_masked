
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sge_rspq {scalar_t__ pktcnt_idx; int intr_params; int cntxt_id; scalar_t__ desc; struct adapter* adap; } ;
struct adapter {int sge; int pf; int mbox; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (struct adapter*,int ,int ,int ,int,scalar_t__*,scalar_t__*) ;

int FUNC_8(struct sge_rspq *VAR_2,
          unsigned int VAR_3, unsigned int VAR_4)
{
 struct adapter *VAR_5 = VAR_2->adap;

 if ((VAR_3 | VAR_4) == 0)
  VAR_4 = 1;

 if (VAR_4) {
  int VAR_6;
  u32 VAR_7, VAR_8;

  VAR_8 = FUNC_5(&VAR_5->sge, VAR_4);
  if (VAR_2->desc && VAR_2->pktcnt_idx != VAR_8) {

   VAR_7 = FUNC_0(VAR_0) |
       FUNC_1(
     VAR_1) |
       FUNC_2(VAR_2->cntxt_id);
   VAR_6 = FUNC_7(VAR_5, VAR_5->mbox, VAR_5->pf, 0, 1,
         &VAR_7, &VAR_8);
   if (VAR_6)
    return VAR_6;
  }
  VAR_2->pktcnt_idx = VAR_8;
 }

 VAR_3 = VAR_3 == 0 ? 6 : FUNC_6(&VAR_5->sge, VAR_3);
 VAR_2->intr_params = FUNC_4(VAR_3) | FUNC_3(VAR_4 > 0);
 return 0;
}
