
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {int state; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 struct vmxnet3_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct vmxnet3_adapter*) ;
 int FUNC_7 (struct vmxnet3_adapter*) ;
 int FUNC_8 (struct vmxnet3_adapter*) ;
 int FUNC_9 (struct vmxnet3_adapter*) ;
 int FUNC_10 (struct vmxnet3_adapter*) ;
 int FUNC_11 (struct vmxnet3_adapter*) ;
 int FUNC_12 (struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_13(struct net_device *VAR_1, int VAR_2)
{
 struct vmxnet3_adapter *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = 0;

 VAR_1->mtu = VAR_2;





 while (FUNC_4(VAR_0, &VAR_3->state))
  FUNC_5(1000, 2000);

 if (FUNC_3(VAR_1)) {
  FUNC_9(VAR_3);
  FUNC_10(VAR_3);


  FUNC_12(VAR_3);
  FUNC_7(VAR_3);
  VAR_4 = FUNC_11(VAR_3);
  if (VAR_4) {
   FUNC_1(VAR_1,
       "failed to re-create rx queues, "
       " error %d. Closing it.\n", VAR_4);
   goto out;
  }

  VAR_4 = FUNC_6(VAR_3);
  if (VAR_4) {
   FUNC_1(VAR_1,
       "failed to re-activate, error %d. "
       "Closing it\n", VAR_4);
   goto out;
  }
 }

out:
 FUNC_0(VAR_0, &VAR_3->state);
 if (VAR_4)
  FUNC_8(VAR_3);

 return VAR_4;
}
