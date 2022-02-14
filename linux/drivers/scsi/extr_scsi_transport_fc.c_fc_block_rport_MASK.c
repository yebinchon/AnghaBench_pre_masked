
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport {scalar_t__ port_state; int flags; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct Scsi_Host* FUNC_1 (struct fc_rport*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

int FUNC_4(struct fc_rport *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5;

 FUNC_2(VAR_4->host_lock, VAR_5);
 while (VAR_3->port_state == VAR_1 &&
        !(VAR_3->flags & VAR_2)) {
  FUNC_3(VAR_4->host_lock, VAR_5);
  FUNC_0(1000);
  FUNC_2(VAR_4->host_lock, VAR_5);
 }
 FUNC_3(VAR_4->host_lock, VAR_5);

 if (VAR_3->flags & VAR_2)
  return VAR_0;

 return 0;
}
