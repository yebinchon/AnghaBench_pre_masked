
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;


 struct inode* FUNC_0 (struct super_block*,unsigned long,int (*) (struct inode*,void*),void*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;

struct inode *FUNC_5(struct super_block *VAR_0, unsigned long VAR_1,
  int (*VAR_2)(struct inode *, void *), void *VAR_3)
{
 struct inode *VAR_4;
again:
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_4(VAR_4);
  if (FUNC_3(FUNC_1(VAR_4))) {
   FUNC_2(VAR_4);
   goto again;
  }
 }
 return VAR_4;
}
