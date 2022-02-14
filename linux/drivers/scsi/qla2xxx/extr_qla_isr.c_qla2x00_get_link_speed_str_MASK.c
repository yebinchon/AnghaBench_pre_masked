
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct qla_hw_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;

const char *
FUNC_2(struct qla_hw_data *VAR_2, uint16_t VAR_3)
{
 static const char *const VAR_4[] = {
  "1", "2", "?", "4", "8", "16", "32", "10"
 };


 if (FUNC_0(VAR_2) || FUNC_1(VAR_2))
  return VAR_4[0];
 else if (VAR_3 == 0x13)
  return VAR_4[(FUNC_0(VAR_4) - 1)];
 else if (VAR_3 < (FUNC_0(VAR_4) - 1))
  return VAR_4[VAR_3];
 else
  return VAR_4[VAR_0];
}
