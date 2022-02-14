
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct powertec_info {int info; scalar_t__ term_ctl; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 char* VAR_0 ;
 int FUNC_0 (int *,struct seq_file*) ;
 int FUNC_1 (int *,struct seq_file*) ;
 int FUNC_2 (int *,struct seq_file*) ;
 int FUNC_3 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, struct Scsi_Host *VAR_2)
{
 struct powertec_info *VAR_3;

 VAR_3 = (struct powertec_info *)VAR_2->hostdata;

 FUNC_3(VAR_1, "PowerTec SCSI driver v%s\n", VAR_0);
 FUNC_1(&VAR_3->info, VAR_1);
 FUNC_3(VAR_1, "Term    : o%s\n",
   VAR_3->term_ctl ? "n" : "ff");

 FUNC_2(&VAR_3->info, VAR_1);
 FUNC_0(&VAR_3->info, VAR_1);
 return 0;
}
