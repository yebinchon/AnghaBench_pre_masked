
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_xattrs {int lock; int head; } ;
struct simple_xattr {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct simple_xattrs *VAR_0,
      struct simple_xattr *VAR_1)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(&VAR_1->list, &VAR_0->head);
 FUNC_2(&VAR_0->lock);
}
