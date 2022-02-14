
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_ltree_entry {scalar_t__ users; int rb; int mutex; } ;
struct ubi_device {int ltree_lock; int ltree; } ;


 scalar_t__ FUNC_0 (struct ubi_ltree_entry*) ;
 int FUNC_1 (struct ubi_ltree_entry*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ubi_ltree_entry*) ;
 struct ubi_ltree_entry* FUNC_4 (struct ubi_device*,int,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct ubi_device *VAR_0, int VAR_1, int VAR_2)
{
 struct ubi_ltree_entry *VAR_3;

 VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 if (FUNC_2(&VAR_3->mutex))
  return 0;


 FUNC_6(&VAR_0->ltree_lock);
 VAR_3->users -= 1;
 FUNC_8(VAR_3->users >= 0);
 if (VAR_3->users == 0) {
  FUNC_5(&VAR_3->rb, &VAR_0->ltree);
  FUNC_3(VAR_3);
 }
 FUNC_7(&VAR_0->ltree_lock);

 return 1;
}
