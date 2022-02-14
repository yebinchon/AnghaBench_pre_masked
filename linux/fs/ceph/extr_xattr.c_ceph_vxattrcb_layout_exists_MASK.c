
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_file_layout {scalar_t__ stripe_unit; scalar_t__ stripe_count; scalar_t__ object_size; scalar_t__ pool_id; int pool_ns; } ;
struct ceph_inode_info {struct ceph_file_layout i_layout; } ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct ceph_inode_info *VAR_0)
{
 struct ceph_file_layout *VAR_1 = &VAR_0->i_layout;
 return (VAR_1->stripe_unit > 0 || VAR_1->stripe_count > 0 ||
  VAR_1->object_size > 0 || VAR_1->pool_id >= 0 ||
  FUNC_0(VAR_1->pool_ns) != ((void*)0));
}
