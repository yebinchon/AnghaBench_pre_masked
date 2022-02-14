
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sge_rspq {scalar_t__ pktcnt_idx; int intr_params; int cntxt_id; scalar_t__ desc; } ;
struct adapter {int sge; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int) ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;
 unsigned int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (struct adapter*,int,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_8(struct adapter *VAR_3, struct sge_rspq *VAR_4,
          unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;





 if ((VAR_5 | VAR_6) == 0)
  VAR_6 = 1;







 if (VAR_6) {
  int VAR_8;
  u32 VAR_9, VAR_10;

  VAR_10 = FUNC_5(&VAR_3->sge, VAR_6);
  if (VAR_4->desc && VAR_4->pktcnt_idx != VAR_10) {
   VAR_9 = FUNC_0(VAR_0) |
       FUNC_1(
     VAR_1) |
       FUNC_2(VAR_4->cntxt_id);
   VAR_8 = FUNC_7(VAR_3, 1, &VAR_9, &VAR_10);
   if (VAR_8)
    return VAR_8;
  }
  VAR_4->pktcnt_idx = VAR_10;
 }





 VAR_7 = (VAR_5 == 0
       ? VAR_2
       : FUNC_6(&VAR_3->sge, VAR_5));





 VAR_4->intr_params = (FUNC_4(VAR_7) |
        FUNC_3(VAR_6 > 0));
 return 0;
}
