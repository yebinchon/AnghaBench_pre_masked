
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int (* rmdir ) (char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3, struct dentry *VAR_4)
{
 char *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return -VAR_0;
 FUNC_3(VAR_3);
 FUNC_3(VAR_4->d_inode);

 VAR_6 = VAR_2.rmdir(VAR_5);

 FUNC_2(VAR_3, VAR_1);
 FUNC_1(VAR_4->d_inode);

 FUNC_4(VAR_5);

 return VAR_6;
}
