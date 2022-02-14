
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int func_num; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (struct scsi_qla_host*,int ) ;
 int FUNC_3 (struct scsi_qla_host*,int ,int) ;

__attribute__((used)) static inline void
FUNC_4(struct scsi_qla_host *VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_0);






 if (FUNC_0(VAR_1) || FUNC_1(VAR_1))
  VAR_2 |= (1 << VAR_1->func_num);
 else
  VAR_2 |= (2 << (VAR_1->func_num * 4));

 FUNC_3(VAR_1, VAR_0, VAR_2);
}
