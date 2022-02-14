
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvumi_tag {size_t top; unsigned short* stack; } ;
struct mvumi_hba {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static unsigned short FUNC_1(struct mvumi_hba *VAR_0, struct mvumi_tag *VAR_1)
{
 FUNC_0(VAR_1->top <= 0);
 return VAR_1->stack[--VAR_1->top];
}
