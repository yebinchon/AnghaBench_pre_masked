
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct Scsi_Host* private; } ;
struct Scsi_Host {TYPE_1__* hostt; } ;
struct TYPE_2__ {int (* show_info ) (struct seq_file*,struct Scsi_Host*) ;} ;


 int FUNC_0 (struct seq_file*,struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct Scsi_Host *VAR_2 = VAR_0->private;
 return VAR_2->hostt->show_info(VAR_0, VAR_2);
}
