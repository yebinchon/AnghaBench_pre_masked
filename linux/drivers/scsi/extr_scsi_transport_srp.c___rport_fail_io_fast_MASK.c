
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct srp_rport {TYPE_1__ dev; int mutex; } ;
struct srp_internal {TYPE_2__* f; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_4__ {int (* terminate_rport_io ) (struct srp_rport*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct Scsi_Host* FUNC_1 (struct srp_rport*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct srp_rport*,int ) ;
 int FUNC_5 (struct srp_rport*) ;
 struct srp_internal* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct srp_rport *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_2);
 struct srp_internal *VAR_4;

 FUNC_0(&VAR_2->mutex);

 if (FUNC_4(VAR_2, VAR_1))
  return;




 FUNC_2(VAR_2->dev.parent);
 FUNC_3(VAR_2->dev.parent, VAR_0);


 VAR_4 = FUNC_6(VAR_3->transportt);
 if (VAR_4->f->terminate_rport_io)
  VAR_4->f->terminate_rport_io(VAR_2);
}
