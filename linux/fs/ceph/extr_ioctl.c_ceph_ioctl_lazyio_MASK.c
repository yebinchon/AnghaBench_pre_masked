
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct ceph_file_info* private_data; } ;
struct ceph_inode_info {int i_ceph_lock; int * i_nr_by_mode; } ;
struct ceph_file_info {int fmode; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_inode_info*,int ,int *) ;
 struct ceph_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,struct file*) ;
 size_t FUNC_3 (int) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static long FUNC_7(struct file *VAR_1)
{
 struct ceph_file_info *VAR_2 = VAR_1->private_data;
 struct inode *VAR_3 = FUNC_4(VAR_1);
 struct ceph_inode_info *VAR_4 = FUNC_1(VAR_3);

 if ((VAR_2->fmode & VAR_0) == 0) {
  FUNC_5(&VAR_4->i_ceph_lock);
  VAR_2->fmode |= VAR_0;
  VAR_4->i_nr_by_mode[FUNC_3(VAR_0)]++;
  FUNC_6(&VAR_4->i_ceph_lock);
  FUNC_2("ioctl_layzio: file %p marked lazy\n", VAR_1);

  FUNC_0(VAR_4, 0, ((void*)0));
 } else {
  FUNC_2("ioctl_layzio: file %p already lazy\n", VAR_1);
 }
 return 0;
}
