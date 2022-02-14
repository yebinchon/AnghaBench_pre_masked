
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_msg {scalar_t__ scsi_status; int variable; } ;
struct st_ccb {int * cmd; int sense_bufflen; int * sense_buffer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct st_ccb *VAR_1,
 struct status_msg *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->scsi_status != VAR_0) {
  if (VAR_1->sense_buffer != ((void*)0))
   FUNC_0(VAR_1->sense_buffer, VAR_2->variable,
    FUNC_1(VAR_3, VAR_1->sense_bufflen));
  return;
 }

 if (VAR_1->cmd == ((void*)0))
  return;
 FUNC_2(VAR_1->cmd, VAR_2->variable, VAR_3);
}
