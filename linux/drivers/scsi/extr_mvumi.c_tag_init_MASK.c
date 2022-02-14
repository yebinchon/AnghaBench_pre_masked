
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvumi_tag {unsigned short size; unsigned short top; unsigned short* stack; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mvumi_tag *VAR_0, unsigned short VAR_1)
{
 unsigned short VAR_2;
 FUNC_0(VAR_1 != VAR_0->size);
 VAR_0->top = VAR_1;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_0->stack[VAR_2] = VAR_1 - 1 - VAR_2;
}
