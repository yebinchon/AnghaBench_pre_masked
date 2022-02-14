
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int unique; } ;
struct TYPE_4__ {TYPE_1__ h; } ;
struct fuse_req {TYPE_2__ in; int flags; } ;
struct fuse_iqueue {int lock; scalar_t__ connected; } ;
struct fuse_conn {struct fuse_iqueue iq; } ;
struct fuse_args {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct fuse_req*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct fuse_req*,struct fuse_args*) ;
 struct fuse_req* FUNC_4 (struct fuse_conn*,int) ;
 int FUNC_5 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_6 (struct fuse_iqueue*,struct fuse_req*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct fuse_conn *VAR_2,
        struct fuse_args *VAR_3, u64 VAR_4)
{
 struct fuse_req *VAR_5;
 struct fuse_iqueue *VAR_6 = &VAR_2->iq;
 int VAR_7 = 0;

 VAR_5 = FUNC_4(VAR_2, 0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_2(VAR_1, &VAR_5->flags);
 VAR_5->in.h.unique = VAR_4;

 FUNC_3(VAR_5, VAR_3);

 FUNC_7(&VAR_6->lock);
 if (VAR_6->connected) {
  FUNC_6(VAR_6, VAR_5);
 } else {
  VAR_7 = -VAR_0;
  FUNC_8(&VAR_6->lock);
  FUNC_5(VAR_2, VAR_5);
 }

 return VAR_7;
}
