
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdomain {int work; } ;
struct Scsi_Host {scalar_t__ irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,struct fdomain*) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 struct fdomain* FUNC_4 (struct Scsi_Host*) ;

int FUNC_5(struct Scsi_Host *VAR_0)
{
 struct fdomain *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(&VAR_1->work);
 FUNC_3(VAR_0);
 if (VAR_0->irq)
  FUNC_1(VAR_0->irq, VAR_1);
 FUNC_2(VAR_0);
 return 0;
}
