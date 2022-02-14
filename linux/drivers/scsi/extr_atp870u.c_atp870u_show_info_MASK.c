
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct Scsi_Host {int irq; int io_port; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, struct Scsi_Host *VAR_1)
{
 FUNC_1(VAR_0, "ACARD AEC-671X Driver Version: 2.6+ac\n\n"
  "Adapter Configuration:\n");
 FUNC_0(VAR_0, "               Base IO: %#.4lx\n", VAR_1->io_port);
 FUNC_0(VAR_0, "                   IRQ: %d\n", VAR_1->irq);
 return 0;
}
