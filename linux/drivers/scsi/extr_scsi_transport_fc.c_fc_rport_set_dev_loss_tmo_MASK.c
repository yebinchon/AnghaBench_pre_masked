
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_rport {scalar_t__ port_state; int fast_io_fail_tmo; } ;
struct fc_internal {TYPE_1__* f; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_2__ {int (* set_rport_dev_loss_tmo ) (struct fc_rport*,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 struct Scsi_Host* FUNC_0 (struct fc_rport*) ;
 int FUNC_1 (struct fc_rport*,unsigned long) ;
 struct fc_internal* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct fc_rport *VAR_7,
         unsigned long VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_0(VAR_7);
 struct fc_internal *VAR_10 = FUNC_2(VAR_9->transportt);

 if ((VAR_7->port_state == VAR_2) ||
     (VAR_7->port_state == VAR_3) ||
     (VAR_7->port_state == VAR_4))
  return -VAR_0;



 if (VAR_8 > VAR_6)
  return -VAR_1;





 if (VAR_7->fast_io_fail_tmo == -1 &&
     VAR_8 > VAR_5)
  return -VAR_1;

 VAR_10->f->set_rport_dev_loss_tmo(VAR_7, VAR_8);
 return 0;
}
