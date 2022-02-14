
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct usbnet* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5, void *VAR_6)
{
 struct usbnet *VAR_7 = FUNC_3(VAR_5);
 struct sockaddr *VAR_8 = VAR_6;
 int VAR_9;

 if (FUNC_4(VAR_5))
  return -VAR_3;
 if (!FUNC_1(VAR_8->sa_data))
  return -VAR_2;

 FUNC_2(VAR_5->dev_addr, VAR_8->sa_data, VAR_4);


 VAR_9 = FUNC_0(VAR_7, VAR_0, VAR_1, VAR_4,
     VAR_4, VAR_5->dev_addr);
 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}
