
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvumi_tag {scalar_t__ top; scalar_t__ size; unsigned short* stack; } ;
struct mvumi_hba {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mvumi_hba *VAR_0, struct mvumi_tag *VAR_1,
       unsigned short VAR_2)
{
 FUNC_0(VAR_1->top >= VAR_1->size);
 VAR_1->stack[VAR_1->top++] = VAR_2;
}
