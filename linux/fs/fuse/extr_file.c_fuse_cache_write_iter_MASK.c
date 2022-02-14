
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {int ki_flags; int ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;
struct TYPE_4__ {int * backing_dev_info; } ;
struct TYPE_3__ {scalar_t__ writeback_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_0 (struct file*) ;
 scalar_t__ FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (struct address_space*,int,int) ;
 scalar_t__ FUNC_3 (struct kiocb*,struct address_space*,struct iov_iter*,int) ;
 scalar_t__ FUNC_4 (struct inode*,struct file*) ;
 scalar_t__ FUNC_5 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_6 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_7 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_8 (struct kiocb*,scalar_t__) ;
 TYPE_1__* FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int * FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct address_space*,int,int) ;
 int FUNC_14 (struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_15(struct kiocb *VAR_3, struct iov_iter *VAR_4)
{
 struct file *VAR_5 = VAR_3->ki_filp;
 struct address_space *VAR_6 = VAR_5->f_mapping;
 ssize_t VAR_7 = 0;
 ssize_t VAR_8 = 0;
 struct inode *VAR_9 = VAR_6->host;
 ssize_t VAR_10;
 loff_t VAR_11 = 0;

 if (FUNC_9(VAR_9)->writeback_cache) {

  VAR_10 = FUNC_4(VAR_6->host, VAR_5);
  if (VAR_10)
   return VAR_10;

  return FUNC_6(VAR_3, VAR_4);
 }

 FUNC_10(VAR_9);


 VAR_2->backing_dev_info = FUNC_11(VAR_9);

 VAR_10 = FUNC_7(VAR_3, VAR_4);
 if (VAR_10 <= 0)
  goto out;

 VAR_10 = FUNC_0(VAR_5);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_1(VAR_5);
 if (VAR_10)
  goto out;

 if (VAR_3->ki_flags & VAR_0) {
  loff_t VAR_12 = VAR_3->ki_pos;
  VAR_7 = FUNC_5(VAR_3, VAR_4);
  if (VAR_7 < 0 || !FUNC_14(VAR_4))
   goto out;

  VAR_12 += VAR_7;

  VAR_8 = FUNC_3(VAR_3, VAR_6, VAR_4, VAR_12);
  if (VAR_8 < 0) {
   VAR_10 = VAR_8;
   goto out;
  }
  VAR_11 = VAR_12 + VAR_8 - 1;

  VAR_10 = FUNC_2(VAR_5->f_mapping, VAR_12,
         VAR_11);
  if (VAR_10)
   goto out;

  FUNC_13(VAR_5->f_mapping,
      VAR_12 >> VAR_1,
      VAR_11 >> VAR_1);

  VAR_7 += VAR_8;
  VAR_3->ki_pos = VAR_12 + VAR_8;
 } else {
  VAR_7 = FUNC_3(VAR_3, VAR_6, VAR_4, VAR_3->ki_pos);
  if (VAR_7 >= 0)
   VAR_3->ki_pos += VAR_7;
 }
out:
 VAR_2->backing_dev_info = ((void*)0);
 FUNC_12(VAR_9);
 if (VAR_7 > 0)
  VAR_7 = FUNC_8(VAR_3, VAR_7);

 return VAR_7 ? VAR_7 : VAR_10;
}
