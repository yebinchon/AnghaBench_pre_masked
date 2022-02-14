
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct scsi_qla_host {int dummy; } ;
struct qla_qpair {int qp_lock_ptr; } ;


 int FUNC_0 (struct scsi_qla_host*,struct qla_qpair*,int ,int ,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

int
FUNC_3(struct scsi_qla_host *VAR_0, struct qla_qpair *VAR_1,
    uint16_t VAR_2, uint64_t VAR_3, uint8_t VAR_4)
{
 int VAR_5;
 unsigned long VAR_6 = 0;

 FUNC_1(VAR_1->qp_lock_ptr, VAR_6);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_1->qp_lock_ptr, VAR_6);

 return (VAR_5);
}
