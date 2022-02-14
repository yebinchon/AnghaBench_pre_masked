
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; int i_ctime; int i_mtime; int i_mode; } ;
struct file {int dummy; } ;
typedef scalar_t__ loff_t ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 long FUNC_4 (struct inode*,scalar_t__,scalar_t__,int) ;
 long FUNC_5 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ) ;
 long FUNC_7 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (int ,int ) ;
 long FUNC_11 (struct inode*,scalar_t__,scalar_t__,int) ;
 struct inode* FUNC_12 (struct file*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 long FUNC_15 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_16 (struct inode*,int,scalar_t__,scalar_t__,long) ;
 scalar_t__ FUNC_17 (int ) ;

__attribute__((used)) static long FUNC_18(struct file *VAR_10, int VAR_11,
    loff_t VAR_12, loff_t VAR_13)
{
 struct inode *VAR_14 = FUNC_12(VAR_10);
 long VAR_15 = 0;

 if (FUNC_17(FUNC_6(FUNC_0(VAR_14))))
  return -VAR_1;
 if (!FUNC_8(FUNC_0(VAR_14)))
  return -VAR_2;


 if (!FUNC_2(VAR_14->i_mode))
  return -VAR_0;

 if (FUNC_1(VAR_14) &&
  (VAR_11 & (VAR_4 | VAR_5)))
  return -VAR_3;

 if (VAR_11 & ~(VAR_6 | VAR_7 |
   VAR_4 | VAR_8 |
   VAR_5))
  return -VAR_3;

 FUNC_13(VAR_14);

 if (VAR_11 & VAR_7) {
  if (VAR_12 >= VAR_14->i_size)
   goto out;

  VAR_15 = FUNC_15(VAR_14, VAR_12, VAR_13);
 } else if (VAR_11 & VAR_4) {
  VAR_15 = FUNC_5(VAR_14, VAR_12, VAR_13);
 } else if (VAR_11 & VAR_8) {
  VAR_15 = FUNC_11(VAR_14, VAR_12, VAR_13, VAR_11);
 } else if (VAR_11 & VAR_5) {
  VAR_15 = FUNC_7(VAR_14, VAR_12, VAR_13);
 } else {
  VAR_15 = FUNC_4(VAR_14, VAR_12, VAR_13, VAR_11);
 }

 if (!VAR_15) {
  VAR_14->i_mtime = VAR_14->i_ctime = FUNC_3(VAR_14);
  FUNC_9(VAR_14, 0);
  FUNC_10(FUNC_0(VAR_14), VAR_9);
 }

out:
 FUNC_14(VAR_14);

 FUNC_16(VAR_14, VAR_11, VAR_12, VAR_13, VAR_15);
 return VAR_15;
}
