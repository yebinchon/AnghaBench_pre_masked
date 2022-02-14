
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {int nrbufs; int curbuf; int buffers; int fasync_readers; int wait; int waiting_writers; struct page* tmp_page; struct pipe_buffer* bufs; int readers; } ;
struct pipe_buffer {int offset; int len; scalar_t__ flags; int * ops; struct page* page; } ;
struct page {int dummy; } ;
struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct file {int f_flags; struct pipe_inode_info* private_data; } ;
typedef int ssize_t ;
struct TYPE_2__ {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct pipe_inode_info*) ;
 int FUNC_1 (struct pipe_inode_info*) ;
 struct page* FUNC_2 (int) ;
 int VAR_15 ;
 int FUNC_3 (struct page*,int,int,struct iov_iter*) ;
 int VAR_16 ;
 TYPE_1__* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 size_t FUNC_6 (struct iov_iter*) ;
 scalar_t__ FUNC_7 (struct file*) ;
 int FUNC_8 (int *,int ,int ) ;
 int VAR_17 ;
 scalar_t__ FUNC_9 (struct pipe_buffer*) ;
 int FUNC_10 (struct pipe_inode_info*,struct pipe_buffer*) ;
 int FUNC_11 (struct pipe_inode_info*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int *,int) ;

__attribute__((used)) static ssize_t
FUNC_18(struct kiocb *VAR_18, struct iov_iter *VAR_19)
{
 struct file *VAR_20 = VAR_18->ki_filp;
 struct pipe_inode_info *VAR_21 = VAR_20->private_data;
 ssize_t VAR_22 = 0;
 int VAR_23 = 0;
 size_t VAR_24 = FUNC_6(VAR_19);
 ssize_t VAR_25;


 if (FUNC_16(VAR_24 == 0))
  return 0;

 FUNC_0(VAR_21);

 if (!VAR_21->readers) {
  FUNC_14(VAR_13, VAR_16, 0);
  VAR_22 = -VAR_3;
  goto out;
 }


 VAR_25 = VAR_24 & (VAR_9-1);
 if (VAR_21->nrbufs && VAR_25 != 0) {
  int VAR_26 = (VAR_21->curbuf + VAR_21->nrbufs - 1) &
       (VAR_21->buffers - 1);
  struct pipe_buffer *VAR_27 = VAR_21->bufs + VAR_26;
  int VAR_28 = VAR_27->offset + VAR_27->len;

  if (FUNC_9(VAR_27) && VAR_28 + VAR_25 <= VAR_9) {
   VAR_22 = FUNC_10(VAR_21, VAR_27);
   if (VAR_22)
    goto out;

   VAR_22 = FUNC_3(VAR_27->page, VAR_28, VAR_25, VAR_19);
   if (FUNC_16(VAR_22 < VAR_25)) {
    VAR_22 = -VAR_1;
    goto out;
   }
   VAR_23 = 1;
   VAR_27->len += VAR_22;
   if (!FUNC_6(VAR_19))
    goto out;
  }
 }

 for (;;) {
  int VAR_29;

  if (!VAR_21->readers) {
   FUNC_14(VAR_13, VAR_16, 0);
   if (!VAR_22)
    VAR_22 = -VAR_3;
   break;
  }
  VAR_29 = VAR_21->nrbufs;
  if (VAR_29 < VAR_21->buffers) {
   int VAR_30 = (VAR_21->curbuf + VAR_29) & (VAR_21->buffers-1);
   struct pipe_buffer *VAR_31 = VAR_21->bufs + VAR_30;
   struct page *VAR_32 = VAR_21->tmp_page;
   int VAR_33;

   if (!VAR_32) {
    VAR_32 = FUNC_2(VAR_7 | VAR_14);
    if (FUNC_16(!VAR_32)) {
     VAR_22 = VAR_22 ? : -VAR_2;
     break;
    }
    VAR_21->tmp_page = VAR_32;
   }





   VAR_23 = 1;
   VAR_33 = FUNC_3(VAR_32, 0, VAR_9, VAR_19);
   if (FUNC_16(VAR_33 < VAR_9 && FUNC_6(VAR_19))) {
    if (!VAR_22)
     VAR_22 = -VAR_1;
    break;
   }
   VAR_22 += VAR_33;


   VAR_31->page = VAR_32;
   VAR_31->ops = &VAR_15;
   VAR_31->offset = 0;
   VAR_31->len = VAR_33;
   VAR_31->flags = 0;
   if (FUNC_7(VAR_20)) {
    VAR_31->ops = &VAR_17;
    VAR_31->flags = VAR_10;
   }
   VAR_21->nrbufs = ++VAR_29;
   VAR_21->tmp_page = ((void*)0);

   if (!FUNC_6(VAR_19))
    break;
  }
  if (VAR_29 < VAR_21->buffers)
   continue;
  if (VAR_20->f_flags & VAR_8) {
   if (!VAR_22)
    VAR_22 = -VAR_0;
   break;
  }
  if (FUNC_15(VAR_16)) {
   if (!VAR_22)
    VAR_22 = -VAR_6;
   break;
  }
  if (VAR_23) {
   FUNC_17(&VAR_21->wait, VAR_4 | VAR_5);
   FUNC_8(&VAR_21->fasync_readers, VAR_12, VAR_11);
   VAR_23 = 0;
  }
  VAR_21->waiting_writers++;
  FUNC_11(VAR_21);
  VAR_21->waiting_writers--;
 }
out:
 FUNC_1(VAR_21);
 if (VAR_23) {
  FUNC_17(&VAR_21->wait, VAR_4 | VAR_5);
  FUNC_8(&VAR_21->fasync_readers, VAR_12, VAR_11);
 }
 if (VAR_22 > 0 && FUNC_13(FUNC_4(VAR_20)->i_sb)) {
  int VAR_34 = FUNC_5(VAR_20);
  if (VAR_34)
   VAR_22 = VAR_34;
  FUNC_12(FUNC_4(VAR_20)->i_sb);
 }
 return VAR_22;
}
