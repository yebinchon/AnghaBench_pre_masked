
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterCtlBlk {int io_port_len; scalar_t__ io_port_base; scalar_t__ irq_level; int scsi_host; int selto_timer; int waiting_timer; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct AdapterCtlBlk*) ;
 int FUNC_3 (struct AdapterCtlBlk*) ;
 int FUNC_4 (struct AdapterCtlBlk*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,struct AdapterCtlBlk*) ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct AdapterCtlBlk *VAR_0)
{
 unsigned long VAR_1;
 FUNC_0(VAR_0->scsi_host, VAR_1);


 if (FUNC_8(&VAR_0->waiting_timer))
  FUNC_5(&VAR_0->waiting_timer);
 if (FUNC_8(&VAR_0->selto_timer))
  FUNC_5(&VAR_0->selto_timer);

 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->scsi_host, VAR_1);

 if (VAR_0->irq_level)
  FUNC_6(VAR_0->irq_level, VAR_0);
 if (VAR_0->io_port_base)
  FUNC_7(VAR_0->io_port_base, VAR_0->io_port_len);

 FUNC_3(VAR_0);
}
