
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_ltree_entry {scalar_t__ users; int rb; int mutex; } ;
struct ubi_device {int ltree_lock; int ltree; } ;


 int FUNC_0 (struct ubi_ltree_entry*) ;
 struct ubi_ltree_entry* FUNC_1 (struct ubi_device*,int,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ubi_device *VAR_0, int VAR_1, int VAR_2)
{
 struct ubi_ltree_entry *VAR_3;

 FUNC_3(&VAR_0->ltree_lock);
 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_3->users -= 1;
 FUNC_5(VAR_3->users >= 0);
 FUNC_6(&VAR_3->mutex);
 if (VAR_3->users == 0) {
  FUNC_2(&VAR_3->rb, &VAR_0->ltree);
  FUNC_0(VAR_3);
 }
 FUNC_4(&VAR_0->ltree_lock);
}
