
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dummy; } ;
struct ibmvnic_adapter {scalar_t__ state; int mac_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int ,int ) ;
 struct ibmvnic_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, void *VAR_2)
{
 struct ibmvnic_adapter *VAR_3 = FUNC_2(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;
 int VAR_5;

 VAR_5 = 0;
 FUNC_1(VAR_3->mac_addr, VAR_4->sa_data);
 if (VAR_3->state != VAR_0)
  VAR_5 = FUNC_0(VAR_1, VAR_4->sa_data);

 return VAR_5;
}
