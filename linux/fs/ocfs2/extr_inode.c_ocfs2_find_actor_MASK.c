
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_inode_info {scalar_t__ ip_blkno; } ;
struct ocfs2_find_inode_args {scalar_t__ fi_blkno; } ;
struct inode {int i_ino; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct inode*,int ,void*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, void *VAR_1)
{
 struct ocfs2_find_inode_args *VAR_2 = ((void*)0);
 struct ocfs2_inode_info *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 0;

 VAR_2 = VAR_1;

 FUNC_1(!VAR_0, "No inode in find actor!\n");

 FUNC_2(VAR_0, VAR_0->i_ino, VAR_1, VAR_2->fi_blkno);

 if (VAR_3->ip_blkno != VAR_2->fi_blkno)
  goto bail;

 VAR_4 = 1;
bail:
 return VAR_4;
}
