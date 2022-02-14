
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qla_hw_data {scalar_t__ port_no; } ;


 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_3(struct qla_hw_data *VAR_2)
{
 uint32_t VAR_3 = 0;

 if (!FUNC_2(VAR_2) && !FUNC_0(VAR_2) && !FUNC_1(VAR_2))
  goto out;

 if (VAR_2->port_no == 0)
  VAR_3 = VAR_0;
 else
  VAR_3 = VAR_1;

out:
 return VAR_3;
}
