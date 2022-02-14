
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct inode {int i_data; int i_sb; } ;
struct file {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int ip_flags; int ip_alloc_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*,int,struct file*,int,int*,unsigned int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct inode*,int ) ;
 scalar_t__ FUNC_8 (struct ocfs2_super*) ;
 scalar_t__ FUNC_9 (struct ocfs2_super*) ;
 int FUNC_10 (struct ocfs2_super*) ;
 int FUNC_11 (struct inode*,struct buffer_head**,struct inode*,struct buffer_head**) ;
 int FUNC_12 (struct inode*,struct buffer_head*,struct inode*,struct buffer_head*) ;
 int FUNC_13 (struct inode*,struct buffer_head*,int,struct inode*,struct buffer_head*,int,int) ;
 int FUNC_14 (struct inode*,struct buffer_head*,int) ;
 int FUNC_15 (int,int ) ;
 scalar_t__ FUNC_16 (int,int ) ;
 int FUNC_17 (int *,int ,scalar_t__) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static loff_t FUNC_19(struct file *VAR_8, loff_t VAR_9,
         struct file *VAR_10, loff_t VAR_11,
         loff_t VAR_12, unsigned int VAR_13)
{
 struct inode *VAR_14 = FUNC_4(VAR_8);
 struct inode *VAR_15 = FUNC_4(VAR_10);
 struct ocfs2_super *VAR_16 = FUNC_1(VAR_14->i_sb);
 struct buffer_head *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 bool VAR_19 = (VAR_14 == VAR_15);
 loff_t VAR_20 = 0;
 ssize_t VAR_21;

 if (VAR_13 & ~(VAR_6 | VAR_5))
  return -VAR_0;
 if (!FUNC_10(VAR_16))
  return -VAR_1;
 if (FUNC_8(VAR_16) || FUNC_9(VAR_16))
  return -VAR_2;


 VAR_21 = FUNC_11(VAR_14, &VAR_17, VAR_15, &VAR_18);
 if (VAR_21)
  return VAR_21;


 VAR_21 = -VAR_0;
 if ((FUNC_0(VAR_14)->ip_flags & VAR_3) ||
     (FUNC_0(VAR_15)->ip_flags & VAR_3))
  goto out_unlock;

 VAR_21 = FUNC_5(VAR_8, VAR_9, VAR_10, VAR_11,
   &VAR_12, VAR_13);
 if (VAR_21 < 0 || VAR_12 == 0)
  goto out_unlock;


 FUNC_2(&FUNC_0(VAR_14)->ip_alloc_sem);
 if (!VAR_19)
  FUNC_3(&FUNC_0(VAR_15)->ip_alloc_sem,
      VAR_7);


 FUNC_17(&VAR_15->i_data,
       FUNC_15(VAR_11, VAR_4),
       FUNC_16(VAR_11 + VAR_12, VAR_4) - 1);

 VAR_20 = FUNC_13(VAR_14, VAR_17, VAR_9,
   VAR_15, VAR_18, VAR_11, VAR_12);
 FUNC_18(&FUNC_0(VAR_14)->ip_alloc_sem);
 if (!VAR_19)
  FUNC_18(&FUNC_0(VAR_15)->ip_alloc_sem);
 if (VAR_20 < 0) {
  VAR_21 = VAR_20;
  FUNC_6(VAR_21);
  goto out_unlock;
 }





 FUNC_7(VAR_14, 0);
 FUNC_7(VAR_15, 0);

 VAR_21 = FUNC_14(VAR_15, VAR_18, VAR_11 + VAR_12);
 if (VAR_21) {
  FUNC_6(VAR_21);
  goto out_unlock;
 }

out_unlock:
 FUNC_12(VAR_14, VAR_17, VAR_15, VAR_18);
 return VAR_20 > 0 ? VAR_20 : VAR_21;
}
