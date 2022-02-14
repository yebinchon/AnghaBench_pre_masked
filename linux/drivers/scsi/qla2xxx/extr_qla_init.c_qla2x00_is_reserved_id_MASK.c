
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct qla_hw_data {scalar_t__ max_loop_id; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_1(scsi_qla_host_t *VAR_4, uint16_t VAR_5)
{
 struct qla_hw_data *VAR_6 = VAR_4->hw;

 if (FUNC_0(VAR_6))
  return VAR_5 > VAR_2;

 return (VAR_5 > VAR_6->max_loop_id && VAR_5 < VAR_3) ||
  VAR_5 == VAR_1 || VAR_5 == VAR_0;
}
