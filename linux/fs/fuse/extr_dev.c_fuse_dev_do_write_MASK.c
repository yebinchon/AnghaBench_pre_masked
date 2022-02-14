
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fuse_out_header {size_t len; int unique; int error; } ;
struct TYPE_3__ {struct fuse_out_header h; } ;
struct fuse_req {int list; int flags; TYPE_1__ out; TYPE_2__* args; } ;
struct fuse_pqueue {int lock; scalar_t__ connected; int io; } ;
struct fuse_dev {struct fuse_pqueue pq; struct fuse_conn* fc; } ;
struct fuse_copy_state {scalar_t__ move_pages; struct fuse_req* req; } ;
struct fuse_conn {int no_interrupt; int iq; } ;
typedef int ssize_t ;
typedef int oh ;
struct TYPE_4__ {int page_replace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct fuse_copy_state*,TYPE_2__*,size_t) ;
 int FUNC_3 (struct fuse_copy_state*) ;
 int FUNC_4 (struct fuse_copy_state*,struct fuse_out_header*,int) ;
 int FUNC_5 (struct fuse_conn*,int,size_t,struct fuse_copy_state*) ;
 int FUNC_6 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_7 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,struct fuse_req*) ;
 struct fuse_req* FUNC_11 (struct fuse_pqueue*,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_16(struct fuse_dev *VAR_9,
     struct fuse_copy_state *VAR_10, size_t VAR_11)
{
 int VAR_12;
 struct fuse_conn *VAR_13 = VAR_9->fc;
 struct fuse_pqueue *VAR_14 = &VAR_9->pq;
 struct fuse_req *VAR_15;
 struct fuse_out_header VAR_16;

 VAR_12 = -VAR_1;
 if (VAR_11 < sizeof(struct fuse_out_header))
  goto out;

 VAR_12 = FUNC_4(VAR_10, &VAR_16, sizeof(VAR_16));
 if (VAR_12)
  goto copy_finish;

 VAR_12 = -VAR_1;
 if (VAR_16.len != VAR_11)
  goto copy_finish;





 if (!VAR_16.unique) {
  VAR_12 = FUNC_5(VAR_13, VAR_16.error, VAR_11 - sizeof(VAR_16), VAR_10);
  goto out;
 }

 VAR_12 = -VAR_1;
 if (VAR_16.error <= -1000 || VAR_16.error > 0)
  goto copy_finish;

 FUNC_13(&VAR_14->lock);
 VAR_15 = ((void*)0);
 if (VAR_14->connected)
  VAR_15 = FUNC_11(VAR_14, VAR_16.unique & ~VAR_8);

 VAR_12 = -VAR_3;
 if (!VAR_15) {
  FUNC_14(&VAR_14->lock);
  goto copy_finish;
 }


 if (VAR_16.unique & VAR_8) {
  FUNC_0(VAR_15);
  FUNC_14(&VAR_14->lock);

  VAR_12 = 0;
  if (VAR_11 != sizeof(struct fuse_out_header))
   VAR_12 = -VAR_1;
  else if (VAR_16.error == -VAR_4)
   VAR_13->no_interrupt = 1;
  else if (VAR_16.error == -VAR_0)
   VAR_12 = FUNC_10(&VAR_13->iq, VAR_15);

  FUNC_6(VAR_13, VAR_15);

  goto copy_finish;
 }

 FUNC_1(VAR_7, &VAR_15->flags);
 FUNC_9(&VAR_15->list, &VAR_14->io);
 VAR_15->out.h = VAR_16;
 FUNC_12(VAR_5, &VAR_15->flags);
 FUNC_14(&VAR_14->lock);
 VAR_10->req = VAR_15;
 if (!VAR_15->args->page_replace)
  VAR_10->move_pages = 0;

 if (VAR_16.error)
  VAR_12 = VAR_11 != sizeof(VAR_16) ? -VAR_1 : 0;
 else
  VAR_12 = FUNC_2(VAR_10, VAR_15->args, VAR_11);
 FUNC_3(VAR_10);

 FUNC_13(&VAR_14->lock);
 FUNC_1(VAR_5, &VAR_15->flags);
 if (!VAR_14->connected)
  VAR_12 = -VAR_3;
 else if (VAR_12)
  VAR_15->out.h.error = -VAR_2;
 if (!FUNC_15(VAR_6, &VAR_15->flags))
  FUNC_8(&VAR_15->list);
 FUNC_14(&VAR_14->lock);

 FUNC_7(VAR_13, VAR_15);
out:
 return VAR_12 ? VAR_12 : VAR_11;

copy_finish:
 FUNC_3(VAR_10);
 goto out;
}
