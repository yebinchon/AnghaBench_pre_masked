
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct of_changeset_entry {scalar_t__ action; int node; TYPE_2__* np; } ;
struct TYPE_6__ {int kref; } ;
struct TYPE_7__ {TYPE_1__ kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct of_changeset_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (char*,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(struct of_changeset_entry *VAR_3)
{
 if (VAR_3->action == VAR_2 &&
     FUNC_3(VAR_3->np, VAR_0)) {
  if (FUNC_1(&VAR_3->np->kobj.kref) > 1) {
   FUNC_6("ERROR: memory leak, expected refcount 1 instead of %d, of_node_get()/of_node_put() unbalanced - destroy cset entry: attach overlay node %pOF\n",
          FUNC_1(&VAR_3->np->kobj.kref), VAR_3->np);
  } else {
   FUNC_5(VAR_3->np, VAR_1);
  }
 }

 FUNC_4(VAR_3->np);
 FUNC_2(&VAR_3->node);
 FUNC_0(VAR_3);
}
