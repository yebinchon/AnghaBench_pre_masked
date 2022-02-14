
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {unsigned int iqe_len; unsigned int size; struct adapter* adap; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct sge_rspq*,unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct adapter *VAR_0, struct sge_rspq *VAR_1,
        unsigned int VAR_2, unsigned int VAR_3,
        unsigned int VAR_4, unsigned int VAR_5)
{
 VAR_1->adap = VAR_0;
 FUNC_0(VAR_1, VAR_2, VAR_3);
 VAR_1->iqe_len = VAR_5;
 VAR_1->size = VAR_4;
}
