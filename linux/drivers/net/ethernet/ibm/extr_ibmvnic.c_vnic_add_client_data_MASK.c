
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnic_login_client_data {int type; scalar_t__ name; void* len; } ;
struct ibmvnic_adapter {TYPE_1__* netdev; } ;
struct TYPE_4__ {char const* nodename; } ;
struct TYPE_3__ {char const* name; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (scalar_t__,char const*,int) ;
 TYPE_2__* FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct ibmvnic_adapter *VAR_0,
     struct vnic_login_client_data *VAR_1)
{
 const char *VAR_2 = "Linux";
 int VAR_3;


 VAR_1->type = 1;
 VAR_3 = FUNC_1(VAR_2) + 1;
 VAR_1->len = FUNC_0(VAR_3);
 FUNC_2(VAR_1->name, VAR_2, VAR_3);
 VAR_1 = (struct vnic_login_client_data *)(VAR_1->name + VAR_3);


 VAR_1->type = 2;
 VAR_3 = FUNC_1(FUNC_3()->nodename) + 1;
 VAR_1->len = FUNC_0(VAR_3);
 FUNC_2(VAR_1->name, FUNC_3()->nodename, VAR_3);
 VAR_1 = (struct vnic_login_client_data *)(VAR_1->name + VAR_3);


 VAR_1->type = 3;
 VAR_3 = FUNC_1(VAR_0->netdev->name) + 1;
 VAR_1->len = FUNC_0(VAR_3);
 FUNC_2(VAR_1->name, VAR_0->netdev->name, VAR_3);
}
