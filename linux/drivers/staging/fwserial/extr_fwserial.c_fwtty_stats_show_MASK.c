
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct fw_serial* private; } ;
struct fwtty_port {int index; } ;
struct fw_serial {TYPE_1__** ports; } ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (struct seq_file*,struct fwtty_port*) ;
 struct fwtty_port* FUNC_1 (int ) ;
 int FUNC_2 (struct fwtty_port*) ;
 int FUNC_3 (struct seq_file*,struct fwtty_port*) ;
 int VAR_0 ;
 int FUNC_4 (struct seq_file*,char*,int ) ;
 int FUNC_5 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_1, void *VAR_2)
{
 struct fw_serial *VAR_3 = VAR_1->private;
 struct fwtty_port *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  VAR_4 = FUNC_1(VAR_3->ports[VAR_5]->index);
  if (VAR_4) {
   FUNC_4(VAR_1, "%2d:", VAR_4->index);
   FUNC_3(VAR_1, VAR_4);
   FUNC_0(VAR_1, VAR_4);
   FUNC_2(VAR_4);
   FUNC_5(VAR_1, "\n");
  }
 }
 return 0;
}
