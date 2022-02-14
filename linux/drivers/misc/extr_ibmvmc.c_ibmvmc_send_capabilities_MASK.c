
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibmvmc_admin_crq_msg {int valid; void* version; void* crq_size; void* pool_size; int max_mtu; int max_hmc; scalar_t__* rsvd; scalar_t__ status; int type; } ;
struct TYPE_3__ {int size; } ;
struct crq_server_adapter {TYPE_1__ queue; int dev; } ;
typedef int __be64 ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct crq_server_adapter*,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct crq_server_adapter *VAR_7)
{
 struct ibmvmc_admin_crq_msg VAR_8;
 __be64 *VAR_9 = (__be64 *)&VAR_8;

 FUNC_3(VAR_7->dev, "ibmvmc: CRQ send: capabilities\n");
 VAR_8.valid = 0x80;
 VAR_8.type = VAR_1;
 VAR_8.status = 0;
 VAR_8.rsvd[0] = 0;
 VAR_8.rsvd[1] = 0;
 VAR_8.max_hmc = VAR_4;
 VAR_8.max_mtu = FUNC_2(VAR_5);
 VAR_8.pool_size = FUNC_1(VAR_3);
 VAR_8.crq_size = FUNC_1(VAR_7->queue.size);
 VAR_8.version = FUNC_1(VAR_0);

 FUNC_4(VAR_7, FUNC_0(VAR_9[0]),
   FUNC_0(VAR_9[1]));

 VAR_2.state = VAR_6;

 return 0;
}
