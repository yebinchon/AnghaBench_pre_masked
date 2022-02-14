
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_rport {int dev; } ;
struct fc_internal {TYPE_1__* f; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_2__ {int (* terminate_rport_io ) (struct fc_rport*) ;} ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct fc_rport*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct fc_rport*) ;
 struct fc_internal* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct fc_rport *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_0(VAR_1);
 struct fc_internal *VAR_3 = FUNC_3(VAR_2->transportt);


 if (VAR_3->f->terminate_rport_io)
  VAR_3->f->terminate_rport_io(VAR_1);




 FUNC_1(&VAR_1->dev, VAR_0);
}
