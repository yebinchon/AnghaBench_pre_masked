
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct l2t_data* private; } ;
struct l2t_entry {scalar_t__ state; int vlan; int lock; TYPE_2__* neigh; int refcnt; int lport; int dmac; scalar_t__ idx; scalar_t__ v6; int addr; } ;
struct l2t_data {scalar_t__ l2t_start; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {char* name; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct l2t_entry*) ;
 int FUNC_2 (struct seq_file*,char*,scalar_t__,char*,int ,int,int ,int ,int ,int ,char*) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (struct l2t_entry*) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_3, void *VAR_4)
{
 if (VAR_4 == VAR_1)
  FUNC_3(VAR_3, " Idx IP address                "
    "Ethernet address  VLAN/P LP State Users Port\n");
 else {
  char VAR_5[60];
  struct l2t_data *VAR_6 = VAR_3->private;
  struct l2t_entry *VAR_7 = VAR_4;

  FUNC_4(&VAR_7->lock);
  if (VAR_7->state == VAR_0)
   VAR_5[0] = '\0';
  else
   FUNC_6(VAR_5, VAR_7->v6 ? "%pI6c" : "%pI4", VAR_7->addr);
  FUNC_2(VAR_3, "%4u %-25s %17pM %4d %u %2u   %c   %5u %s\n",
      VAR_7->idx + VAR_6->l2t_start, VAR_5, VAR_7->dmac,
      VAR_7->vlan & VAR_2, FUNC_7(VAR_7), VAR_7->lport,
      FUNC_1(VAR_7), FUNC_0(&VAR_7->refcnt),
      VAR_7->neigh ? VAR_7->neigh->dev->name : "");
  FUNC_5(&VAR_7->lock);
 }
 return 0;
}
