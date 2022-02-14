
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_fs_info; } ;
struct ceph_fs_client {int dummy; } ;



__attribute__((used)) static inline struct ceph_fs_client *FUNC_0(struct super_block *VAR_0)
{
 return (struct ceph_fs_client *)VAR_0->s_fs_info;
}
