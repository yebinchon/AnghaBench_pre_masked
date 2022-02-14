
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {int (* set_multicast_list ) (struct wlandevice*,struct net_device*) ;} ;
struct net_device {struct wlandevice* ml_priv; } ;


 int FUNC_0 (struct wlandevice*,struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 struct wlandevice *VAR_1 = VAR_0->ml_priv;



 if (VAR_1->set_multicast_list)
  VAR_1->set_multicast_list(VAR_1, VAR_0);
}
