
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct r8152 {scalar_t__ version; struct net_device* netdev; } ;
struct net_device {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct r8152*,struct sockaddr*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct net_device*,struct sockaddr*) ;

__attribute__((used)) static int FUNC_3(struct r8152 *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 struct sockaddr VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_1->version == VAR_0)
  FUNC_1(VAR_2->dev_addr, VAR_3.sa_data);
 else
  VAR_4 = FUNC_2(VAR_2, &VAR_3);

 return VAR_4;
}
