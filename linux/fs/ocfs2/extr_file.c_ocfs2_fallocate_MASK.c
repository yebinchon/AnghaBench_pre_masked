
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_space_resv {void* l_len; void* l_start; scalar_t__ l_whence; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
typedef void* s64 ;
typedef scalar_t__ loff_t ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 long FUNC_1 (int *,struct inode*,scalar_t__,int,struct ocfs2_space_resv*,int) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (struct ocfs2_super*) ;

__attribute__((used)) static long FUNC_4(struct file *VAR_5, int VAR_6, loff_t VAR_7,
       loff_t VAR_8)
{
 struct inode *VAR_9 = FUNC_2(VAR_5);
 struct ocfs2_super *VAR_10 = FUNC_0(VAR_9->i_sb);
 struct ocfs2_space_resv VAR_11;
 int VAR_12 = 1;
 int VAR_13 = VAR_3;

 if (VAR_6 & ~(VAR_1 | VAR_2))
  return -VAR_0;
 if (!FUNC_3(VAR_10))
  return -VAR_0;

 if (VAR_6 & VAR_1)
  VAR_12 = 0;

 if (VAR_6 & VAR_2)
  VAR_13 = VAR_4;

 VAR_11.l_whence = 0;
 VAR_11.l_start = (s64)VAR_7;
 VAR_11.l_len = (s64)VAR_8;

 return FUNC_1(((void*)0), VAR_9, VAR_7, VAR_13, &VAR_11,
      VAR_12);
}
