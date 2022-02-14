
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {unsigned int i_blkbits; void* i_ctime; void* i_mtime; int i_sb; int i_mode; } ;
struct file {int f_flags; } ;
typedef int loff_t ;
typedef int handle_t ;
typedef unsigned int ext4_lblk_t ;
struct TYPE_2__ {int i_disksize; int i_mmap_sem; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct file*,unsigned int,unsigned int,int,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (struct inode*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct inode*) ;
 int FUNC_14 (struct inode*,int ) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (struct inode*,int ) ;
 int FUNC_18 (struct inode*,int,int) ;
 int FUNC_19 (int *,struct inode*,int) ;
 int FUNC_20 (struct inode*,int) ;
 int FUNC_21 (int *,struct inode*,int,int) ;
 struct inode* FUNC_22 (struct file*) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (struct inode*,int) ;
 int FUNC_27 (struct inode*) ;
 unsigned int FUNC_28 (int,int) ;
 unsigned int FUNC_29 (int,int) ;
 int FUNC_30 (struct inode*,int,int,int) ;
 int FUNC_31 (struct inode*,int,int) ;
 int FUNC_32 (int *) ;

__attribute__((used)) static long FUNC_33(struct file *VAR_11, loff_t VAR_12,
       loff_t VAR_13, int VAR_14)
{
 struct inode *VAR_15 = FUNC_22(VAR_11);
 handle_t *VAR_16 = ((void*)0);
 unsigned int VAR_17;
 loff_t VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20;
 int VAR_21;
 int VAR_22, VAR_23;
 loff_t VAR_24, VAR_25;
 ext4_lblk_t VAR_26;
 unsigned int VAR_27 = VAR_15->i_blkbits;

 FUNC_30(VAR_15, VAR_12, VAR_13, VAR_14);

 if (!FUNC_3(VAR_15->i_mode))
  return -VAR_0;


 if (FUNC_15(VAR_15)) {
  VAR_19 = FUNC_9(VAR_15->i_sb);
  if (VAR_19)
   return VAR_19;
 }







 VAR_24 = FUNC_29(VAR_12, 1 << VAR_27);
 VAR_25 = FUNC_28((VAR_12 + VAR_13), 1 << VAR_27);

 if (VAR_24 < VAR_12 || VAR_25 > VAR_12 + VAR_13)
  return -VAR_0;
 VAR_22 = VAR_12 & ((1 << VAR_27) - 1);
 VAR_23 = (VAR_12 + VAR_13) & ((1 << VAR_27) - 1);

 VAR_26 = VAR_24 >> VAR_27;
 VAR_17 = (VAR_25 >> VAR_27);
 if (VAR_17 < VAR_26)
  VAR_17 = 0;
 else
  VAR_17 -= VAR_26;

 FUNC_25(VAR_15);




 if (!(FUNC_17(VAR_15, VAR_8))) {
  VAR_19 = -VAR_1;
  goto out_mutex;
 }

 if (!(VAR_14 & VAR_9) &&
     (VAR_12 + VAR_13 > FUNC_23(VAR_15) ||
      VAR_12 + VAR_13 > FUNC_0(VAR_15)->i_disksize)) {
  VAR_18 = VAR_12 + VAR_13;
  VAR_19 = FUNC_26(VAR_15, VAR_18);
  if (VAR_19)
   goto out_mutex;
 }

 VAR_20 = VAR_4;
 if (VAR_14 & VAR_9)
  VAR_20 |= VAR_5;


 FUNC_24(VAR_15);


 if (VAR_22 || VAR_23) {
  VAR_19 = FUNC_6(VAR_11,
    FUNC_28(VAR_12, 1 << VAR_27) >> VAR_27,
    (FUNC_29((VAR_12 + VAR_13), 1 << VAR_27) -
     FUNC_28(VAR_12, 1 << VAR_27)) >> VAR_27,
    VAR_18, VAR_20);
  if (VAR_19)
   goto out_mutex;

 }


 if (VAR_17 > 0) {
  VAR_20 |= (VAR_3 |
     VAR_2);





  FUNC_5(&FUNC_0(VAR_15)->i_mmap_sem);

  VAR_19 = FUNC_7(VAR_15);
  if (VAR_19) {
   FUNC_32(&FUNC_0(VAR_15)->i_mmap_sem);
   goto out_mutex;
  }

  VAR_19 = FUNC_18(VAR_15, VAR_12, VAR_13);
  if (VAR_19) {
   FUNC_32(&FUNC_0(VAR_15)->i_mmap_sem);
   goto out_mutex;
  }

  FUNC_31(VAR_15, VAR_24, VAR_25 - 1);
  VAR_15->i_mtime = VAR_15->i_ctime = FUNC_4(VAR_15);

  VAR_19 = FUNC_6(VAR_11, VAR_26, VAR_17, VAR_18,
          VAR_20);
  FUNC_32(&FUNC_0(VAR_15)->i_mmap_sem);
  if (VAR_19)
   goto out_mutex;
 }
 if (!VAR_22 && !VAR_23)
  goto out_mutex;





 VAR_21 = (2 * FUNC_8(VAR_15, 2)) + 1;
 if (FUNC_15(VAR_15))
  VAR_21 += 2;
 VAR_16 = FUNC_11(VAR_15, VAR_6, VAR_21);
 if (FUNC_1(VAR_16)) {
  VAR_19 = FUNC_2(VAR_16);
  FUNC_16(VAR_15->i_sb, VAR_19);
  goto out_mutex;
 }

 VAR_15->i_mtime = VAR_15->i_ctime = FUNC_4(VAR_15);
 if (VAR_18) {
  FUNC_20(VAR_15, VAR_18);
 } else {




  if ((VAR_12 + VAR_13) > FUNC_23(VAR_15))
   FUNC_14(VAR_15, VAR_7);
 }
 FUNC_13(VAR_16, VAR_15);


 VAR_19 = FUNC_21(VAR_16, VAR_15, VAR_12, VAR_13);
 if (VAR_19 >= 0)
  FUNC_19(VAR_16, VAR_15, 1);

 if (VAR_11->f_flags & VAR_10)
  FUNC_10(VAR_16);

 FUNC_12(VAR_16);
out_mutex:
 FUNC_27(VAR_15);
 return VAR_19;
}
