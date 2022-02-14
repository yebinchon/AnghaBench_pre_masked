
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_5__ {char* node; } ;
struct TYPE_4__ {int maxid; int nodeid; int total; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct seq_file*,char*,char*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, void *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_2, "Total Nodes %d Self Node Id %d Maxid %d\n",
     VAR_1.total, VAR_1.nodeid,
     VAR_1.maxid);

 if (!VAR_0)
  return 0;

 FUNC_1(VAR_2, "%-16s\t%-16s\n", "node_id", "state");

 for (VAR_4 = 0; VAR_4 <= VAR_1.maxid; VAR_4++)
  FUNC_1(VAR_2, "%-16d\t%-16s\n", VAR_0[VAR_4].node,
      FUNC_0(&VAR_0[VAR_4]) ?
      "Running" : "Offline");
 return 0;
}
