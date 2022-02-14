
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;
typedef int dev_t ;


 struct inode* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct inode*,int ,int ,int ,int ) ;

struct inode *FUNC_2(struct super_block *VAR_0, umode_t VAR_1, dev_t VAR_2)
{
 struct inode *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3)
  FUNC_1(VAR_3, VAR_1, VAR_2, 0, 0);

 return VAR_3;
}
