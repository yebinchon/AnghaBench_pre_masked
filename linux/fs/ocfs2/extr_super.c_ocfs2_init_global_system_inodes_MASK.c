
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int slot_num; struct inode* sys_root_inode; int system_dir_blkno; struct inode* root_inode; int root_blkno; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int) ;
 struct inode* FUNC_5 (struct ocfs2_super*,int,int ) ;
 struct inode* FUNC_6 (struct ocfs2_super*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct ocfs2_super*) ;
 int FUNC_8 (struct ocfs2_super*,int) ;
 int FUNC_9 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_10(struct ocfs2_super *VAR_6)
{
 struct inode *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 int VAR_9;

 VAR_7 = FUNC_6(VAR_6, VAR_6->root_blkno, VAR_4, 0);
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  FUNC_4(VAR_8);
  goto bail;
 }
 VAR_6->root_inode = VAR_7;

 VAR_7 = FUNC_6(VAR_6, VAR_6->system_dir_blkno, VAR_4, 0);
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  FUNC_4(VAR_8);
  goto bail;
 }
 VAR_6->sys_root_inode = VAR_7;

 for (VAR_9 = VAR_3;
      VAR_9 <= VAR_5; VAR_9++) {
  if (!FUNC_8(VAR_6, VAR_9))
   continue;
  VAR_7 = FUNC_5(VAR_6, VAR_9, VAR_6->slot_num);
  if (!VAR_7) {
   FUNC_9(VAR_6);
   VAR_8 = FUNC_7(VAR_6) ? -VAR_1 : -VAR_0;
   FUNC_4(VAR_8);
   FUNC_3(VAR_2, "Unable to load system inode %d, "
        "possibly corrupt fs?", VAR_9);
   goto bail;
  }

  FUNC_2(VAR_7);
 }

bail:
 if (VAR_8)
  FUNC_4(VAR_8);
 return VAR_8;
}
