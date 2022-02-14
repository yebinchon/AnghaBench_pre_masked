
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int nrbufs; int curbuf; int buffers; int fasync_writers; int wait; int waiting_writers; int writers; struct pipe_buffer* bufs; } ;
struct pipe_buffer {size_t len; size_t offset; int flags; int page; } ;
struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct file {int f_flags; struct pipe_inode_info* private_data; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pipe_inode_info*) ;
 int FUNC_1 (struct pipe_inode_info*) ;
 size_t FUNC_2 (int ,size_t,size_t,struct iov_iter*) ;
 int VAR_9 ;
 int FUNC_3 (struct file*) ;
 size_t FUNC_4 (struct iov_iter*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct pipe_inode_info*,struct pipe_buffer*) ;
 int FUNC_7 (struct pipe_inode_info*,struct pipe_buffer*) ;
 int FUNC_8 (struct pipe_inode_info*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static ssize_t
FUNC_12(struct kiocb *VAR_10, struct iov_iter *VAR_11)
{
 size_t VAR_12 = FUNC_4(VAR_11);
 struct file *VAR_13 = VAR_10->ki_filp;
 struct pipe_inode_info *VAR_14 = VAR_13->private_data;
 int VAR_15;
 ssize_t VAR_16;


 if (FUNC_10(VAR_12 == 0))
  return 0;

 VAR_15 = 0;
 VAR_16 = 0;
 FUNC_0(VAR_14);
 for (;;) {
  int VAR_17 = VAR_14->nrbufs;
  if (VAR_17) {
   int VAR_18 = VAR_14->curbuf;
   struct pipe_buffer *VAR_19 = VAR_14->bufs + VAR_18;
   size_t VAR_20 = VAR_19->len;
   size_t VAR_21;
   int VAR_22;

   if (VAR_20 > VAR_12)
    VAR_20 = VAR_12;

   VAR_22 = FUNC_6(VAR_14, VAR_19);
   if (VAR_22) {
    if (!VAR_16)
     VAR_16 = VAR_22;
    break;
   }

   VAR_21 = FUNC_2(VAR_19->page, VAR_19->offset, VAR_20, VAR_11);
   if (FUNC_10(VAR_21 < VAR_20)) {
    if (!VAR_16)
     VAR_16 = -VAR_1;
    break;
   }
   VAR_16 += VAR_20;
   VAR_19->offset += VAR_20;
   VAR_19->len -= VAR_20;


   if (VAR_19->flags & VAR_6) {
    VAR_12 = VAR_20;
    VAR_19->len = 0;
   }

   if (!VAR_19->len) {
    FUNC_7(VAR_14, VAR_19);
    VAR_18 = (VAR_18 + 1) & (VAR_14->buffers - 1);
    VAR_14->curbuf = VAR_18;
    VAR_14->nrbufs = --VAR_17;
    VAR_15 = 1;
   }
   VAR_12 -= VAR_20;
   if (!VAR_12)
    break;
  }
  if (VAR_17)
   continue;
  if (!VAR_14->writers)
   break;
  if (!VAR_14->waiting_writers) {





   if (VAR_16)
    break;
   if (VAR_13->f_flags & VAR_5) {
    VAR_16 = -VAR_0;
    break;
   }
  }
  if (FUNC_9(VAR_9)) {
   if (!VAR_16)
    VAR_16 = -VAR_4;
   break;
  }
  if (VAR_15) {
   FUNC_11(&VAR_14->wait, VAR_2 | VAR_3);
    FUNC_5(&VAR_14->fasync_writers, VAR_8, VAR_7);
  }
  FUNC_8(VAR_14);
 }
 FUNC_1(VAR_14);


 if (VAR_15) {
  FUNC_11(&VAR_14->wait, VAR_2 | VAR_3);
  FUNC_5(&VAR_14->fasync_writers, VAR_8, VAR_7);
 }
 if (VAR_16 > 0)
  FUNC_3(VAR_13);
 return VAR_16;
}
