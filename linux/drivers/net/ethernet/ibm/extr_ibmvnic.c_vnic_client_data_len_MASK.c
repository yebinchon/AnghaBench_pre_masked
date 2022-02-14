
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnic_login_client_data {int dummy; } ;
struct ibmvnic_adapter {TYPE_1__* netdev; } ;
struct TYPE_4__ {int nodename; } ;
struct TYPE_3__ {int name; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct ibmvnic_adapter *VAR_0)
{
 int VAR_1;





 VAR_1 = 4 * sizeof(struct vnic_login_client_data);
 VAR_1 += 6;
 VAR_1 += FUNC_0(FUNC_1()->nodename) + 1;
 VAR_1 += FUNC_0(VAR_0->netdev->name) + 1;

 return VAR_1;
}
