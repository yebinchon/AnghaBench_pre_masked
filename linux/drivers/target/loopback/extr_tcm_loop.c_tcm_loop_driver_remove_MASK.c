
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcm_loop_hba {struct Scsi_Host* sh; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct Scsi_Host*) ;
 struct tcm_loop_hba* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct tcm_loop_hba *VAR_1;
 struct Scsi_Host *VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = VAR_1->sh;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 return 0;
}
