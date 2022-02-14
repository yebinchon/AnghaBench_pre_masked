
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_transport_template {int create_work_queue; int eh_strategy_handler; } ;
struct sas_internal {struct sas_domain_function_template* dft; } ;
struct sas_domain_function_template {int dummy; } ;


 struct scsi_transport_template* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sas_internal* FUNC_1 (struct scsi_transport_template*) ;

struct scsi_transport_template *
FUNC_2(struct sas_domain_function_template *VAR_2)
{
 struct scsi_transport_template *VAR_3 = FUNC_0(&VAR_1);
 struct sas_internal *VAR_4;

 if (!VAR_3)
  return VAR_3;

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->dft = VAR_2;
 VAR_3->create_work_queue = 1;
 VAR_3->eh_strategy_handler = VAR_0;

 return VAR_3;
}
