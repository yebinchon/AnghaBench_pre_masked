
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_nic_priv {int netdev; int state; TYPE_1__* ae_handle; } ;
typedef enum hnae_port_type { ____Placeholder_hnae_port_type } hnae_port_type ;
struct TYPE_2__ {int port_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hns_nic_priv*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct hns_nic_priv *VAR_5)
{
 enum hnae_port_type VAR_6 = VAR_5->ae_handle->port_type;

 if (!FUNC_7(VAR_1, &VAR_5->state))
  return;
 FUNC_0(VAR_1, &VAR_5->state);


 if (FUNC_7(VAR_2, &VAR_5->state) ||
     FUNC_7(VAR_3, &VAR_5->state) ||
     FUNC_7(VAR_4, &VAR_5->state))
  return;

 FUNC_1(VAR_5);
 FUNC_3(VAR_5->netdev, "try to reset %s port!\n",
      (VAR_6 == VAR_0 ? "debug" : "service"));

 FUNC_5();

 FUNC_4(VAR_5->netdev);
 FUNC_2(VAR_5->netdev);

 FUNC_6();
}
