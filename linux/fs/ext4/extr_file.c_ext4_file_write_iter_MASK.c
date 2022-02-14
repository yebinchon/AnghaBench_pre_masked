
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_flags; int* private; int ki_pos; int ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int i_sb; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct kiocb*,struct iov_iter*) ;
 int FUNC_3 (struct kiocb*,struct iov_iter*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct inode*,int ,int ) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*,int ) ;
 scalar_t__ FUNC_8 (struct inode*,struct iov_iter*,int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct kiocb*,struct iov_iter*) ;
 struct inode* FUNC_11 (int ) ;
 int FUNC_12 (struct kiocb*,int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct iov_iter*) ;
 int FUNC_17 (struct kiocb*) ;
 scalar_t__ FUNC_18 (int ) ;

__attribute__((used)) static ssize_t
FUNC_19(struct kiocb *VAR_6, struct iov_iter *VAR_7)
{
 struct inode *VAR_8 = FUNC_11(VAR_6->ki_filp);
 int VAR_9 = VAR_6->ki_flags & VAR_4;
 int VAR_10 = 0;
 int VAR_11 = 0;
 ssize_t VAR_12;

 if (FUNC_18(FUNC_4(FUNC_0(VAR_8->i_sb))))
  return -VAR_1;






 if (!FUNC_14(VAR_8)) {
  if (VAR_6->ki_flags & VAR_5)
   return -VAR_0;
  FUNC_13(VAR_8);
 }

 VAR_12 = FUNC_10(VAR_6, VAR_7);
 if (VAR_12 <= 0)
  goto out;






 if (VAR_9 && FUNC_7(VAR_8, VAR_3) &&
     !FUNC_17(VAR_6) &&
     FUNC_8(VAR_8, VAR_7, VAR_6->ki_pos)) {
  VAR_10 = 1;
  FUNC_9(VAR_8);
 }

 VAR_6->private = &VAR_11;

 if (VAR_9 && !VAR_10) {
  if (FUNC_5(VAR_8, VAR_6->ki_pos, FUNC_16(VAR_7))) {
   if (FUNC_6(VAR_8))
    VAR_11 = 1;
  } else if (VAR_6->ki_flags & VAR_5) {
   VAR_12 = -VAR_0;
   goto out;
  }
 }

 VAR_12 = FUNC_2(VAR_6, VAR_7);





 if (VAR_12 == -VAR_2 && VAR_10)
  FUNC_9(VAR_8);
 FUNC_15(VAR_8);

 if (VAR_12 > 0)
  VAR_12 = FUNC_12(VAR_6, VAR_12);

 return VAR_12;

out:
 FUNC_15(VAR_8);
 return VAR_12;
}
