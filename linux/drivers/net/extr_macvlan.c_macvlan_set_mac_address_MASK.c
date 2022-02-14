
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct macvlan_dev {scalar_t__ mode; int port; int lowerdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct sockaddr*,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,int ) ;
 struct macvlan_dev* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, void *VAR_4)
{
 struct macvlan_dev *VAR_5 = FUNC_6(VAR_3);
 struct sockaddr *VAR_6 = VAR_4;

 if (!FUNC_2(VAR_6->sa_data))
  return -VAR_1;


 if (FUNC_1(VAR_3->dev_addr, VAR_6->sa_data))
  return 0;

 if (VAR_5->mode == VAR_2) {
  FUNC_4(VAR_5->port);
  return FUNC_0(VAR_5->lowerdev, VAR_6, ((void*)0));
 }

 if (FUNC_3(VAR_5->port, VAR_6->sa_data))
  return -VAR_0;

 return FUNC_5(VAR_3, VAR_6->sa_data);
}
