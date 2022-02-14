
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_inode_info {int i_dirty_caps; int i_flushing_caps; } ;



__attribute__((used)) static inline int FUNC_0(struct ceph_inode_info *VAR_0)
{
 return VAR_0->i_dirty_caps | VAR_0->i_flushing_caps;
}
