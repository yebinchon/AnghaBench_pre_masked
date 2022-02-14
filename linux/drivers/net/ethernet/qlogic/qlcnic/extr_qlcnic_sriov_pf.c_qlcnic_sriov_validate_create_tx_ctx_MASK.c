
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct qlcnic_cmd_args *VAR_1)
{
 if ((VAR_1->req.arg[0] >> 29) != 0x3)
  return -VAR_0;

 return 0;
}
