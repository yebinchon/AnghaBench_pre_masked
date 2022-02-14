
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct adapter* private; } ;
struct port_info {int viid; int port_id; } ;
struct net_device {int name; } ;
struct adapter {struct net_device** port; } ;


 void* VAR_0 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 if (VAR_2 == VAR_0) {
  FUNC_2(VAR_1, "Interface  Port   VIID\n");
 } else {
  struct adapter *VAR_3 = VAR_1->private;
  int VAR_4 = (uintptr_t)VAR_2 - 2;
  struct net_device *VAR_5 = VAR_3->port[VAR_4];
  struct port_info *VAR_6 = FUNC_0(VAR_5);

  FUNC_1(VAR_1, "%9s  %4d  %#5x\n",
      VAR_5->name, VAR_6->port_id, VAR_6->viid);
 }
 return 0;
}
