
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct fuse_req {TYPE_1__ waitq; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct fuse_req *VAR_3)
{
 int VAR_4 = 0;
 if (VAR_3) {
  FUNC_1(&VAR_3->waitq.lock);
  if (FUNC_3(VAR_1, &VAR_3->flags))
   VAR_4 = -VAR_0;
  else
   FUNC_0(VAR_2, &VAR_3->flags);
  FUNC_2(&VAR_3->waitq.lock);
 }
 return VAR_4;
}
