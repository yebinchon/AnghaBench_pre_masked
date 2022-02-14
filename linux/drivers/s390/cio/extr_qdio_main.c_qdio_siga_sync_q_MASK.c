
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_q {int mask; scalar_t__ is_input_q; } ;


 int FUNC_0 (struct qdio_q*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct qdio_q *VAR_0)
{
 if (VAR_0->is_input_q)
  return FUNC_0(VAR_0, 0, VAR_0->mask);
 else
  return FUNC_0(VAR_0, VAR_0->mask, 0);
}
