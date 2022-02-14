
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {void* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_3, struct file *VAR_4)
{
 VAR_4->private_data = (void *)FUNC_0(VAR_1, "%d",
            VAR_2);
 if (!VAR_4->private_data)
  return -VAR_0;
 return 0;
}
