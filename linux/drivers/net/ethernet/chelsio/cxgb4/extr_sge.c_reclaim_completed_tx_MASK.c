
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {int in_use; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,struct sge_txq*,int,int) ;
 int FUNC_1 (struct sge_txq*) ;

__attribute__((used)) static inline int FUNC_2(struct adapter *VAR_1, struct sge_txq *VAR_2,
           int VAR_3, bool VAR_4)
{
 int VAR_5 = FUNC_1(VAR_2);

 if (VAR_5) {




  if (VAR_3 < 0)
   VAR_3 = VAR_0;
  if (VAR_5 > VAR_3)
   VAR_5 = VAR_3;

  FUNC_0(VAR_1, VAR_2, VAR_5, VAR_4);
  VAR_2->in_use -= VAR_5;
 }

 return VAR_5;
}
