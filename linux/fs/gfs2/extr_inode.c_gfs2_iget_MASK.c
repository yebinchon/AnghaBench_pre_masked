
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;


 struct inode* FUNC_0 (struct super_block*,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_2, u64 VAR_3)
{
 struct inode *VAR_4;

repeat:
 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_1, VAR_0, &VAR_3);
 if (!VAR_4)
  return VAR_4;
 if (FUNC_2(VAR_4)) {
  FUNC_1(VAR_4);
  goto repeat;
 }
 return VAR_4;
}
