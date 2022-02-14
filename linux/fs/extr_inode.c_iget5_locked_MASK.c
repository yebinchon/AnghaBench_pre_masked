
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {scalar_t__ i_state; } ;


 struct inode* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct super_block*,unsigned long,int (*) (struct inode*,void*),void*) ;
 struct inode* FUNC_3 (struct inode*,unsigned long,int (*) (struct inode*,void*),int (*) (struct inode*,void*),void*) ;
 scalar_t__ FUNC_4 (int) ;

struct inode *FUNC_5(struct super_block *VAR_0, unsigned long VAR_1,
  int (*VAR_2)(struct inode *, void *),
  int (*VAR_3)(struct inode *, void *), void *VAR_4)
{
 struct inode *VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4);

 if (!VAR_5) {
  struct inode *VAR_6 = FUNC_0(VAR_0);

  if (VAR_6) {
   VAR_6->i_state = 0;
   VAR_5 = FUNC_3(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);
   if (FUNC_4(VAR_5 != VAR_6))
    FUNC_1(VAR_6);
  }
 }
 return VAR_5;
}
