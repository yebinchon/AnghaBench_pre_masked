
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_head {int * b_assoc_map; int b_assoc_buffers; TYPE_1__* b_page; } ;
struct address_space {int private_lock; } ;
struct TYPE_2__ {struct address_space* mapping; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct buffer_head *VAR_0)
{
 FUNC_1(VAR_0);
 if (VAR_0->b_assoc_map) {
  struct address_space *VAR_1 = VAR_0->b_page->mapping;

  FUNC_3(&VAR_1->private_lock);
  FUNC_2(&VAR_0->b_assoc_buffers);
  VAR_0->b_assoc_map = ((void*)0);
  FUNC_4(&VAR_1->private_lock);
 }
 FUNC_0(VAR_0);
}
