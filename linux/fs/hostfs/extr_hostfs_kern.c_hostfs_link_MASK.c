
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_1, struct inode *VAR_2,
         struct dentry *VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6;

 if ((VAR_4 = FUNC_1(VAR_3)) == ((void*)0))
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_4);
  return -VAR_0;
 }
 VAR_6 = FUNC_2(VAR_5, VAR_4);
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 return VAR_6;
}
