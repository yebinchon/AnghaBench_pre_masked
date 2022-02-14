
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct net_device*,void*) ;
 struct usbnet* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, void *VAR_4)
{
 struct usbnet *VAR_5 = FUNC_2(VAR_3);
 int VAR_6 = 0;

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;


 return FUNC_0(VAR_5, VAR_0, VAR_2, VAR_1,
    VAR_1, VAR_3->dev_addr);
}
