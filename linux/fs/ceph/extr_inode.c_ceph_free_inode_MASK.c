
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ceph_inode_info {int i_symlink; } ;


 struct ceph_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ceph_inode_info*) ;

void FUNC_3(struct inode *VAR_1)
{
 struct ceph_inode_info *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->i_symlink);
 FUNC_2(VAR_0, VAR_2);
}
