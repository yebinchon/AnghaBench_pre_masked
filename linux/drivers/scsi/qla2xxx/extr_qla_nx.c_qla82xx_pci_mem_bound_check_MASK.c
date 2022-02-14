
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long long,int ,int ) ;

__attribute__((used)) static unsigned long
FUNC_1(struct qla_hw_data *VAR_2,
 unsigned long long VAR_3, int VAR_4)
{
 if (!FUNC_0(VAR_3, VAR_0,
  VAR_1) ||
  !FUNC_0(VAR_3 + VAR_4 - 1, VAR_0,
  VAR_1) ||
  ((VAR_4 != 1) && (VAR_4 != 2) && (VAR_4 != 4) && (VAR_4 != 8)))
   return 0;
 else
  return 1;
}
