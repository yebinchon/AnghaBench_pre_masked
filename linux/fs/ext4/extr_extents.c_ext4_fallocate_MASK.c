
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {unsigned int i_blkbits; int i_sb; } ;
struct file {int f_flags; } ;
typedef unsigned int loff_t ;
typedef unsigned int ext4_lblk_t ;
struct TYPE_4__ {unsigned int i_disksize; int i_sync_tid; } ;
struct TYPE_3__ {scalar_t__ s_journal; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 unsigned int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_9 ;
 int FUNC_4 (struct file*,unsigned int,unsigned int,unsigned int,int) ;
 long FUNC_5 (struct inode*,unsigned int,unsigned int) ;
 int FUNC_6 (struct inode*) ;
 long FUNC_7 (struct inode*,unsigned int,unsigned int) ;
 long FUNC_8 (struct inode*,unsigned int,unsigned int) ;
 int FUNC_9 (struct inode*,int ) ;
 long FUNC_10 (struct file*,unsigned int,unsigned int,int) ;
 struct inode* FUNC_11 (struct file*) ;
 unsigned int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,unsigned int) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 (struct inode*,unsigned int,unsigned int,int) ;
 int FUNC_19 (struct inode*,unsigned int,unsigned int,int) ;

long FUNC_20(struct file *VAR_10, int VAR_11, loff_t VAR_12, loff_t VAR_13)
{
 struct inode *VAR_14 = FUNC_11(VAR_10);
 loff_t VAR_15 = 0;
 unsigned int VAR_16;
 int VAR_17 = 0;
 int VAR_18;
 ext4_lblk_t VAR_19;
 unsigned int VAR_20 = VAR_14->i_blkbits;
 if (FUNC_3(VAR_14) &&
     (VAR_11 & (VAR_4 | VAR_5 |
       VAR_8)))
  return -VAR_0;


 if (VAR_11 & ~(VAR_6 | VAR_7 |
       VAR_4 | VAR_8 |
       VAR_5))
  return -VAR_0;

 if (VAR_11 & VAR_7)
  return FUNC_8(VAR_14, VAR_12, VAR_13);

 VAR_17 = FUNC_6(VAR_14);
 if (VAR_17)
  return VAR_17;

 if (VAR_11 & VAR_4)
  return FUNC_5(VAR_14, VAR_12, VAR_13);

 if (VAR_11 & VAR_5)
  return FUNC_7(VAR_14, VAR_12, VAR_13);

 if (VAR_11 & VAR_8)
  return FUNC_10(VAR_10, VAR_12, VAR_13, VAR_11);

 FUNC_18(VAR_14, VAR_12, VAR_13, VAR_11);
 VAR_19 = VAR_12 >> VAR_20;

 VAR_16 = FUNC_1(VAR_13, VAR_12, VAR_20);
 VAR_18 = VAR_1;
 if (VAR_11 & VAR_6)
  VAR_18 |= VAR_2;

 FUNC_14(VAR_14);




 if (!(FUNC_9(VAR_14, VAR_3))) {
  VAR_17 = -VAR_0;
  goto out;
 }

 if (!(VAR_11 & VAR_6) &&
     (VAR_12 + VAR_13 > FUNC_12(VAR_14) ||
      VAR_12 + VAR_13 > FUNC_0(VAR_14)->i_disksize)) {
  VAR_15 = VAR_12 + VAR_13;
  VAR_17 = FUNC_15(VAR_14, VAR_15);
  if (VAR_17)
   goto out;
 }


 FUNC_13(VAR_14);

 VAR_17 = FUNC_4(VAR_10, VAR_19, VAR_16, VAR_15, VAR_18);
 if (VAR_17)
  goto out;

 if (VAR_10->f_flags & VAR_9 && FUNC_2(VAR_14->i_sb)->s_journal) {
  VAR_17 = FUNC_17(FUNC_2(VAR_14->i_sb)->s_journal,
      FUNC_0(VAR_14)->i_sync_tid);
 }
out:
 FUNC_16(VAR_14);
 FUNC_19(VAR_14, VAR_12, VAR_16, VAR_17);
 return VAR_17;
}
