
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int parent; } ;
struct scsi_target {scalar_t__ state; int siblings; struct device dev; } ;
struct Scsi_Host {int host_lock; TYPE_1__* hostt; } ;
struct TYPE_2__ {int (* target_destroy ) (struct scsi_target*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct Scsi_Host* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (struct scsi_target*) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static void FUNC_8(struct scsi_target *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_2->parent);
 unsigned long VAR_4;

 FUNC_0(VAR_1->state == VAR_0);
 VAR_1->state = VAR_0;
 FUNC_7(VAR_2);
 FUNC_4(VAR_3->host_lock, VAR_4);
 if (VAR_3->hostt->target_destroy)
  VAR_3->hostt->target_destroy(VAR_1);
 FUNC_2(&VAR_1->siblings);
 FUNC_5(VAR_3->host_lock, VAR_4);
 FUNC_3(VAR_2);
}
