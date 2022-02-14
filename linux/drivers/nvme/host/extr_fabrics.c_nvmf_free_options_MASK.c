
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmf_ctrl_options {struct nvmf_ctrl_options* host_traddr; struct nvmf_ctrl_options* subsysnqn; struct nvmf_ctrl_options* trsvcid; struct nvmf_ctrl_options* traddr; struct nvmf_ctrl_options* transport; int host; } ;


 int FUNC_0 (struct nvmf_ctrl_options*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct nvmf_ctrl_options *VAR_0)
{
 FUNC_1(VAR_0->host);
 FUNC_0(VAR_0->transport);
 FUNC_0(VAR_0->traddr);
 FUNC_0(VAR_0->trsvcid);
 FUNC_0(VAR_0->subsysnqn);
 FUNC_0(VAR_0->host_traddr);
 FUNC_0(VAR_0);
}
