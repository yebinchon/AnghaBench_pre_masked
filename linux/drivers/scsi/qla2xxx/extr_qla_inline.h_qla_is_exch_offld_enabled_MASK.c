
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {scalar_t__ ql2xiniexchg; scalar_t__ ql2xexchoffld; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;

__attribute__((used)) static inline bool
FUNC_3(struct scsi_qla_host *VAR_1)
{
 if (FUNC_1(VAR_1) &&
     (VAR_1->ql2xiniexchg > VAR_0))
  return 1;
 else if (FUNC_2(VAR_1) &&
     (VAR_1->ql2xexchoffld > VAR_0))
  return 1;
 else if (FUNC_0(VAR_1) &&
     ((VAR_1->ql2xiniexchg + VAR_1->ql2xexchoffld) > VAR_0))
  return 1;
 else
  return 0;
}
