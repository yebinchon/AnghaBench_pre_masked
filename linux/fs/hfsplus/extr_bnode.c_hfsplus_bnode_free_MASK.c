
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfs_bnode {scalar_t__* page; TYPE_1__* tree; } ;
struct TYPE_2__ {int pages_per_bnode; } ;


 int FUNC_0 (struct hfs_bnode*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct hfs_bnode *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->tree->pages_per_bnode; VAR_1++)
  if (VAR_0->page[VAR_1])
   FUNC_1(VAR_0->page[VAR_1]);
 FUNC_0(VAR_0);
}
