
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {struct Scsi_Host* scsi_host; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct pqi_ctrl_info*) ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_3(struct pqi_ctrl_info *VAR_0)
{
 struct Scsi_Host *VAR_1;

 FUNC_0(VAR_0);

 VAR_1 = VAR_0->scsi_host;
 if (!VAR_1)
  return;

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
