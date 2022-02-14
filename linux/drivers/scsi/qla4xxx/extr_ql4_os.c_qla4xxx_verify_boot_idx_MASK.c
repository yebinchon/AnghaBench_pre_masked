
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct scsi_qla_host {scalar_t__ pri_ddb_idx; scalar_t__ sec_ddb_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct scsi_qla_host *VAR_3, uint16_t VAR_4)
{
 if (VAR_2)
  return VAR_1;
 if (VAR_4 == VAR_3->pri_ddb_idx || VAR_4 == VAR_3->sec_ddb_idx)
  return VAR_0;
 return VAR_1;
}
