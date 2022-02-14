
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct eesoxscsi_info {int control; int info; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *,struct seq_file*) ;
 int FUNC_1 (int *,struct seq_file*) ;
 int FUNC_2 (int *,struct seq_file*) ;
 int FUNC_3 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_2, struct Scsi_Host *VAR_3)
{
 struct eesoxscsi_info *VAR_4;

 VAR_4 = (struct eesoxscsi_info *)VAR_3->hostdata;

 FUNC_3(VAR_2, "EESOX SCSI driver v%s\n", VAR_1);
 FUNC_1(&VAR_4->info, VAR_2);
 FUNC_3(VAR_2, "Term    : o%s\n",
   VAR_4->control & VAR_0 ? "n" : "ff");

 FUNC_2(&VAR_4->info, VAR_2);
 FUNC_0(&VAR_4->info, VAR_2);
 return 0;
}
