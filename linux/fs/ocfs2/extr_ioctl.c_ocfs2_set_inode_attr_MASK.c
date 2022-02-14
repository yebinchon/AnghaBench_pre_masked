
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_inode_info {unsigned int ip_attr; } ;
struct inode {int i_mode; int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 unsigned int VAR_1 ;
 struct ocfs2_inode_info* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct ocfs2_super*,int *) ;
 int FUNC_11 (struct inode*,struct buffer_head**,int) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_14 (struct inode*) ;
 int * FUNC_15 (struct ocfs2_super*,int ) ;
 int FUNC_16 (struct inode*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_3, unsigned VAR_4,
    unsigned VAR_5)
{
 struct ocfs2_inode_info *VAR_6 = FUNC_1(VAR_3);
 struct ocfs2_super *VAR_7 = FUNC_2(VAR_3->i_sb);
 handle_t *VAR_8 = ((void*)0);
 struct buffer_head *VAR_9 = ((void*)0);
 unsigned VAR_10;
 int VAR_11;

 FUNC_6(VAR_3);

 VAR_11 = FUNC_11(VAR_3, &VAR_9, 1);
 if (VAR_11 < 0) {
  FUNC_9(VAR_11);
  goto bail;
 }

 VAR_11 = -VAR_0;
 if (!FUNC_7(VAR_3))
  goto bail_unlock;

 if (!FUNC_4(VAR_3->i_mode))
  VAR_4 &= ~VAR_1;

 VAR_10 = VAR_6->ip_attr;
 VAR_4 = VAR_4 & VAR_5;
 VAR_4 |= VAR_10 & ~VAR_5;

 VAR_11 = FUNC_16(VAR_3, VAR_10, VAR_4);
 if (VAR_11)
  goto bail_unlock;

 VAR_8 = FUNC_15(VAR_7, VAR_2);
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_3(VAR_8);
  FUNC_9(VAR_11);
  goto bail_unlock;
 }

 VAR_6->ip_attr = VAR_4;
 FUNC_14(VAR_3);

 VAR_11 = FUNC_13(VAR_8, VAR_3, VAR_9);
 if (VAR_11 < 0)
  FUNC_9(VAR_11);

 FUNC_10(VAR_7, VAR_8);

bail_unlock:
 FUNC_12(VAR_3, 1);
bail:
 FUNC_8(VAR_3);

 FUNC_5(VAR_9);

 return VAR_11;
}
