
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int ndev; int mpi_port_cfg_work; int workqueue; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ql_adapter*) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, int VAR_4)
{
 struct ql_adapter *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 if (VAR_3->mtu == 1500 && VAR_4 == 9000) {
  FUNC_1(VAR_5, VAR_2, VAR_5->ndev, "Changing to jumbo MTU.\n");
 } else if (VAR_3->mtu == 9000 && VAR_4 == 1500) {
  FUNC_1(VAR_5, VAR_2, VAR_5->ndev, "Changing to normal MTU.\n");
 } else
  return -VAR_0;

 FUNC_4(VAR_5->workqueue,
   &VAR_5->mpi_port_cfg_work, 3*VAR_1);

 VAR_3->mtu = VAR_4;

 if (!FUNC_2(VAR_5->ndev)) {
  return 0;
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_5, VAR_2, VAR_5->ndev,
     "Changing MTU failed.\n");
 }

 return VAR_6;
}
