
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_buffer {unsigned int offset; unsigned int len; struct page* page; } ;
struct page {int dummy; } ;
struct fuse_copy_state {scalar_t__ nr_segs; scalar_t__ len; struct pipe_buffer* pipebufs; int req; TYPE_1__* pipe; } ;
struct TYPE_2__ {scalar_t__ buffers; } ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_copy_state*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct fuse_copy_state *VAR_1, struct page *VAR_2,
    unsigned VAR_3, unsigned VAR_4)
{
 struct pipe_buffer *VAR_5;
 int VAR_6;

 if (VAR_1->nr_segs == VAR_1->pipe->buffers)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_1->req);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_1);

 VAR_5 = VAR_1->pipebufs;
 FUNC_1(VAR_2);
 VAR_5->page = VAR_2;
 VAR_5->offset = VAR_3;
 VAR_5->len = VAR_4;

 VAR_1->pipebufs++;
 VAR_1->nr_segs++;
 VAR_1->len = 0;

 return 0;
}
