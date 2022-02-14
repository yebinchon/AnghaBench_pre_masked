
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mvpp2_dbgfs_flow_entry* private; } ;
struct mvpp2_dbgfs_flow_entry {int flow; } ;
struct mvpp2_cls_flow {int flow_type; } ;


 int VAR_0 ;






 struct mvpp2_cls_flow* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct mvpp2_dbgfs_flow_entry *VAR_3 = VAR_1->private;
 const struct mvpp2_cls_flow *VAR_4;
 const char *VAR_5;

 VAR_4 = FUNC_0(VAR_3->flow);
 if (!VAR_4)
  return -VAR_0;

 switch (VAR_4->flow_type) {
 case 133:
  VAR_5 = "ipv4";
  break;
 case 132:
  VAR_5 = "ipv6";
  break;
 case 131:
  VAR_5 = "tcp4";
  break;
 case 130:
  VAR_5 = "tcp6";
  break;
 case 129:
  VAR_5 = "udp4";
  break;
 case 128:
  VAR_5 = "udp6";
  break;
 default:
  VAR_5 = "other";
 }

 FUNC_1(VAR_1, "%s\n", VAR_5);

 return 0;
}
