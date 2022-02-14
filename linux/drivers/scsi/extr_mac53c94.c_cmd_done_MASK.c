
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct fsc_state {int phase; struct scsi_cmnd* current_req; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsc_state*) ;
 int FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_2(struct fsc_state *VAR_1, int VAR_2)
{
 struct scsi_cmnd *VAR_3;

 VAR_3 = VAR_1->current_req;
 if (VAR_3 != 0) {
  VAR_3->result = VAR_2;
  (*VAR_3->scsi_done)(VAR_3);
  VAR_1->current_req = ((void*)0);
 }
 VAR_1->phase = VAR_0;
 FUNC_0(VAR_1);
}
