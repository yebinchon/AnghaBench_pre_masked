
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;
struct ql4_tuple_ddb {scalar_t__ port; int * isid; int iscsi_name; int ip_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_qla_host *VAR_2,
          struct ql4_tuple_ddb *VAR_3,
          struct ql4_tuple_ddb *VAR_4)
{
 if (FUNC_1(VAR_3->ip_addr, VAR_4->ip_addr) == 0) {

  if (VAR_3->port == VAR_4->port)
   return VAR_0;
 }

 if (FUNC_1(VAR_3->iscsi_name, VAR_4->iscsi_name))

  return VAR_0;

 if (FUNC_0(&VAR_3->isid[0], &VAR_4->isid[0],
     sizeof(VAR_3->isid)))

  return VAR_0;

 return VAR_1;
}
