
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usbnet*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct usbnet* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, void *VAR_3)
{
 int VAR_4;
 struct usbnet *VAR_5 = FUNC_3(VAR_2);
 struct sockaddr *VAR_6 = VAR_3;

 if (FUNC_4(VAR_2))
  return -VAR_1;

 if (!FUNC_0(VAR_6->sa_data))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_5, VAR_6->sa_data);

 if (VAR_4 < 0)
  return VAR_4;


 FUNC_2(VAR_2->dev_addr, VAR_6->sa_data, VAR_2->addr_len);

 return 0;
}
