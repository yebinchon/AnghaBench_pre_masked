
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_dbgfs_flow_entry {int flow; struct mvpp2* priv; } ;
struct mvpp2 {int port_count; int * port_list; TYPE_1__* dbgfs_entries; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct mvpp2_dbgfs_flow_entry* flow_entries; } ;


 struct dentry* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*,int,struct dentry*,struct mvpp2_dbgfs_flow_entry*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct dentry*,int ,struct mvpp2_dbgfs_flow_entry*) ;
 int VAR_2 ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_3,
           struct mvpp2 *VAR_4, int VAR_5)
{
 struct mvpp2_dbgfs_flow_entry *VAR_6;
 struct dentry *VAR_7;
 char VAR_8[10];
 int VAR_9, VAR_10;

 FUNC_3(VAR_8, "%02d", VAR_5);

 VAR_7 = FUNC_0(VAR_8, VAR_3);

 VAR_6 = &VAR_4->dbgfs_entries->flow_entries[VAR_5];

 VAR_6->flow = VAR_5;
 VAR_6->priv = VAR_4;

 FUNC_1("dec_hits", 0444, VAR_7, VAR_6,
       &VAR_0);

 FUNC_1("type", 0444, VAR_7, VAR_6,
       &VAR_2);

 FUNC_1("id", 0444, VAR_7, VAR_6,
       &VAR_1);


 for (VAR_9 = 0; VAR_9 < VAR_4->port_count; VAR_9++) {
  VAR_10 = FUNC_2(VAR_7,
       VAR_4->port_list[VAR_9], VAR_6);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
