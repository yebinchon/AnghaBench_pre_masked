
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int flags; int count; } ;
struct fuse_conn {int bg_lock; int blocked_waitq; int blocked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct fuse_conn*) ;
 int FUNC_2 (struct fuse_req*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct fuse_conn *VAR_2, struct fuse_req *VAR_3)
{
 if (FUNC_3(&VAR_3->count)) {
  if (FUNC_6(VAR_0, &VAR_3->flags)) {




   FUNC_4(&VAR_2->bg_lock);
   if (!VAR_2->blocked)
    FUNC_7(&VAR_2->blocked_waitq);
   FUNC_5(&VAR_2->bg_lock);
  }

  if (FUNC_6(VAR_1, &VAR_3->flags)) {
   FUNC_0(VAR_1, &VAR_3->flags);
   FUNC_1(VAR_2);
  }

  FUNC_2(VAR_3);
 }
}
