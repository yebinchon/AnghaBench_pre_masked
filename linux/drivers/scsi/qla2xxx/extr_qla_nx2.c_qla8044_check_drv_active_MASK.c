
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int portnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_qla_host*,int ) ;

__attribute__((used)) static int
FUNC_1(struct scsi_qla_host *VAR_3)
{
 uint32_t VAR_4;
 struct qla_hw_data *VAR_5 = VAR_3->hw;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4 & (1 << VAR_5->portnum))
  return VAR_1;
 else
  return VAR_2;
}
