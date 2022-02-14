
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int data; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct asix_data {int mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct usbnet* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

int FUNC_5(struct net_device *VAR_4, void *VAR_5)
{
 struct usbnet *VAR_6 = FUNC_3(VAR_4);
 struct asix_data *VAR_7 = (struct asix_data *)&VAR_6->data;
 struct sockaddr *VAR_8 = VAR_5;

 if (FUNC_4(VAR_4))
  return -VAR_2;
 if (!FUNC_1(VAR_8->sa_data))
  return -VAR_1;

 FUNC_2(VAR_4->dev_addr, VAR_8->sa_data, VAR_3);





 FUNC_2(VAR_7->mac_addr, VAR_8->sa_data, VAR_3);
 FUNC_0(VAR_6, VAR_0, 0, 0, VAR_3,
       VAR_7->mac_addr);

 return 0;
}
