
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct privcmd_data {int domid; } ;
struct inode {int dummy; } ;
struct file {struct privcmd_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct privcmd_data* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_3, struct file *VAR_4)
{
 struct privcmd_data *VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_2);

 if (!VAR_5)
  return -VAR_1;


 VAR_5->domid = VAR_0;

 VAR_4->private_data = VAR_5;
 return 0;
}
