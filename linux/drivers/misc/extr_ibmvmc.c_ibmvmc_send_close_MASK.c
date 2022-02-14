
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ibmvmc_hmc {int index; int session; struct crq_server_adapter* adapter; } ;
struct TYPE_6__ {scalar_t__ rsvd; } ;
struct TYPE_5__ {scalar_t__ rsvd; } ;
struct TYPE_4__ {scalar_t__ rsvd; } ;
struct ibmvmc_crq_msg {int valid; TYPE_3__ var3; scalar_t__ rsvd; TYPE_2__ var2; int hmc_index; int hmc_session; TYPE_1__ var1; scalar_t__ status; int type; } ;
struct crq_server_adapter {int dev; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct crq_server_adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ibmvmc_hmc *VAR_2)
{
 struct ibmvmc_crq_msg VAR_3;
 struct crq_server_adapter *VAR_4;
 __be64 *VAR_5 = (__be64 *)&VAR_3;
 int VAR_6 = 0;

 if (!VAR_2 || !VAR_2->adapter)
  return -VAR_0;

 VAR_4 = VAR_2->adapter;

 FUNC_1(VAR_4->dev, "CRQ send: close\n");

 VAR_3.valid = 0x80;
 VAR_3.type = VAR_1;
 VAR_3.status = 0;
 VAR_3.var1.rsvd = 0;
 VAR_3.hmc_session = VAR_2->session;
 VAR_3.hmc_index = VAR_2->index;
 VAR_3.var2.rsvd = 0;
 VAR_3.rsvd = 0;
 VAR_3.var3.rsvd = 0;

 FUNC_2(VAR_4, FUNC_0(VAR_5[0]),
   FUNC_0(VAR_5[1]));

 return VAR_6;
}
