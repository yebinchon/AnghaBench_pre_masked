
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enic {TYPE_1__* bar; } ;
struct TYPE_2__ {scalar_t__ vaddr; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct enic *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->bar); VAR_1++)
  if (VAR_0->bar[VAR_1].vaddr)
   FUNC_1(VAR_0->bar[VAR_1].vaddr);
}
