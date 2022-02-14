
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_out_q {int used_buffers; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct qeth_qdio_out_q *VAR_0)
{
 return FUNC_0(&VAR_0->used_buffers) == 0;
}
