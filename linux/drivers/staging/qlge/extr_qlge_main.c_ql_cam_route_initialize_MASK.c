
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int port_link_up; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (struct ql_adapter*,int ) ;
 int FUNC_2 (struct ql_adapter*) ;
 int FUNC_3 (struct ql_adapter*,int) ;

int FUNC_4(struct ql_adapter *VAR_2)
{
 int VAR_3, VAR_4;





 VAR_4 = FUNC_1(VAR_2, VAR_0);
 VAR_4 &= VAR_2->port_link_up;
 VAR_3 = FUNC_3(VAR_2, VAR_4);
 if (VAR_3) {
  FUNC_0(VAR_2, VAR_1, VAR_2->ndev, "Failed to init mac address.\n");
  return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  FUNC_0(VAR_2, VAR_1, VAR_2->ndev, "Failed to init routing table.\n");

 return VAR_3;
}
