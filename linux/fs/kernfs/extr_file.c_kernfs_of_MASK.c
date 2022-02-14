
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct kernfs_open_file* private; } ;
struct kernfs_open_file {int dummy; } ;
struct file {scalar_t__ private_data; } ;



__attribute__((used)) static struct kernfs_open_file *FUNC_0(struct file *VAR_0)
{
 return ((struct seq_file *)VAR_0->private_data)->private;
}
