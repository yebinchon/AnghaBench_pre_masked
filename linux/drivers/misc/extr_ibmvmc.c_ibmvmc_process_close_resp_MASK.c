
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvmc_crq_msg {unsigned char hmc_index; scalar_t__ status; } ;
struct crq_server_adapter {int dev; } ;
struct TYPE_2__ {unsigned char max_hmc_index; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int * VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct crq_server_adapter*,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct ibmvmc_crq_msg *VAR_2,
          struct crq_server_adapter *VAR_3)
{
 unsigned char VAR_4;

 VAR_4 = VAR_2->hmc_index;
 if (VAR_4 > VAR_1.max_hmc_index) {
  FUNC_1(VAR_3, 0);
  return;
 }

 if (VAR_2->status) {
  FUNC_0(VAR_3->dev, "close_resp: failed - status 0x%x\n",
    VAR_2->status);
  FUNC_1(VAR_3, 0);
  return;
 }

 FUNC_2(&VAR_0[VAR_4], 0);
}
