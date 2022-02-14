
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct splice_pipe_desc {unsigned int nr_pages; int (* spd_release ) (struct splice_pipe_desc*,int ) ;int ops; TYPE_1__* partial; int * pages; } ;
struct pipe_inode_info {int nrbufs; int buffers; int curbuf; struct pipe_buffer* bufs; int readers; } ;
struct pipe_buffer {scalar_t__ len; scalar_t__ flags; int ops; int private; int offset; int page; } ;
typedef int ssize_t ;
struct TYPE_2__ {int private; scalar_t__ len; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct splice_pipe_desc*,int ) ;
 scalar_t__ FUNC_2 (int) ;

ssize_t FUNC_3(struct pipe_inode_info *VAR_4,
         struct splice_pipe_desc *VAR_5)
{
 unsigned int VAR_6 = VAR_5->nr_pages;
 int VAR_7 = 0, VAR_8 = 0;

 if (!VAR_6)
  return 0;

 if (FUNC_2(!VAR_4->readers)) {
  FUNC_0(VAR_2, VAR_3, 0);
  VAR_7 = -VAR_1;
  goto out;
 }

 while (VAR_4->nrbufs < VAR_4->buffers) {
  int VAR_9 = (VAR_4->curbuf + VAR_4->nrbufs) & (VAR_4->buffers - 1);
  struct pipe_buffer *VAR_10 = VAR_4->bufs + VAR_9;

  VAR_10->page = VAR_5->pages[VAR_8];
  VAR_10->offset = VAR_5->partial[VAR_8].offset;
  VAR_10->len = VAR_5->partial[VAR_8].len;
  VAR_10->private = VAR_5->partial[VAR_8].private;
  VAR_10->ops = VAR_5->ops;
  VAR_10->flags = 0;

  VAR_4->nrbufs++;
  VAR_8++;
  VAR_7 += VAR_10->len;

  if (!--VAR_5->nr_pages)
   break;
 }

 if (!VAR_7)
  VAR_7 = -VAR_0;

out:
 while (VAR_8 < VAR_6)
  VAR_5->spd_release(VAR_5, VAR_8++);

 return VAR_7;
}
