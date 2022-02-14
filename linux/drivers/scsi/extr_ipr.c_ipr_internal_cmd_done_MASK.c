
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_cmnd {int completion; int * sibling; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ipr_cmnd *VAR_0)
{
 if (VAR_0->sibling)
  VAR_0->sibling = ((void*)0);
 else
  FUNC_0(&VAR_0->completion);
}
