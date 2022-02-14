
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct lan743x_adapter {int dummy; } ;


 int FUNC_0 (struct net_device*,struct sockaddr*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct lan743x_adapter*,int ) ;
 int FUNC_3 (struct lan743x_adapter*) ;
 struct lan743x_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0,
       void *VAR_1)
{
 struct lan743x_adapter *VAR_2 = FUNC_4(VAR_0);
 struct sockaddr *VAR_3 = VAR_1;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_3);
 if (VAR_4)
  return VAR_4;
 FUNC_1(VAR_0->dev_addr, VAR_3->sa_data);
 FUNC_2(VAR_2, VAR_3->sa_data);
 FUNC_3(VAR_2);
 return 0;
}
