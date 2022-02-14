
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;scalar_t__ host_scribble; } ;
struct qlogicpti {TYPE_1__* qhost; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 struct scsi_cmnd* FUNC_0 (struct qlogicpti*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct qlogicpti *VAR_3 = VAR_2;
 unsigned long VAR_4;
 struct scsi_cmnd *VAR_5;

 FUNC_1(VAR_3->qhost->host_lock, VAR_4);
 VAR_5 = FUNC_0(VAR_3);

 if (VAR_5 != ((void*)0)) {
  do {
   struct scsi_cmnd *VAR_6;

   VAR_6 = (struct scsi_cmnd *) VAR_5->host_scribble;
   VAR_5->scsi_done(VAR_5);
   VAR_5 = VAR_6;
  } while (VAR_5 != ((void*)0));
 }
 FUNC_2(VAR_3->qhost->host_lock, VAR_4);

 return VAR_0;
}
