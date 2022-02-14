
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int unique; } ;
struct TYPE_8__ {TYPE_3__ h; } ;
struct TYPE_5__ {int error; } ;
struct TYPE_6__ {TYPE_1__ h; } ;
struct fuse_req {TYPE_4__ in; TYPE_2__ out; int flags; } ;
struct fuse_iqueue {int lock; int connected; } ;
struct fuse_conn {struct fuse_iqueue iq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fuse_req*) ;
 int FUNC_2 (struct fuse_iqueue*) ;
 int FUNC_3 (struct fuse_iqueue*,struct fuse_req*) ;
 int FUNC_4 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct fuse_conn *VAR_2, struct fuse_req *VAR_3)
{
 struct fuse_iqueue *VAR_4 = &VAR_2->iq;

 FUNC_0(FUNC_8(VAR_1, &VAR_3->flags));
 FUNC_6(&VAR_4->lock);
 if (!VAR_4->connected) {
  FUNC_7(&VAR_4->lock);
  VAR_3->out.h.error = -VAR_0;
 } else {
  VAR_3->in.h.unique = FUNC_2(VAR_4);


  FUNC_1(VAR_3);
  FUNC_3(VAR_4, VAR_3);

  FUNC_4(VAR_2, VAR_3);

  FUNC_5();
 }
}
