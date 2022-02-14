
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_flags; size_t ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct kiocb*,struct iov_iter*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct inode*,struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,size_t,size_t) ;
 int FUNC_7 (struct kiocb*,struct iov_iter*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ,int ,int) ;
 struct inode* FUNC_10 (struct file*) ;
 int FUNC_11 (struct kiocb*,struct iov_iter*) ;
 int FUNC_12 (struct kiocb*,int) ;
 size_t FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;
 size_t FUNC_17 (struct iov_iter*) ;
 scalar_t__ FUNC_18 (struct iov_iter*,size_t) ;
 int FUNC_19 (struct inode*,int ) ;
 int FUNC_20 (struct inode*,size_t,size_t,int) ;
 scalar_t__ FUNC_21 (int ) ;

__attribute__((used)) static ssize_t FUNC_22(struct kiocb *VAR_5, struct iov_iter *VAR_6)
{
 struct file *VAR_7 = VAR_5->ki_filp;
 struct inode *VAR_8 = FUNC_10(VAR_7);
 ssize_t VAR_9;

 if (FUNC_21(FUNC_3(FUNC_0(VAR_8)))) {
  VAR_9 = -VAR_2;
  goto out;
 }

 if (VAR_5->ki_flags & VAR_4) {
  if (!FUNC_15(VAR_8)) {
   VAR_9 = -VAR_1;
   goto out;
  }
 } else {
  FUNC_14(VAR_8);
 }

 VAR_9 = FUNC_11(VAR_5, VAR_6);
 if (VAR_9 > 0) {
  bool VAR_10 = 0;
  size_t VAR_11 = 0;
  int VAR_12;

  if (FUNC_18(VAR_6, FUNC_17(VAR_6)))
   FUNC_19(VAR_8, VAR_3);

  if ((VAR_5->ki_flags & VAR_4)) {
   if (!FUNC_6(VAR_8, VAR_5->ki_pos,
      FUNC_17(VAR_6)) ||
    FUNC_5(VAR_8) ||
    FUNC_4(VAR_8, VAR_5, VAR_6)) {
    FUNC_2(VAR_8, VAR_3);
    FUNC_16(VAR_8);
    VAR_9 = -VAR_1;
    goto out;
   }
  } else {
   VAR_10 = 1;
   VAR_11 = VAR_5->ki_pos + FUNC_17(VAR_6);

   VAR_12 = FUNC_7(VAR_5, VAR_6);
   if (VAR_12) {
    FUNC_2(VAR_8, VAR_3);
    FUNC_16(VAR_8);
    VAR_9 = VAR_12;
    goto out;
   }
  }
  VAR_9 = FUNC_1(VAR_5, VAR_6);
  FUNC_2(VAR_8, VAR_3);


  if (VAR_10 && FUNC_13(VAR_8) < VAR_11)
   FUNC_8(VAR_8);

  if (VAR_9 > 0)
   FUNC_9(FUNC_0(VAR_8), VAR_0, VAR_9);
 }
 FUNC_16(VAR_8);
out:
 FUNC_20(VAR_8, VAR_5->ki_pos,
     FUNC_17(VAR_6), VAR_9);
 if (VAR_9 > 0)
  VAR_9 = FUNC_12(VAR_5, VAR_9);
 return VAR_9;
}
