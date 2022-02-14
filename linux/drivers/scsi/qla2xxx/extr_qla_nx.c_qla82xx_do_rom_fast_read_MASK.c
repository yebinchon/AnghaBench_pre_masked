
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qla_hw_data*,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_1(struct qla_hw_data *VAR_2, int VAR_3, int *VAR_4)
{

 FUNC_0(VAR_2, VAR_1, (VAR_3 & 0xFFFF0000), 1);
 *VAR_4 = FUNC_0(VAR_2, VAR_0 +
     (VAR_3 & 0x0000FFFF), 0, 0);

 return 0;
}
