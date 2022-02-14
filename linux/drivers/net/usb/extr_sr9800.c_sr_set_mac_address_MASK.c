
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int data; } ;
struct sr_data {int mac_addr; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct usbnet* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct usbnet*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, void *VAR_5)
{
 struct usbnet *VAR_6 = FUNC_2(VAR_4);
 struct sr_data *VAR_7 = (struct sr_data *)&VAR_6->data;
 struct sockaddr *VAR_8 = VAR_5;

 if (FUNC_3(VAR_4))
  return -VAR_1;
 if (!FUNC_0(VAR_8->sa_data))
  return -VAR_0;

 FUNC_1(VAR_4->dev_addr, VAR_8->sa_data, VAR_2);






 FUNC_1(VAR_7->mac_addr, VAR_8->sa_data, VAR_2);
 FUNC_4(VAR_6, VAR_3, 0, 0, VAR_2,
      VAR_7->mac_addr);

 return 0;
}
