
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {TYPE_1__* dentry; } ;
struct inode {int i_gid; int i_uid; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct path *VAR_3)
{
 struct inode *VAR_4 = VAR_3->dentry->d_inode;


 if (!FUNC_4(VAR_4->i_uid) || !FUNC_1(VAR_4->i_gid))
  return -VAR_0;

 if (!VAR_2)
  return 0;




 if (FUNC_3(VAR_4) || FUNC_2(VAR_4))
  return 0;

 FUNC_0("linkat");
 return -VAR_1;
}
