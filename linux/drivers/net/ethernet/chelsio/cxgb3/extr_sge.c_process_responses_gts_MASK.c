
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {int cidx; int next_holdoff; int cntxt_id; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*,int ,int) ;
 int FUNC_4 (struct sge_rspq*) ;
 int FUNC_5 (struct adapter*,int ,int) ;

__attribute__((used)) static inline int FUNC_6(struct adapter *VAR_1,
     struct sge_rspq *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1, FUNC_4(VAR_2), -1);
 FUNC_5(VAR_1, VAR_0, FUNC_2(VAR_2->cntxt_id) |
       FUNC_1(VAR_2->next_holdoff) | FUNC_0(VAR_2->cidx));
 return VAR_3;
}
