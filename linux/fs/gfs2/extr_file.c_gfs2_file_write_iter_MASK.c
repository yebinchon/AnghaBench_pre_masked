
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_pos; int ki_flags; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int * backing_dev_info; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 struct inode* FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (struct address_space*,int,int) ;
 scalar_t__ FUNC_5 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_6 (struct kiocb*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct kiocb*,struct iov_iter*) ;
 int FUNC_8 (struct gfs2_holder*) ;
 scalar_t__ FUNC_9 (int ,int ,int ,struct gfs2_holder*) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (struct gfs2_inode*) ;
 int FUNC_11 (struct file*,int,int ) ;
 int FUNC_12 (struct inode*) ;
 int * FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct address_space*,int,int) ;
 scalar_t__ FUNC_16 (struct kiocb*,struct iov_iter*,int *) ;
 int FUNC_17 (struct iov_iter*) ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static ssize_t FUNC_20(struct kiocb *VAR_6, struct iov_iter *VAR_7)
{
 struct file *VAR_8 = VAR_6->ki_filp;
 struct inode *VAR_9 = FUNC_1(VAR_8);
 struct gfs2_inode *VAR_10 = FUNC_0(VAR_9);
 ssize_t VAR_11 = 0, VAR_12;

 VAR_12 = FUNC_10(VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_11(VAR_8, VAR_6->ki_pos, FUNC_17(VAR_7));

 if (VAR_6->ki_flags & VAR_0) {
  struct gfs2_holder VAR_13;

  VAR_12 = FUNC_9(VAR_10->i_gl, VAR_2, 0, &VAR_13);
  if (VAR_12)
   return VAR_12;
  FUNC_8(&VAR_13);
 }

 FUNC_12(VAR_9);
 VAR_12 = FUNC_5(VAR_6, VAR_7);
 if (VAR_12 <= 0)
  goto out;


 VAR_4->backing_dev_info = FUNC_13(VAR_9);

 VAR_12 = FUNC_2(VAR_8);
 if (VAR_12)
  goto out2;

 VAR_12 = FUNC_3(VAR_8);
 if (VAR_12)
  goto out2;

 if (VAR_6->ki_flags & VAR_1) {
  struct address_space *VAR_14 = VAR_8->f_mapping;
  loff_t VAR_15, VAR_16;
  ssize_t VAR_17;

  VAR_11 = FUNC_7(VAR_6, VAR_7);
  if (VAR_11 < 0 || !FUNC_17(VAR_7))
   goto out2;

  VAR_12 = FUNC_16(VAR_6, VAR_7, &VAR_5);
  if (FUNC_19(VAR_12 < 0))
   goto out2;
  VAR_17 = VAR_12;






  VAR_15 = VAR_6->ki_pos;
  VAR_16 = VAR_15 + VAR_17 - 1;
  VAR_12 = FUNC_4(VAR_14, VAR_15, VAR_16);
  if (!VAR_12) {
   VAR_6->ki_pos += VAR_17;
   VAR_11 += VAR_17;
   FUNC_15(VAR_14,
       VAR_15 >> VAR_3,
       VAR_16 >> VAR_3);
  } else {




  }
 } else {
  VAR_12 = FUNC_16(VAR_6, VAR_7, &VAR_5);
  if (FUNC_18(VAR_12 > 0))
   VAR_6->ki_pos += VAR_12;
 }

out2:
 VAR_4->backing_dev_info = ((void*)0);
out:
 FUNC_14(VAR_9);
 if (FUNC_18(VAR_12 > 0)) {

  VAR_12 = FUNC_6(VAR_6, VAR_12);
 }
 return VAR_11 ? VAR_11 : VAR_12;
}
