
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {TYPE_1__* dentry; } ;
struct inode {int dummy; } ;
struct file {struct path f_path; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int,struct file*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct path const*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3)
{
 const struct path *VAR_4 = &VAR_3->f_path;
 struct inode *VAR_5 = VAR_4->dentry->d_inode;
 int VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  return VAR_6;



 VAR_6 = FUNC_2(VAR_3);
 if (!VAR_6)
  VAR_6 = FUNC_4(VAR_4);
 if (!VAR_6) {
  VAR_6 = FUNC_0(VAR_4->dentry, 0,
        VAR_1|VAR_0|VAR_2,
        VAR_3);
 }
 FUNC_3(VAR_5);
 return VAR_6;
}
