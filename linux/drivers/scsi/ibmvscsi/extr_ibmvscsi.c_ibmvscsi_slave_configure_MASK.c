
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ type; int allow_restart; int request_queue; struct Scsi_Host* host; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_2->host;
 unsigned long VAR_4 = 0;

 FUNC_1(VAR_3->host_lock, VAR_4);
 if (VAR_2->type == VAR_1) {
  VAR_2->allow_restart = 1;
  FUNC_0(VAR_2->request_queue, 120 * VAR_0);
 }
 FUNC_2(VAR_3->host_lock, VAR_4);
 return 0;
}
