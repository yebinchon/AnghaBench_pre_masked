
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio_submit {scalar_t__ head; scalar_t__ tail; } ;
struct dio {int * pages; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct dio *VAR_0, struct dio_submit *VAR_1)
{
 while (VAR_1->head < VAR_1->tail)
  FUNC_0(VAR_0->pages[VAR_1->head++]);
}
