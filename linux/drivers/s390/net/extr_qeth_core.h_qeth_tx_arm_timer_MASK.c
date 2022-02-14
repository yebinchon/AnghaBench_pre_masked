
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_out_q {int timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct qeth_qdio_out_q *VAR_2)
{
 if (FUNC_1(&VAR_2->timer))
  return;
 FUNC_0(&VAR_2->timer, FUNC_2(VAR_0) +
     VAR_1);
}
