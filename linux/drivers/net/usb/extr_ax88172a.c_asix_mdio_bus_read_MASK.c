
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct mii_bus {scalar_t__ priv; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_0, int VAR_1, int VAR_2)
{
 return FUNC_0(((struct usbnet *)VAR_0->priv)->net, VAR_1,
         VAR_2);
}
