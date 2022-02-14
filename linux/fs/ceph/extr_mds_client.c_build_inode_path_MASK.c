
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct inode*) ;
 char* FUNC_3 (struct dentry*,int*,int *,int) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 struct dentry* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1,
       const char **VAR_2, int *VAR_3, u64 *VAR_4,
       bool *VAR_5)
{
 struct dentry *VAR_6;
 char *VAR_7;

 if (FUNC_4(VAR_1) == VAR_0) {
  *VAR_4 = FUNC_2(VAR_1);
  *VAR_3 = 0;
  return 0;
 }
 VAR_6 = FUNC_5(VAR_1);
 VAR_7 = FUNC_3(VAR_6, VAR_3, VAR_4, 1);
 FUNC_6(VAR_6);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 *VAR_2 = VAR_7;
 *VAR_5 = 1;
 return 0;
}
