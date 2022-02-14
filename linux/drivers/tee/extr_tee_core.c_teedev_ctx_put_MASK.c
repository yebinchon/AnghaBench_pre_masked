
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_context {int refcount; scalar_t__ releasing; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

void FUNC_1(struct tee_context *VAR_1)
{
 if (VAR_1->releasing)
  return;

 FUNC_0(&VAR_1->refcount, VAR_0);
}
