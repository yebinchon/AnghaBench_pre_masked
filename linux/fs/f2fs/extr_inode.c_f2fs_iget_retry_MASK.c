
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int) ;
 struct inode* FUNC_3 (struct super_block*,unsigned long) ;

struct inode *FUNC_4(struct super_block *VAR_3, unsigned long VAR_4)
{
 struct inode *VAR_5;
retry:
 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (FUNC_0(VAR_5)) {
  if (FUNC_1(VAR_5) == -VAR_1) {
   FUNC_2(VAR_0, VAR_2/50);
   goto retry;
  }
 }
 return VAR_5;
}
