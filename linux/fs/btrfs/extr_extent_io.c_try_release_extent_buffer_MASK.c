
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; scalar_t__ private; } ;
struct extent_buffer {int refs_lock; int bflags; int refs; } ;
struct TYPE_2__ {int private_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct page *VAR_1)
{
 struct extent_buffer *VAR_2;





 FUNC_5(&VAR_1->mapping->private_lock);
 if (!FUNC_1(VAR_1)) {
  FUNC_6(&VAR_1->mapping->private_lock);
  return 1;
 }

 VAR_2 = (struct extent_buffer *)VAR_1->private;
 FUNC_0(!VAR_2);






 FUNC_5(&VAR_2->refs_lock);
 if (FUNC_2(&VAR_2->refs) != 1 || FUNC_3(VAR_2)) {
  FUNC_6(&VAR_2->refs_lock);
  FUNC_6(&VAR_1->mapping->private_lock);
  return 0;
 }
 FUNC_6(&VAR_1->mapping->private_lock);





 if (!FUNC_7(VAR_0, &VAR_2->bflags)) {
  FUNC_6(&VAR_2->refs_lock);
  return 0;
 }

 return FUNC_4(VAR_2);
}
