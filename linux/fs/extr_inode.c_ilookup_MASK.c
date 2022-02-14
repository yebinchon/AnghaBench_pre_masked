
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct hlist_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct super_block*,struct hlist_head*,unsigned long) ;
 int FUNC_2 (struct super_block*,unsigned long) ;
 int VAR_0 ;
 struct hlist_head* VAR_1 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct inode*) ;

struct inode *FUNC_9(struct super_block *VAR_2, unsigned long VAR_3)
{
 struct hlist_head *VAR_4 = VAR_1 + FUNC_2(VAR_2, VAR_3);
 struct inode *VAR_5;
again:
 FUNC_5(&VAR_0);
 VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_3);
 FUNC_6(&VAR_0);

 if (VAR_5) {
  if (FUNC_0(VAR_5))
   return ((void*)0);
  FUNC_8(VAR_5);
  if (FUNC_7(FUNC_3(VAR_5))) {
   FUNC_4(VAR_5);
   goto again;
  }
 }
 return VAR_5;
}
