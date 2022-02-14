
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_inode_info {int i_extent_cache_lock; } ;
struct inode {int dummy; } ;


 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0)
{
 struct udf_inode_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->i_extent_cache_lock);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_1->i_extent_cache_lock);
}
