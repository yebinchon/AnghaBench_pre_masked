
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phase; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 int * FUNC_1 (struct scsi_cmnd*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,struct scsi_cmnd*,char*,int ,int ,char*,char*,char*,char*,char*,char*,char*,char*,char*,int *) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_6(struct scsi_cmnd *VAR_10)
{
 FUNC_5(VAR_10);
 FUNC_2(VAR_0, VAR_10,
      "request_bufflen=%d; resid=%d; "
      "phase |%s%s%s%s%s%s%s%s%s; next=0x%p",
      FUNC_3(VAR_10), FUNC_4(VAR_10),
      (VAR_10->SCp.phase & VAR_5) ? "not issued|" : "",
      (VAR_10->SCp.phase & VAR_7) ? "selecting|" : "",
      (VAR_10->SCp.phase & VAR_4) ? "identified|" : "",
      (VAR_10->SCp.phase & VAR_3) ? "disconnected|" : "",
      (VAR_10->SCp.phase & VAR_2) ? "completed|" : "",
      (VAR_10->SCp.phase & VAR_8) ? "spiordy|" : "",
      (VAR_10->SCp.phase & VAR_9) ? "syncneg|" : "",
      (VAR_10->SCp.phase & VAR_1) ? "aborted|" : "",
      (VAR_10->SCp.phase & VAR_6) ? "resetted|" : "",
      (FUNC_0(VAR_10)) ? FUNC_1(VAR_10) : ((void*)0));
}
