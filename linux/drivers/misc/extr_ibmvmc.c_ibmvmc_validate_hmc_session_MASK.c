
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibmvmc_crq_msg {unsigned char hmc_index; int hmc_session; } ;
struct crq_server_adapter {int dev; } ;
struct TYPE_4__ {int session; } ;
struct TYPE_3__ {unsigned char max_hmc_index; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct crq_server_adapter *VAR_2,
           struct ibmvmc_crq_msg *VAR_3)
{
 unsigned char VAR_4;

 VAR_4 = VAR_3->hmc_index;

 if (VAR_3->hmc_session == 0)
  return 0;

 if (VAR_4 > VAR_1.max_hmc_index)
  return -1;

 if (VAR_0[VAR_4].session != VAR_3->hmc_session) {
  FUNC_0(VAR_2->dev, "Drop, bad session: expected 0x%x, recv 0x%x\n",
    VAR_0[VAR_4].session, VAR_3->hmc_session);
  return -1;
 }

 return 0;
}
