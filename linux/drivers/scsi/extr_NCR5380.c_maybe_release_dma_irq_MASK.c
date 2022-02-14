
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;
struct NCR5380_hostdata {int selecting; int connected; int autosense; int unissued; int disconnected; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct NCR5380_hostdata* FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static inline void FUNC_3(struct Scsi_Host *VAR_0)
{
 struct NCR5380_hostdata *VAR_1 = FUNC_2(VAR_0);


 if (FUNC_1(&VAR_1->disconnected) &&
     FUNC_1(&VAR_1->unissued) &&
     FUNC_1(&VAR_1->autosense) &&
     !VAR_1->connected &&
     !VAR_1->selecting) {
  FUNC_0(VAR_0);
 }
}
