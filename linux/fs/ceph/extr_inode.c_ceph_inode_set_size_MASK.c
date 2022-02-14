
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_blocks; int i_size; } ;
struct ceph_inode_info {int i_ceph_lock; } ;
typedef int loff_t ;


 int FUNC_0 (struct ceph_inode_info*) ;
 int FUNC_1 (int ) ;
 struct ceph_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,struct inode*,int ,int ) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

bool FUNC_7(struct inode *VAR_0, loff_t VAR_1)
{
 struct ceph_inode_info *VAR_2 = FUNC_2(VAR_0);
 bool VAR_3;

 FUNC_5(&VAR_2->i_ceph_lock);
 FUNC_3("set_size %p %llu -> %llu\n", VAR_0, VAR_0->i_size, VAR_1);
 FUNC_4(VAR_0, VAR_1);
 VAR_0->i_blocks = FUNC_1(VAR_1);

 VAR_3 = FUNC_0(VAR_2);

 FUNC_6(&VAR_2->i_ceph_lock);
 return VAR_3;
}
