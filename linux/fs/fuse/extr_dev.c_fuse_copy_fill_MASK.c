
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_buffer {size_t offset; int len; struct page* page; } ;
struct page {int dummy; } ;
struct fuse_copy_state {scalar_t__ nr_segs; size_t offset; int len; int req; int iter; struct page* pg; struct pipe_buffer* pipebufs; struct pipe_buffer* currbuf; TYPE_1__* pipe; int write; } ;
struct TYPE_2__ {scalar_t__ buffers; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (struct fuse_copy_state*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,struct page**,int,int,size_t*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,struct pipe_buffer*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct fuse_copy_state *VAR_4)
{
 struct page *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_7(VAR_4->req);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_4);
 if (VAR_4->pipebufs) {
  struct pipe_buffer *VAR_7 = VAR_4->pipebufs;

  if (!VAR_4->write) {
   VAR_6 = FUNC_6(VAR_4->pipe, VAR_7);
   if (VAR_6)
    return VAR_6;

   FUNC_0(!VAR_4->nr_segs);
   VAR_4->currbuf = VAR_7;
   VAR_4->pg = VAR_7->page;
   VAR_4->offset = VAR_7->offset;
   VAR_4->len = VAR_7->len;
   VAR_4->pipebufs++;
   VAR_4->nr_segs--;
  } else {
   if (VAR_4->nr_segs == VAR_4->pipe->buffers)
    return -VAR_0;

   VAR_5 = FUNC_1(VAR_2);
   if (!VAR_5)
    return -VAR_1;

   VAR_7->page = VAR_5;
   VAR_7->offset = 0;
   VAR_7->len = 0;

   VAR_4->currbuf = VAR_7;
   VAR_4->pg = VAR_5;
   VAR_4->offset = 0;
   VAR_4->len = VAR_3;
   VAR_4->pipebufs++;
   VAR_4->nr_segs++;
  }
 } else {
  size_t VAR_8;
  VAR_6 = FUNC_4(VAR_4->iter, &VAR_5, VAR_3, 1, &VAR_8);
  if (VAR_6 < 0)
   return VAR_6;
  FUNC_0(!VAR_6);
  VAR_4->len = VAR_6;
  VAR_4->offset = VAR_8;
  VAR_4->pg = VAR_5;
  FUNC_3(VAR_4->iter, VAR_6);
 }

 return FUNC_5(VAR_4->req);
}
