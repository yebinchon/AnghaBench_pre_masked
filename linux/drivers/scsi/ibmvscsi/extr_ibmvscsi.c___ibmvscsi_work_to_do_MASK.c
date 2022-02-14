
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvscsi_host_data {int action; } ;






 scalar_t__ FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct ibmvscsi_host_data *VAR_0)
{
 if (FUNC_0())
  return 1;
 switch (VAR_0->action) {
 case 131:
  return 0;
 case 129:
 case 130:
 case 128:
 default:
  break;
 }

 return 1;
}
