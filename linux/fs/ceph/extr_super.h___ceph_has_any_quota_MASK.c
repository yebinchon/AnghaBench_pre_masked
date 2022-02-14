
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_inode_info {scalar_t__ i_max_bytes; scalar_t__ i_max_files; } ;



__attribute__((used)) static inline bool FUNC_0(struct ceph_inode_info *VAR_0)
{
 return VAR_0->i_max_files || VAR_0->i_max_bytes;
}
