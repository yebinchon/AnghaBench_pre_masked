
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_znode {int level; } ;
struct TYPE_3__ {int znode; } ;
struct ubifs_info {TYPE_1__ zroot; } ;
struct TYPE_4__ {int pid; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct ubifs_info*,struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_2 (struct ubifs_info*,int ,struct ubifs_znode*) ;

void FUNC_3(struct ubifs_info *VAR_1)
{
 struct ubifs_znode *VAR_2;
 int VAR_3;

 FUNC_0("\n");
 FUNC_0("(pid %d) start dumping TNC tree\n", VAR_0->pid);
 VAR_2 = FUNC_2(VAR_1, VAR_1->zroot.znode, ((void*)0));
 VAR_3 = VAR_2->level;
 FUNC_0("== Level %d ==\n", VAR_3);
 while (VAR_2) {
  if (VAR_3 != VAR_2->level) {
   VAR_3 = VAR_2->level;
   FUNC_0("== Level %d ==\n", VAR_3);
  }
  FUNC_1(VAR_1, VAR_2);
  VAR_2 = FUNC_2(VAR_1, VAR_1->zroot.znode, VAR_2);
 }
 FUNC_0("(pid %d) finish dumping TNC tree\n", VAR_0->pid);
}
