
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_head {scalar_t__ b_assoc_map; TYPE_1__* b_page; } ;
struct TYPE_2__ {scalar_t__ mapping; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct buffer_head*) ;

void FUNC_2(struct buffer_head *VAR_1)
{
 FUNC_1(VAR_1);

 if (VAR_1->b_page && VAR_1->b_page->mapping)
  FUNC_0(VAR_1->b_page->mapping, -VAR_0);
 if (VAR_1->b_assoc_map)
  FUNC_0(VAR_1->b_assoc_map, -VAR_0);
}
