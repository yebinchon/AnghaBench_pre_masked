
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int portnum; struct net_device* netdev; int pdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_1 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_2 (struct net_device*,char*,int ) ;
 int FUNC_3 (struct net_device*,char*,int ) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*) ;
 int FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct qlcnic_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;

 if (FUNC_5(VAR_2->pdev)) {
  FUNC_2(VAR_2->netdev,
      "SR-IOV VFs belonging to port %d are assigned to VMs. SR-IOV can not be disabled on this port\n",
      VAR_2->portnum);
  FUNC_3(VAR_2->netdev,
       "Please detach SR-IOV VFs belonging to port %d from VMs, and then try to disable SR-IOV on this port\n",
       VAR_2->portnum);
  return -VAR_1;
 }

 FUNC_9(VAR_2);

 FUNC_10();
 if (FUNC_4(VAR_3))
  FUNC_0(VAR_2, VAR_3);

 FUNC_7(VAR_2);

 FUNC_8(VAR_2);




 if (FUNC_6(VAR_2)) {
  FUNC_11();
  return -VAR_0;
 }

 if (FUNC_4(VAR_3))
  FUNC_1(VAR_2, VAR_3);

 FUNC_11();
 return 0;
}
