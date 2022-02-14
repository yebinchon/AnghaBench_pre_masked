
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct iattr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ,struct iattr*) ;
 int FUNC_1 (int ,char*,char*,int) ;

int FUNC_2(struct inode *VAR_1, struct iattr *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2);

 if (VAR_3)
  FUNC_1(VAR_1->i_sb, "jdm-20007",
     "Couldn't chown all xattrs (%d)\n", VAR_3);
 return VAR_3;
}
