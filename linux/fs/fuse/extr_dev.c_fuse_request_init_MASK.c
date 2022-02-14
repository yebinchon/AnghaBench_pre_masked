
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int flags; int count; int waitq; int intr_entry; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(struct fuse_req *VAR_1)
{
 FUNC_0(&VAR_1->list);
 FUNC_0(&VAR_1->intr_entry);
 FUNC_2(&VAR_1->waitq);
 FUNC_3(&VAR_1->count, 1);
 FUNC_1(VAR_0, &VAR_1->flags);
}
