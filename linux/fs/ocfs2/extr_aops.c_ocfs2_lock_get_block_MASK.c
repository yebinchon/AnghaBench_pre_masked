
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_inode_info {int ip_alloc_sem; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,int ,struct buffer_head*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, sector_t VAR_1,
      struct buffer_head *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 struct ocfs2_inode_info *VAR_5 = FUNC_0(VAR_0);

 FUNC_1(&VAR_5->ip_alloc_sem);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_3(&VAR_5->ip_alloc_sem);

 return VAR_4;
}
