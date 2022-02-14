
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int flags; int depth; int root; TYPE_1__* stack; int path; } ;
struct TYPE_2__ {int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nameidata*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct nameidata *VAR_2)
{
 FUNC_0(VAR_2);
 if (!(VAR_2->flags & VAR_0)) {
  int VAR_3;
  FUNC_1(&VAR_2->path);
  for (VAR_3 = 0; VAR_3 < VAR_2->depth; VAR_3++)
   FUNC_1(&VAR_2->stack[VAR_3].link);
  if (VAR_2->flags & VAR_1) {
   FUNC_1(&VAR_2->root);
   VAR_2->flags &= ~VAR_1;
  }
 } else {
  VAR_2->flags &= ~VAR_0;
  FUNC_2();
 }
 VAR_2->depth = 0;
}
