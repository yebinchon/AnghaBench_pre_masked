
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct dentry*) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_4, struct dentry *VAR_5,
     struct inode *VAR_6, struct dentry *VAR_7,
     unsigned int VAR_8)
{
 char *VAR_9, *VAR_10;
 int VAR_11;

 if (VAR_8 & ~(VAR_3 | VAR_2))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_5);
 if (VAR_9 == ((void*)0))
  return -VAR_1;
 VAR_10 = FUNC_1(VAR_7);
 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_9);
  return -VAR_1;
 }
 if (!VAR_8)
  VAR_11 = FUNC_3(VAR_9, VAR_10);
 else
  VAR_11 = FUNC_2(VAR_9, VAR_10, VAR_8);

 FUNC_0(VAR_9);
 FUNC_0(VAR_10);
 return VAR_11;
}
