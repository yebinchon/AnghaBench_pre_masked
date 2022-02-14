
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct ctlr_info {int dummy; } ;
struct CommandList {int dummy; } ;


 int FUNC_0 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_2(struct ctlr_info *VAR_0,
  struct CommandList *VAR_1, struct scsi_cmnd *VAR_2)
{
 FUNC_0(VAR_0, VAR_1);
 if (VAR_2 && VAR_2->scsi_done)
  VAR_2->scsi_done(VAR_2);
}
