
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saved {int link; int done; } ;
struct nameidata {int depth; int flags; struct saved* stack; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct nameidata *VAR_1)
{
 struct saved *VAR_2 = VAR_1->stack + --VAR_1->depth;
 FUNC_0(&VAR_2->done);
 if (!(VAR_1->flags & VAR_0))
  FUNC_1(&VAR_2->link);
}
