
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {scalar_t__ device_id; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ql3_adapter *VAR_1, unsigned short VAR_2)
{
 if (VAR_1->device_id == VAR_0)
  return 1;

 if (VAR_2 <= 2)
  return VAR_2 + 1;
 else if (VAR_2 <= 6)
  return VAR_2 + 2;
 else if (VAR_2 <= 10)
  return VAR_2 + 3;
 else if (VAR_2 <= 14)
  return VAR_2 + 4;
 else if (VAR_2 <= 18)
  return VAR_2 + 5;
 return -1;
}
