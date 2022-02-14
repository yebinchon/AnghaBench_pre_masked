
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saved {int done; } ;
struct nameidata {int depth; struct saved* stack; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nameidata *VAR_0)
{
 int VAR_1 = VAR_0->depth;
 while (VAR_1--) {
  struct saved *VAR_2 = VAR_0->stack + VAR_1;
  FUNC_1(&VAR_2->done);
  FUNC_0(&VAR_2->done);
 }
}
