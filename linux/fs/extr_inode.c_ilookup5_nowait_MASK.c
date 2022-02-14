
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct hlist_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct super_block*,struct hlist_head*,int (*) (struct inode*,void*),void*) ;
 int FUNC_2 (struct super_block*,unsigned long) ;
 int VAR_0 ;
 struct hlist_head* VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct inode *FUNC_5(struct super_block *VAR_2, unsigned long VAR_3,
  int (*VAR_4)(struct inode *, void *), void *VAR_5)
{
 struct hlist_head *VAR_6 = VAR_1 + FUNC_2(VAR_2, VAR_3);
 struct inode *VAR_7;

 FUNC_3(&VAR_0);
 VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_4, VAR_5);
 FUNC_4(&VAR_0);

 return FUNC_0(VAR_7) ? ((void*)0) : VAR_7;
}
