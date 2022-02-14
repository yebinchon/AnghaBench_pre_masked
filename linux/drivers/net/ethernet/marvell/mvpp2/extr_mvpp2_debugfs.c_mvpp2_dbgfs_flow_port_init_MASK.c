
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mvpp2_port {size_t id; TYPE_1__* priv; TYPE_2__* dev; } ;
struct mvpp2_dbgfs_port_flow_entry {struct mvpp2_dbgfs_flow_entry* dbg_fe; struct mvpp2_port* port; } ;
struct mvpp2_dbgfs_flow_entry {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {struct mvpp2_dbgfs_port_flow_entry* port_flow_entries; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {TYPE_3__* dbgfs_entries; } ;


 struct dentry* FUNC_0 (int ,struct dentry*) ;
 int FUNC_1 (char*,int,struct dentry*,struct mvpp2_dbgfs_port_flow_entry*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_2,
          struct mvpp2_port *VAR_3,
          struct mvpp2_dbgfs_flow_entry *VAR_4)
{
 struct mvpp2_dbgfs_port_flow_entry *VAR_5;
 struct dentry *VAR_6;

 VAR_6 = FUNC_0(VAR_3->dev->name, VAR_2);

 VAR_5 = &VAR_3->priv->dbgfs_entries->port_flow_entries[VAR_3->id];

 VAR_5->port = VAR_3;
 VAR_5->dbg_fe = VAR_4;

 FUNC_1("hash_opts", 0444, VAR_6, VAR_5,
       &VAR_1);

 FUNC_1("engine", 0444, VAR_6, VAR_5,
       &VAR_0);

 return 0;
}
