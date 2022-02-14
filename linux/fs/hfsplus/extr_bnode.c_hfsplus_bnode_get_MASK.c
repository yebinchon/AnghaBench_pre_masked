
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfs_bnode {int refcnt; int this; TYPE_1__* tree; } ;
struct TYPE_2__ {int cnid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;

void FUNC_3(struct hfs_bnode *VAR_1)
{
 if (VAR_1) {
  FUNC_0(&VAR_1->refcnt);
  FUNC_2(VAR_0, "get_node(%d:%d): %d\n",
   VAR_1->tree->cnid, VAR_1->this,
   FUNC_1(&VAR_1->refcnt));
 }
}
