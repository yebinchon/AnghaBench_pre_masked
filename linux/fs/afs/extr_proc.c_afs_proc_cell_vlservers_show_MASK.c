
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct afs_vl_seq_net_private* private; } ;
struct afs_vlserver_list {size_t source; size_t status; } ;
struct afs_vlserver_entry {size_t source; size_t status; int weight; int priority; struct afs_vlserver* server; } ;
struct afs_vlserver {int name; int addresses; } ;
struct afs_vl_seq_net_private {struct afs_vlserver_list* vllist; } ;
struct afs_addr_list {size_t source; size_t status; int nr_addrs; int preferred; TYPE_1__* addrs; } ;
struct TYPE_2__ {int transport; } ;


 void* VAR_0 ;
 int ** VAR_1 ;
 char* VAR_2 ;
 struct afs_addr_list* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,char,int *,...) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_3, void *VAR_4)
{
 const struct afs_vl_seq_net_private *VAR_5 = VAR_3->private;
 const struct afs_vlserver_list *VAR_6 = VAR_5->vllist;
 const struct afs_vlserver_entry *VAR_7;
 const struct afs_vlserver *VAR_8;
 const struct afs_addr_list *VAR_9;
 int VAR_10;

 if (VAR_4 == VAR_0) {
  FUNC_1(VAR_3, "# source %s, status %s\n",
      VAR_2[VAR_6 ? VAR_6->source : 0],
      VAR_1[VAR_6 ? VAR_6->status : 0]);
  return 0;
 }

 VAR_7 = VAR_4;
 VAR_8 = VAR_7->server;
 VAR_9 = FUNC_0(VAR_8->addresses);

 FUNC_1(VAR_3, "%s [p=%hu w=%hu s=%s,%s]:\n",
     VAR_8->name, VAR_7->priority, VAR_7->weight,
     VAR_2[VAR_9 ? VAR_9->source : VAR_7->source],
     VAR_1[VAR_9 ? VAR_9->status : VAR_7->status]);
 if (VAR_9) {
  for (VAR_10 = 0; VAR_10 < VAR_9->nr_addrs; VAR_10++)
   FUNC_1(VAR_3, " %c %pISpc\n",
       VAR_9->preferred == VAR_10 ? '>' : '-',
       &VAR_9->addrs[VAR_10].transport);
 }
 return 0;
}
