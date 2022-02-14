
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct scsi_device {int* vendor; int* model; int* rev; int scsi_level; int type; int lun; int id; int channel; TYPE_1__* host; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int host_no; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct seq_file*,char*,int,...) ;
 int FUNC_3 (struct seq_file*,char) ;
 int FUNC_4 (struct seq_file*,char*) ;
 struct scsi_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0, void *VAR_1)
{
 struct scsi_device *VAR_2;
 struct seq_file *VAR_3 = VAR_1;
 int VAR_4;

 if (!FUNC_1(VAR_0))
  goto out;

 VAR_2 = FUNC_5(VAR_0);
 FUNC_2(VAR_3,
  "Host: scsi%d Channel: %02d Id: %02d Lun: %02llu\n  Vendor: ",
  VAR_2->host->host_no, VAR_2->channel, VAR_2->id, VAR_2->lun);
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  if (VAR_2->vendor[VAR_4] >= 0x20)
   FUNC_3(VAR_3, VAR_2->vendor[VAR_4]);
  else
   FUNC_3(VAR_3, ' ');
 }

 FUNC_4(VAR_3, " Model: ");
 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  if (VAR_2->model[VAR_4] >= 0x20)
   FUNC_3(VAR_3, VAR_2->model[VAR_4]);
  else
   FUNC_3(VAR_3, ' ');
 }

 FUNC_4(VAR_3, " Rev: ");
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  if (VAR_2->rev[VAR_4] >= 0x20)
   FUNC_3(VAR_3, VAR_2->rev[VAR_4]);
  else
   FUNC_3(VAR_3, ' ');
 }

 FUNC_3(VAR_3, '\n');

 FUNC_2(VAR_3, "  Type:   %s ", FUNC_0(VAR_2->type));
 FUNC_2(VAR_3, "               ANSI  SCSI revision: %02x",
   VAR_2->scsi_level - (VAR_2->scsi_level > 1));
 if (VAR_2->scsi_level == 2)
  FUNC_4(VAR_3, " CCS\n");
 else
  FUNC_3(VAR_3, '\n');

out:
 return 0;
}
