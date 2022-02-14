
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ,int ,int ,int *,int) ;
 int FUNC_2 (int *,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct dentry *VAR_4,
         struct inode *VAR_5)
{
 u8 VAR_6[VAR_1];
 u8 *VAR_7 = VAR_6 + VAR_0;
 int VAR_8;

 VAR_8 = FUNC_1(FUNC_0(VAR_4),
         FUNC_3(VAR_5),
         VAR_2, VAR_6,
         VAR_1);
 if (VAR_8 < 0)
  return VAR_8;
 else if (VAR_8 < VAR_1)
  return -VAR_3;
 VAR_8 = FUNC_4(VAR_7);
 if (!VAR_8)
  FUNC_2(VAR_6, VAR_5);
 return VAR_8;
}
