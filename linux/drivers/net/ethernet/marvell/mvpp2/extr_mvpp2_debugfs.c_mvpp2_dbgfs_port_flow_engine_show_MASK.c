
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct mvpp2_dbgfs_port_flow_entry* private; } ;
struct mvpp2_port {int priv; int id; } ;
struct mvpp2_dbgfs_port_flow_entry {struct mvpp2_port* port; TYPE_1__* dbg_fe; } ;
struct mvpp2_cls_flow_entry {int dummy; } ;
struct mvpp2_cls_flow {int flow_id; } ;
struct TYPE_2__ {int flow; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mvpp2_cls_flow_entry*) ;
 struct mvpp2_cls_flow* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,struct mvpp2_cls_flow_entry*) ;
 int FUNC_4 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 struct mvpp2_dbgfs_port_flow_entry *VAR_3 = VAR_1->private;
 struct mvpp2_port *VAR_4 = VAR_3->port;
 struct mvpp2_cls_flow_entry VAR_5;
 const struct mvpp2_cls_flow *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_2(VAR_3->dbg_fe->flow);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3->port->id, VAR_6->flow_id);

 FUNC_3(VAR_4->priv, VAR_7, &VAR_5);

 VAR_8 = FUNC_1(&VAR_5);

 FUNC_4(VAR_1, "%d\n", VAR_8);

 return 0;
}
