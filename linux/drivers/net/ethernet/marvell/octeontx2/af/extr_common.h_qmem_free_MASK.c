
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmem {scalar_t__ align; scalar_t__ iova; scalar_t__ base; int alloc_sz; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct qmem*) ;
 int FUNC_1 (struct device*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct device *VAR_0, struct qmem *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->base)
  FUNC_1(VAR_0, VAR_1->alloc_sz,
      VAR_1->base - VAR_1->align,
      VAR_1->iova - VAR_1->align);
 FUNC_0(VAR_0, VAR_1);
}
