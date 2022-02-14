
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {scalar_t__ driver_priv; } ;
struct rndis_wlan_private {int dummy; } ;



__attribute__((used)) static struct rndis_wlan_private *FUNC_0(struct usbnet *VAR_0)
{
 return (struct rndis_wlan_private *)VAR_0->driver_priv;
}
