
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mvpp2_dbgfs_flow_entry* private; } ;
struct mvpp2_dbgfs_flow_entry {int flow; } ;
struct mvpp2_cls_flow {int flow_id; } ;


 int VAR_0 ;
 struct mvpp2_cls_flow* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 const struct mvpp2_dbgfs_flow_entry *VAR_3 = VAR_1->private;
 const struct mvpp2_cls_flow *VAR_4;

 VAR_4 = FUNC_0(VAR_3->flow);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_1, "%d\n", VAR_4->flow_id);

 return 0;
}
