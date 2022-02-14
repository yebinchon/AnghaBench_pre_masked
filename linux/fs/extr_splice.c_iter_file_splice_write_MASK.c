
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct file* file; } ;
struct splice_desc {size_t total_len; unsigned int flags; scalar_t__ num_spliced; int need_wakeup; int pos; TYPE_1__ u; } ;
struct pipe_inode_info {int buffers; int curbuf; int nrbufs; scalar_t__ files; struct pipe_buffer* bufs; } ;
struct pipe_buffer {size_t len; int offset; int page; } ;
struct iov_iter {int dummy; } ;
struct file {int dummy; } ;
struct bio_vec {size_t bv_len; int bv_offset; int bv_page; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iov_iter*,int ,struct bio_vec*,int,size_t) ;
 struct bio_vec* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct bio_vec*) ;
 scalar_t__ FUNC_3 (struct pipe_inode_info*,struct pipe_buffer*) ;
 int FUNC_4 (struct pipe_inode_info*,struct pipe_buffer*) ;
 int FUNC_5 (struct pipe_inode_info*) ;
 int FUNC_6 (struct pipe_inode_info*) ;
 int FUNC_7 (struct splice_desc*) ;
 int FUNC_8 (struct pipe_inode_info*,struct splice_desc*) ;
 scalar_t__ FUNC_9 (struct pipe_inode_info*,struct splice_desc*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (struct file*,struct iov_iter*,int *,int ) ;

ssize_t
FUNC_12(struct pipe_inode_info *VAR_4, struct file *VAR_5,
     loff_t *VAR_6, size_t VAR_7, unsigned int VAR_8)
{
 struct splice_desc VAR_9 = {
  .total_len = VAR_7,
  .flags = VAR_8,
  .pos = *VAR_6,
  .u.file = VAR_5,
 };
 int VAR_10 = VAR_4->buffers;
 struct bio_vec *VAR_11 = FUNC_1(VAR_10, sizeof(struct bio_vec),
     VAR_2);
 ssize_t VAR_12;

 if (FUNC_10(!VAR_11))
  return -VAR_1;

 FUNC_5(VAR_4);

 FUNC_7(&VAR_9);
 while (VAR_9.total_len) {
  struct iov_iter VAR_13;
  size_t VAR_14;
  int VAR_15, VAR_16;

  VAR_12 = FUNC_9(VAR_4, &VAR_9);
  if (VAR_12 <= 0)
   break;

  if (FUNC_10(VAR_10 < VAR_4->buffers)) {
   FUNC_2(VAR_11);
   VAR_10 = VAR_4->buffers;
   VAR_11 = FUNC_1(VAR_10, sizeof(struct bio_vec),
     VAR_2);
   if (!VAR_11) {
    VAR_12 = -VAR_1;
    break;
   }
  }


  VAR_14 = VAR_9.total_len;
  for (VAR_15 = 0, VAR_16 = VAR_4->curbuf; VAR_14 && VAR_15 < VAR_4->nrbufs; VAR_15++, VAR_16++) {
   struct pipe_buffer *VAR_17 = VAR_4->bufs + VAR_16;
   size_t VAR_18 = VAR_17->len;

   if (VAR_18 > VAR_14)
    VAR_18 = VAR_14;

   if (VAR_16 == VAR_4->buffers - 1)
    VAR_16 = -1;

   VAR_12 = FUNC_3(VAR_4, VAR_17);
   if (FUNC_10(VAR_12)) {
    if (VAR_12 == -VAR_0)
     VAR_12 = 0;
    goto done;
   }

   VAR_11[VAR_15].bv_page = VAR_17->page;
   VAR_11[VAR_15].bv_len = VAR_18;
   VAR_11[VAR_15].bv_offset = VAR_17->offset;
   VAR_14 -= VAR_18;
  }

  FUNC_0(&VAR_13, VAR_3, VAR_11, VAR_15, VAR_9.total_len - VAR_14);
  VAR_12 = FUNC_11(VAR_5, &VAR_13, &VAR_9.pos, 0);
  if (VAR_12 <= 0)
   break;

  VAR_9.num_spliced += VAR_12;
  VAR_9.total_len -= VAR_12;
  *VAR_6 = VAR_9.pos;


  while (VAR_12) {
   struct pipe_buffer *VAR_19 = VAR_4->bufs + VAR_4->curbuf;
   if (VAR_12 >= VAR_19->len) {
    VAR_12 -= VAR_19->len;
    VAR_19->len = 0;
    FUNC_4(VAR_4, VAR_19);
    VAR_4->curbuf = (VAR_4->curbuf + 1) & (VAR_4->buffers - 1);
    VAR_4->nrbufs--;
    if (VAR_4->files)
     VAR_9.need_wakeup = 1;
   } else {
    VAR_19->offset += VAR_12;
    VAR_19->len -= VAR_12;
    VAR_12 = 0;
   }
  }
 }
done:
 FUNC_2(VAR_11);
 FUNC_8(VAR_4, &VAR_9);

 FUNC_6(VAR_4);

 if (VAR_9.num_spliced)
  VAR_12 = VAR_9.num_spliced;

 return VAR_12;
}
