
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_io_cq {int head; int q_depth; int phase; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct ena_com_io_cq *VAR_0)
{
 VAR_0->head++;


 if (FUNC_0((VAR_0->head & (VAR_0->q_depth - 1)) == 0))
  VAR_0->phase ^= 1;
}
