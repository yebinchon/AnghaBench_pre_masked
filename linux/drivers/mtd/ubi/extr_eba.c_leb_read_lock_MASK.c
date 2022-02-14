
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_ltree_entry {int mutex; } ;
struct ubi_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct ubi_ltree_entry*) ;
 int FUNC_1 (struct ubi_ltree_entry*) ;
 int FUNC_2 (int *) ;
 struct ubi_ltree_entry* FUNC_3 (struct ubi_device*,int,int) ;

__attribute__((used)) static int FUNC_4(struct ubi_device *VAR_0, int VAR_1, int VAR_2)
{
 struct ubi_ltree_entry *VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 FUNC_2(&VAR_3->mutex);
 return 0;
}
