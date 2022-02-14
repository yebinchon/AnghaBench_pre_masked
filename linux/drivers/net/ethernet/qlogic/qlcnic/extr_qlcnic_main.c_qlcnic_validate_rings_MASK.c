
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {struct net_device* netdev; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (char*,char*) ;

int FUNC_6(struct qlcnic_adapter *VAR_3, __u32 VAR_4,
     int VAR_5)
{
 struct net_device *VAR_6 = VAR_3->netdev;
 char VAR_7[8];

 if (VAR_5 == VAR_1)
  FUNC_5(VAR_7, "SDS");
 else
  FUNC_5(VAR_7, "Tx");

 if (!FUNC_0(VAR_4)) {
  FUNC_1(VAR_6, "%s rings value should be a power of 2\n",
      VAR_7);
  return -VAR_0;
 }

 if (FUNC_3(VAR_3) && (VAR_5 == VAR_2) &&
     !FUNC_4(VAR_3)) {
   FUNC_1(VAR_6, "No Multi Tx queue support\n");
   return -VAR_0;
 }

 if (VAR_4 > FUNC_2()) {
  FUNC_1(VAR_6,
      "%s value[%u] should not be higher than, number of online CPUs\n",
      VAR_7, FUNC_2());
  return -VAR_0;
 }

 return 0;
}
