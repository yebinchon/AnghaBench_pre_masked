
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ibmvnic_adapter {scalar_t__ init_done_rc; int mac_addr; int init_done; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct ibmvnic_adapter*) ;
 int FUNC_2 (struct ibmvnic_adapter*) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct ibmvnic_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ibmvnic_adapter*,int) ;
 int FUNC_9 (struct ibmvnic_adapter*) ;
 int FUNC_10 (struct ibmvnic_adapter*) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_2)
{
 struct ibmvnic_adapter *VAR_3 = FUNC_5(VAR_2);
 unsigned long VAR_4 = FUNC_3(30000);
 int VAR_5 = 0;
 bool VAR_6;
 int VAR_7;

 do {
  VAR_6 = 0;
  if (VAR_5 > VAR_0) {
   FUNC_6(VAR_2, "Login attempts exceeded\n");
   return -1;
  }

  VAR_3->init_done_rc = 0;
  FUNC_7(&VAR_3->init_done);
  VAR_7 = FUNC_10(VAR_3);
  if (VAR_7) {
   FUNC_6(VAR_2, "Unable to login\n");
   return VAR_7;
  }

  if (!FUNC_11(&VAR_3->init_done,
       VAR_4)) {
   FUNC_6(VAR_2, "Login timed out\n");
   return -1;
  }

  if (VAR_3->init_done_rc == VAR_1) {
   VAR_5++;
   FUNC_8(VAR_3, 1);

   VAR_6 = 1;
   FUNC_4(VAR_2,
       "Received partial success, retrying...\n");
   VAR_3->init_done_rc = 0;
   FUNC_7(&VAR_3->init_done);
   FUNC_9(VAR_3);
   if (!FUNC_11(&VAR_3->init_done,
        VAR_4)) {
    FUNC_6(VAR_2,
         "Capabilities query timed out\n");
    return -1;
   }

   VAR_7 = FUNC_2(VAR_3);
   if (VAR_7) {
    FUNC_6(VAR_2,
         "SCRQ initialization failed\n");
    return -1;
   }

   VAR_7 = FUNC_1(VAR_3);
   if (VAR_7) {
    FUNC_6(VAR_2,
         "SCRQ irq initialization failed\n");
    return -1;
   }
  } else if (VAR_3->init_done_rc) {
   FUNC_6(VAR_2, "Adapter login failed\n");
   return -1;
  }
 } while (VAR_6);

 FUNC_0(VAR_2, VAR_3->mac_addr);

 return 0;
}
