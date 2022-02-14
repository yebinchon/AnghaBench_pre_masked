
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct super_block*) ;

__attribute__((used)) static struct inode *FUNC_2(struct super_block *VAR_1)
{
 struct inode *VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  return FUNC_0(-VAR_0);
 return VAR_2;
}
