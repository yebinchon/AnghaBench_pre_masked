
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {TYPE_1__* data; } ;
struct cvm_mmc_host {int smi; } ;
struct TYPE_2__ {int sg_len; int sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct cvm_mmc_host *VAR_2, struct mmc_request *VAR_3)
{
 FUNC_0(&VAR_2->smi, VAR_3->data->sg, VAR_3->data->sg_len,
         VAR_0 | VAR_1);
}
