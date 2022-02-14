
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;
struct NCR5380_hostdata {int work_q; int main_task; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct NCR5380_hostdata* FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_3(struct Scsi_Host *VAR_0)
{
 struct NCR5380_hostdata *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->main_task);
 FUNC_1(VAR_1->work_q);
}
