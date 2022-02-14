
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ibmvnic_adapter {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ibmvnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ibmvnic_adapter*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3)
{
 struct ibmvnic_adapter *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = 0;

 VAR_4->state = VAR_2;
 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (VAR_5)
  return VAR_5;
 VAR_4->state = VAR_1;
 return 0;
}
