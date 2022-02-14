
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct scsi_qla_host {int dummy; } ;
struct qla_work_evt {int type; int flags; int list; } ;
typedef enum qla_work_type { ____Placeholder_qla_work_type } qla_work_type ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct scsi_qla_host*,scalar_t__) ;
 int FUNC_2 (struct scsi_qla_host*) ;
 struct qla_work_evt* FUNC_3 (int,int ) ;

struct qla_work_evt *
FUNC_4(struct scsi_qla_host *VAR_2, enum qla_work_type VAR_3)
{
 struct qla_work_evt *VAR_4;
 uint8_t VAR_5;

 FUNC_1(VAR_2, VAR_5);
 if (VAR_5)
  return ((void*)0);

 VAR_4 = FUNC_3(sizeof(struct qla_work_evt), VAR_0);
 if (!VAR_4) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 FUNC_0(&VAR_4->list);
 VAR_4->type = VAR_3;
 VAR_4->flags = VAR_1;
 return VAR_4;
}
