
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct ibmvfc_event {scalar_t__ eh_comp; struct scsi_cmnd* cmnd; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ibmvfc_event*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_4(struct ibmvfc_event *VAR_0)
{
 struct scsi_cmnd *VAR_1 = VAR_0->cmnd;

 if (VAR_1) {
  FUNC_2(VAR_1);
  VAR_1->scsi_done(VAR_1);
 }

 if (VAR_0->eh_comp)
  FUNC_0(VAR_0->eh_comp);

 FUNC_1(VAR_0);
}
