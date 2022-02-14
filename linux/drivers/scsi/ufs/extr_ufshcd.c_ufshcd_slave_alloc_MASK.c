
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dummy; } ;
struct scsi_device {int use_10_for_ms; int allow_restart; int no_report_opcodes; int no_write_same; int host; } ;


 struct ufs_hba* FUNC_0 (int ) ;
 int FUNC_1 (struct ufs_hba*,struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_0)
{
 struct ufs_hba *VAR_1;

 VAR_1 = FUNC_0(VAR_0->host);


 VAR_0->use_10_for_ms = 1;


 VAR_0->allow_restart = 1;


 VAR_0->no_report_opcodes = 1;


 VAR_0->no_write_same = 1;

 FUNC_2(VAR_0);

 FUNC_1(VAR_1, VAR_0);

 return 0;
}
