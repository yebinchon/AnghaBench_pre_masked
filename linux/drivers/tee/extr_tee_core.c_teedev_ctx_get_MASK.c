
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_context {int refcount; scalar_t__ releasing; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct tee_context *VAR_0)
{
 if (VAR_0->releasing)
  return;

 FUNC_0(&VAR_0->refcount);
}
