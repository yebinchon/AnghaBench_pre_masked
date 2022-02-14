
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvmc_crq_msg {int dummy; } ;
struct ibmvmc_admin_crq_msg {int max_hmc; int pool_size; int max_mtu; int version; } ;
struct crq_server_adapter {int dev; } ;
struct TYPE_2__ {void* max_hmc_index; void* max_buffer_pool_size; void* max_mtu; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*,void*,void*,void*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_4 (int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_5(struct crq_server_adapter *VAR_10,
     struct ibmvmc_crq_msg *VAR_11)
{
 struct ibmvmc_admin_crq_msg *VAR_12 = (struct ibmvmc_admin_crq_msg *)VAR_11;

 if ((FUNC_0(VAR_12->version) >> 8) !=
   (VAR_0 >> 8)) {
  FUNC_2(VAR_10->dev, "init failed, incompatible versions 0x%x 0x%x\n",
   FUNC_0(VAR_12->version),
   VAR_0);
  VAR_1.state = VAR_5;
  return;
 }

 VAR_1.max_mtu = FUNC_4(VAR_8, VAR_4, FUNC_1(VAR_12->max_mtu));
 VAR_1.max_buffer_pool_size = FUNC_4(VAR_7, VAR_2,
         FUNC_0(VAR_12->pool_size));
 VAR_1.max_hmc_index = FUNC_4(VAR_9, VAR_3, VAR_12->max_hmc) - 1;
 VAR_1.state = VAR_6;

 FUNC_3(VAR_10->dev, "Capabilities: mtu=0x%x, pool_size=0x%x, max_hmc=0x%x\n",
   VAR_1.max_mtu, VAR_1.max_buffer_pool_size,
   VAR_1.max_hmc_index);
}
