
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct ceph_inode_info {int vfs_inode; void* i_max_files; void* i_max_bytes; } ;


 int FUNC_0 (struct ceph_inode_info*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline void FUNC_2(struct ceph_inode_info *VAR_0,
           u64 VAR_1, u64 VAR_2)
{
 bool VAR_3, VAR_4;
 VAR_3 = FUNC_0(VAR_0);
 VAR_0->i_max_bytes = VAR_1;
 VAR_0->i_max_files = VAR_2;
 VAR_4 = FUNC_0(VAR_0);

 if (VAR_3 != VAR_4)
  FUNC_1(&VAR_0->vfs_inode, VAR_4);
}
