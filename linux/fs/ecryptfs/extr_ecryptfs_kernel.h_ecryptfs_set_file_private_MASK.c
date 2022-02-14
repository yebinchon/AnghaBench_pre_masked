
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct ecryptfs_file_info* private_data; } ;
struct ecryptfs_file_info {int dummy; } ;



__attribute__((used)) static inline void
FUNC_0(struct file *VAR_0,
     struct ecryptfs_file_info *VAR_1)
{
 VAR_0->private_data = VAR_1;
}
