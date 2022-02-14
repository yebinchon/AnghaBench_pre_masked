
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct dentry* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,int *,int*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, u32 *VAR_2, int *VAR_3,
    struct inode *VAR_4)
{
 struct dentry *VAR_5;
 int VAR_6;


 if (VAR_4)
  return VAR_0;

 VAR_5 = FUNC_1(VAR_1);
 if (FUNC_0(!VAR_5))
  return VAR_0;

 VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_3);

 FUNC_2(VAR_5);
 return VAR_6;
}
