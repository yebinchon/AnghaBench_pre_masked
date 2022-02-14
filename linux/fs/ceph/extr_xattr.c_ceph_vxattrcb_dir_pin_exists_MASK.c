
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_inode_info {int i_dir_pin; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct ceph_inode_info *VAR_1)
{
 return VAR_1->i_dir_pin != -VAR_0;
}
