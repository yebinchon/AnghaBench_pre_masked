
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvnic_adapter {int * tx_pool; int * tso_pool; TYPE_1__* login_rsp_buf; } ;
struct TYPE_2__ {int num_txsubm_subcrqs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ibmvnic_adapter*,int *) ;

__attribute__((used)) static int FUNC_2(struct ibmvnic_adapter *VAR_0)
{
 int VAR_1;
 int VAR_2, VAR_3;

 VAR_1 = FUNC_0(VAR_0->login_rsp_buf->num_txsubm_subcrqs);
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 = FUNC_1(VAR_0, &VAR_0->tso_pool[VAR_2]);
  if (VAR_3)
   return VAR_3;
  VAR_3 = FUNC_1(VAR_0, &VAR_0->tx_pool[VAR_2]);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
