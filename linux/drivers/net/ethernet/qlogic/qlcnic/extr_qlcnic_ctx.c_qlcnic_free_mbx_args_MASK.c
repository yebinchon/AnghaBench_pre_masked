
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * arg; } ;
struct TYPE_3__ {int * arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; TYPE_1__ req; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct qlcnic_cmd_args *VAR_0)
{
 FUNC_0(VAR_0->req.arg);
 VAR_0->req.arg = ((void*)0);
 FUNC_0(VAR_0->rsp.arg);
 VAR_0->rsp.arg = ((void*)0);
}
