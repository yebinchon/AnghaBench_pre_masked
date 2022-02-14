
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {unsigned long i_ino; int i_lock; int i_hash; int i_state; } ;
struct hlist_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct inode* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*,struct hlist_head*,unsigned long) ;
 int FUNC_4 (struct super_block*,unsigned long) ;
 int FUNC_5 (int *,struct hlist_head*) ;
 int VAR_1 ;
 struct hlist_head* VAR_2 ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct inode*) ;

struct inode *FUNC_13(struct super_block *VAR_3, unsigned long VAR_4)
{
 struct hlist_head *VAR_5 = VAR_2 + FUNC_4(VAR_3, VAR_4);
 struct inode *VAR_6;
again:
 FUNC_9(&VAR_1);
 VAR_6 = FUNC_3(VAR_3, VAR_5, VAR_4);
 FUNC_10(&VAR_1);
 if (VAR_6) {
  if (FUNC_0(VAR_6))
   return ((void*)0);
  FUNC_12(VAR_6);
  if (FUNC_11(FUNC_7(VAR_6))) {
   FUNC_8(VAR_6);
   goto again;
  }
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6) {
  struct inode *VAR_7;

  FUNC_9(&VAR_1);

  VAR_7 = FUNC_3(VAR_3, VAR_5, VAR_4);
  if (!VAR_7) {
   VAR_6->i_ino = VAR_4;
   FUNC_9(&VAR_6->i_lock);
   VAR_6->i_state = VAR_0;
   FUNC_5(&VAR_6->i_hash, VAR_5);
   FUNC_10(&VAR_6->i_lock);
   FUNC_6(VAR_6);
   FUNC_10(&VAR_1);




   return VAR_6;
  }






  FUNC_10(&VAR_1);
  FUNC_2(VAR_6);
  if (FUNC_0(VAR_7))
   return ((void*)0);
  VAR_6 = VAR_7;
  FUNC_12(VAR_6);
  if (FUNC_11(FUNC_7(VAR_6))) {
   FUNC_8(VAR_6);
   goto again;
  }
 }
 return VAR_6;
}
