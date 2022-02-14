
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {scalar_t__ io_port; scalar_t__ irq; } ;
struct TYPE_2__ {int host_list; scalar_t__ pnpdev; } ;


 TYPE_1__* FUNC_0 (struct Scsi_Host*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,struct Scsi_Host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct Scsi_Host*) ;

void FUNC_7(struct Scsi_Host *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_6(VAR_1);
 if (VAR_1->irq)
  FUNC_1(VAR_1->irq, VAR_1);


 if (VAR_1->io_port)
  FUNC_4(VAR_1->io_port, VAR_0);







 FUNC_2(&FUNC_0(VAR_1)->host_list);
 FUNC_5(VAR_1);
}
