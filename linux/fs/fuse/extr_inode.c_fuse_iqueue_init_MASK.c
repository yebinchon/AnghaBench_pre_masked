
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_iqueue_ops {int dummy; } ;
struct fuse_iqueue {int connected; void* priv; struct fuse_iqueue_ops const* ops; int forget_list_head; int * forget_list_tail; int interrupts; int pending; int waitq; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fuse_iqueue*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct fuse_iqueue *VAR_0,
        const struct fuse_iqueue_ops *VAR_1,
        void *VAR_2)
{
 FUNC_2(VAR_0, 0, sizeof(struct fuse_iqueue));
 FUNC_3(&VAR_0->lock);
 FUNC_1(&VAR_0->waitq);
 FUNC_0(&VAR_0->pending);
 FUNC_0(&VAR_0->interrupts);
 VAR_0->forget_list_tail = &VAR_0->forget_list_head;
 VAR_0->connected = 1;
 VAR_0->ops = VAR_1;
 VAR_0->priv = VAR_2;
}
