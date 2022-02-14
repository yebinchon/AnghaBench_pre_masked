
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct seq_file {struct scsi_qla_host* private; } ;
struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_qla_host*,int *,int ) ;
 int FUNC_1 (struct seq_file*,char*,int,...) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int
FUNC_3(struct seq_file *VAR_3, void *VAR_4)
{
 struct scsi_qla_host *VAR_5 = VAR_3->private;
 uint16_t VAR_6[VAR_0];
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_2);
 if (VAR_7 != VAR_1) {
  FUNC_1(VAR_3, "Mailbox Command failed %d, mb %#x", VAR_7, VAR_6[0]);
 } else {
  FUNC_2(VAR_3, "FW Resource count\n\n");
  FUNC_1(VAR_3, "Original TGT exchg count[%d]\n", VAR_6[1]);
  FUNC_1(VAR_3, "current TGT exchg count[%d]\n", VAR_6[2]);
  FUNC_1(VAR_3, "original Initiator Exchange count[%d]\n", VAR_6[3]);
  FUNC_1(VAR_3, "Current Initiator Exchange count[%d]\n", VAR_6[6]);
  FUNC_1(VAR_3, "Original IOCB count[%d]\n", VAR_6[7]);
  FUNC_1(VAR_3, "Current IOCB count[%d]\n", VAR_6[10]);
  FUNC_1(VAR_3, "MAX VP count[%d]\n", VAR_6[11]);
  FUNC_1(VAR_3, "MAX FCF count[%d]\n", VAR_6[12]);
  FUNC_1(VAR_3, "Current free pageable XCB buffer cnt[%d]\n",
      VAR_6[20]);
  FUNC_1(VAR_3, "Original Initiator fast XCB buffer cnt[%d]\n",
      VAR_6[21]);
  FUNC_1(VAR_3, "Current free Initiator fast XCB buffer cnt[%d]\n",
      VAR_6[22]);
  FUNC_1(VAR_3, "Original Target fast XCB buffer cnt[%d]\n",
      VAR_6[23]);

 }

 return 0;
}
