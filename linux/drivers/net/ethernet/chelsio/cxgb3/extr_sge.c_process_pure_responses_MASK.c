
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sge_rspq {int cidx; int size; int gen; int credits; int pure_rsps; struct rsp_desc* desc; } ;
struct sge_qset {scalar_t__ txq_stopped; struct sge_rspq rspq; } ;
struct rsp_desc {int flags; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,struct sge_qset*,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sge_qset*,int) ;
 int FUNC_3 (struct rsp_desc*,struct sge_rspq*) ;
 scalar_t__ FUNC_4 (struct rsp_desc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rsp_desc*) ;
 int FUNC_7 (struct adapter*,struct sge_rspq*,int) ;
 int FUNC_8 (struct sge_qset*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct adapter *VAR_2, struct sge_qset *VAR_3,
      struct rsp_desc *VAR_4)
{
 struct sge_rspq *VAR_5 = &VAR_3->rspq;
 unsigned int VAR_6 = 0;

 do {
  u32 VAR_7 = FUNC_5(VAR_4->flags);

  VAR_4++;
  if (FUNC_10(++VAR_5->cidx == VAR_5->size)) {
   VAR_5->cidx = 0;
   VAR_5->gen ^= 1;
   VAR_4 = VAR_5->desc;
  }
  FUNC_6(VAR_4);

  if (VAR_7 & VAR_0) {
   VAR_6 |= VAR_7 & VAR_1;
   FUNC_2(VAR_3, VAR_7);
  }

  VAR_5->pure_rsps++;
  if (++VAR_5->credits >= (VAR_5->size / 4)) {
   FUNC_7(VAR_2, VAR_5, VAR_5->credits);
   VAR_5->credits = 0;
  }
  if (!FUNC_3(VAR_4, VAR_5))
   break;
  FUNC_1();
 } while (FUNC_4(VAR_4));

 if (VAR_6)
  FUNC_0(VAR_2, VAR_3, VAR_6);

 FUNC_9();
 if (FUNC_10(VAR_3->txq_stopped != 0))
  FUNC_8(VAR_3);

 return FUNC_3(VAR_4, VAR_5);
}
