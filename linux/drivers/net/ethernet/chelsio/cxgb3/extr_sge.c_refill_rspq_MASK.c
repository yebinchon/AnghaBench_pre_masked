
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {int cntxt_id; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct adapter*,int ,int) ;

__attribute__((used)) static inline void FUNC_4(struct adapter *VAR_1,
          const struct sge_rspq *VAR_2, unsigned int VAR_3)
{
 FUNC_2();
 FUNC_3(VAR_1, VAR_0,
       FUNC_1(VAR_2->cntxt_id) | FUNC_0(VAR_3));
}
