
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * stop; int * data; int * cmd; } ;
struct mmc_test_req {int stop; TYPE_1__ mrq; int data; int cmd; } ;


 int FUNC_0 (struct mmc_test_req*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mmc_test_req *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(struct mmc_test_req));

 VAR_0->mrq.cmd = &VAR_0->cmd;
 VAR_0->mrq.data = &VAR_0->data;
 VAR_0->mrq.stop = &VAR_0->stop;
}
