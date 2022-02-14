
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; int i_hash; int i_sb; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int *,struct hlist_head*) ;
 int VAR_0 ;
 struct hlist_head* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct inode *VAR_2, unsigned long VAR_3)
{
 struct hlist_head *VAR_4 = VAR_1 + FUNC_0(VAR_2->i_sb, VAR_3);

 FUNC_2(&VAR_0);
 FUNC_2(&VAR_2->i_lock);
 FUNC_1(&VAR_2->i_hash, VAR_4);
 FUNC_3(&VAR_2->i_lock);
 FUNC_3(&VAR_0);
}
