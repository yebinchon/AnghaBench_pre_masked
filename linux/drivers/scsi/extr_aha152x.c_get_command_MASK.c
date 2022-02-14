
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct seq_file {int dummy; } ;
struct TYPE_4__ {int phase; int buffer; int this_residual; } ;
struct scsi_cmnd {TYPE_2__ SCp; int * cmnd; TYPE_1__* device; } ;
struct TYPE_3__ {scalar_t__ lun; int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int VAR_5 ;
 int FUNC_3 (struct seq_file*,char*,struct scsi_cmnd*,...) ;
 int FUNC_4 (struct seq_file*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_6(struct seq_file *VAR_8, struct scsi_cmnd * VAR_9)
{
 int VAR_10;

 FUNC_3(VAR_8, "%p: target=%d; lun=%d; cmnd=( ",
  VAR_9, VAR_9->device->id, (u8)VAR_9->device->lun);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_9->cmnd[0]); VAR_10++)
  FUNC_3(VAR_8, "0x%02x ", VAR_9->cmnd[VAR_10]);

 FUNC_3(VAR_8, "); resid=%d; residual=%d; buffers=%d; phase |",
  FUNC_2(VAR_9), VAR_9->SCp.this_residual,
  FUNC_5(VAR_9->SCp.buffer) - 1);

 if (VAR_9->SCp.phase & VAR_4)
  FUNC_4(VAR_8, "not issued|");
 if (VAR_9->SCp.phase & VAR_5)
  FUNC_4(VAR_8, "selecting|");
 if (VAR_9->SCp.phase & VAR_2)
  FUNC_4(VAR_8, "disconnected|");
 if (VAR_9->SCp.phase & VAR_0)
  FUNC_4(VAR_8, "aborted|");
 if (VAR_9->SCp.phase & VAR_3)
  FUNC_4(VAR_8, "identified|");
 if (VAR_9->SCp.phase & VAR_1)
  FUNC_4(VAR_8, "completed|");
 if (VAR_9->SCp.phase & VAR_6)
  FUNC_4(VAR_8, "spiordy|");
 if (VAR_9->SCp.phase & VAR_7)
  FUNC_4(VAR_8, "syncneg|");
 FUNC_3(VAR_8, "; next=0x%p\n", FUNC_1(VAR_9));
}
