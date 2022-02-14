
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_ftl {int unstable; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct sm_ftl*) ;

__attribute__((used)) static int FUNC_2(struct sm_ftl *VAR_1)
{
 if (FUNC_1(VAR_1)) {

  if (!VAR_1->unstable) {
   FUNC_0("media unstable, not allowing writes");
   VAR_1->unstable = 1;
  }
  return -VAR_0;
 }
 return 0;
}
