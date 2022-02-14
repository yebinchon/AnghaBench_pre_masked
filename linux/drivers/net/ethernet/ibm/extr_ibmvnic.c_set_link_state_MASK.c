
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link_state; int cmd; int first; } ;
union ibmvnic_crq {TYPE_1__ logical_link_state; } ;
typedef int u8 ;
struct net_device {int dummy; } ;
struct ibmvnic_adapter {int init_done_rc; int init_done; struct net_device* netdev; } ;
typedef int crq ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (union ibmvnic_crq*,int ,int) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,char*,int ) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct ibmvnic_adapter *VAR_2, u8 VAR_3)
{
 struct net_device *VAR_4 = VAR_2->netdev;
 unsigned long VAR_5 = FUNC_3(30000);
 union ibmvnic_crq VAR_6;
 bool VAR_7;
 int VAR_8;

 FUNC_4(VAR_4, "setting link state %d\n", VAR_3);

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.logical_link_state.first = VAR_0;
 VAR_6.logical_link_state.cmd = VAR_1;
 VAR_6.logical_link_state.link_state = VAR_3;

 do {
  VAR_7 = 0;

  FUNC_7(&VAR_2->init_done);
  VAR_8 = FUNC_0(VAR_2, &VAR_6);
  if (VAR_8) {
   FUNC_5(VAR_4, "Failed to set link state\n");
   return VAR_8;
  }

  if (!FUNC_8(&VAR_2->init_done,
       VAR_5)) {
   FUNC_5(VAR_4, "timeout setting link state\n");
   return -1;
  }

  if (VAR_2->init_done_rc == 1) {

   FUNC_1(1000);
   VAR_7 = 1;
  } else if (VAR_2->init_done_rc) {
   FUNC_6(VAR_4, "Unable to set link state, rc=%d\n",
        VAR_2->init_done_rc);
   return VAR_2->init_done_rc;
  }
 } while (VAR_7);

 return 0;
}
