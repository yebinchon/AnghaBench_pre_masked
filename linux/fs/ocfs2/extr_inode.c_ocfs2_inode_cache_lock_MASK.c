
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_inode_info {int ip_lock; } ;
struct ocfs2_caching_info {int dummy; } ;


 struct ocfs2_inode_info* FUNC_0 (struct ocfs2_caching_info*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_caching_info *VAR_0)
{
 struct ocfs2_inode_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->ip_lock);
}
