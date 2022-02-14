
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int dummy; } ;


 size_t const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qla_hw_data*,int ) ;
 int * VAR_2 ;

int
FUNC_1(struct scsi_qla_host *VAR_3,
 const uint32_t VAR_4)
{
 struct qla_hw_data *VAR_5 = VAR_3->hw;

 if (VAR_4 < VAR_0)
  return FUNC_0(VAR_5, VAR_2[VAR_4]);
 else
  return VAR_1;
}
