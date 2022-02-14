
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pipe_buffer {scalar_t__ len; int flags; int offset; struct page* page; } ;
struct page {int dummy; } ;
struct fuse_copy_state {scalar_t__ len; TYPE_2__* req; int offset; struct page* pg; int pipe; int nr_segs; struct pipe_buffer* pipebufs; struct pipe_buffer* currbuf; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_5__ {TYPE_1__ waitq; int flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (struct fuse_copy_state*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (int ,struct pipe_buffer*) ;
 scalar_t__ FUNC_16 (int ,struct pipe_buffer*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*,struct page*,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int ,int *) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_24(struct fuse_copy_state *VAR_5, struct page **VAR_6)
{
 int VAR_7;
 struct page *VAR_8 = *VAR_6;
 struct page *VAR_9;
 struct pipe_buffer *VAR_10 = VAR_5->pipebufs;

 VAR_7 = FUNC_23(VAR_5->req);
 if (VAR_7)
  return VAR_7;

 FUNC_9(VAR_5);

 VAR_7 = FUNC_15(VAR_5->pipe, VAR_10);
 if (VAR_7)
  return VAR_7;

 FUNC_0(!VAR_5->nr_segs);
 VAR_5->currbuf = VAR_10;
 VAR_5->len = VAR_10->len;
 VAR_5->pipebufs++;
 VAR_5->nr_segs--;

 if (VAR_5->len != VAR_3)
  goto out_fallback;

 if (FUNC_16(VAR_5->pipe, VAR_10) != 0)
  goto out_fallback;

 VAR_9 = VAR_10->page;

 if (!FUNC_4(VAR_9))
  FUNC_6(VAR_9);

 FUNC_1(VAR_9);

 if (FUNC_8(VAR_9) != 0)
  goto out_fallback_unlock;





 if (FUNC_7(FUNC_14(VAR_8)))
  goto out_fallback_unlock;
 if (FUNC_7(FUNC_13(VAR_8)))
  goto out_fallback_unlock;
 if (FUNC_7(FUNC_2(VAR_8) || FUNC_5(VAR_8)))
  goto out_fallback_unlock;
 if (FUNC_7(FUNC_3(VAR_8)))
  goto out_fallback_unlock;

 VAR_7 = FUNC_18(VAR_8, VAR_9, VAR_2);
 if (VAR_7) {
  FUNC_22(VAR_9);
  return VAR_7;
 }

 FUNC_10(VAR_9);

 if (!(VAR_10->flags & VAR_4))
  FUNC_12(VAR_9);

 VAR_7 = 0;
 FUNC_19(&VAR_5->req->waitq.lock);
 if (FUNC_21(VAR_1, &VAR_5->req->flags))
  VAR_7 = -VAR_0;
 else
  *VAR_6 = VAR_9;
 FUNC_20(&VAR_5->req->waitq.lock);

 if (VAR_7) {
  FUNC_22(VAR_9);
  FUNC_17(VAR_9);
  return VAR_7;
 }

 FUNC_22(VAR_8);
 FUNC_17(VAR_8);
 VAR_5->len = 0;

 return 0;

out_fallback_unlock:
 FUNC_22(VAR_9);
out_fallback:
 VAR_5->pg = VAR_10->page;
 VAR_5->offset = VAR_10->offset;

 VAR_7 = FUNC_11(VAR_5->req);
 if (VAR_7)
  return VAR_7;

 return 1;
}
