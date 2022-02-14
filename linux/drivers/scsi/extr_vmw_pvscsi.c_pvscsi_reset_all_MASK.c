
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct pvscsi_ctx {struct scsi_cmnd* cmd; } ;
struct pvscsi_adapter {unsigned int req_depth; struct pvscsi_ctx* cmd_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvscsi_adapter*,struct pvscsi_ctx*) ;
 int FUNC_1 (struct pvscsi_adapter*,struct pvscsi_ctx*) ;
 int FUNC_2 (int ,struct scsi_cmnd*,char*,struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_4(struct pvscsi_adapter *VAR_2)
{
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->req_depth; VAR_3++) {
  struct pvscsi_ctx *VAR_4 = &VAR_2->cmd_map[VAR_3];
  struct scsi_cmnd *VAR_5 = VAR_4->cmd;
  if (VAR_5) {
   FUNC_2(VAR_1, VAR_5,
        "Forced reset on cmd %p\n", VAR_5);
   FUNC_1(VAR_2, VAR_4);
   FUNC_0(VAR_2, VAR_4);
   VAR_5->result = (VAR_0 << 16);
   VAR_5->scsi_done(VAR_5);
  }
 }
}
