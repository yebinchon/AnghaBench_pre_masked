
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct ceph_file_info* private_data; } ;
struct ceph_file_info {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static long FUNC_0(struct file *VAR_1)
{
 struct ceph_file_info *VAR_2 = VAR_1->private_data;

 VAR_2->flags |= VAR_0;
 return 0;
}
