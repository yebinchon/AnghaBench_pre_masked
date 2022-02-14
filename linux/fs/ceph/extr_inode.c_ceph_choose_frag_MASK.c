
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ceph_inode_info {int i_fragtree_mutex; } ;
struct ceph_inode_frag {int dummy; } ;


 int FUNC_0 (struct ceph_inode_info*,int ,struct ceph_inode_frag*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

u32 FUNC_3(struct ceph_inode_info *VAR_0, u32 VAR_1,
       struct ceph_inode_frag *VAR_2, int *VAR_3)
{
 u32 VAR_4;
 FUNC_1(&VAR_0->i_fragtree_mutex);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->i_fragtree_mutex);
 return VAR_4;
}
