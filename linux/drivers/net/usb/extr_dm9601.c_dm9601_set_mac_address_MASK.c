
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct usbnet* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, void *VAR_2)
{
 struct sockaddr *VAR_3 = VAR_2;
 struct usbnet *VAR_4 = FUNC_4(VAR_1);

 if (!FUNC_2(VAR_3->sa_data)) {
  FUNC_1(&VAR_1->dev, "not setting invalid mac address %pM\n",
        VAR_3->sa_data);
  return -VAR_0;
 }

 FUNC_3(VAR_1->dev_addr, VAR_3->sa_data, VAR_1->addr_len);
 FUNC_0(VAR_4);

 return 0;
}
