
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wlandevice {int dummy; } ;
struct wiphy {int dummy; } ;
struct net_device {struct wlandevice* ml_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct wlandevice*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct wiphy *VAR_1, struct net_device *VAR_2,
      u8 VAR_3, bool VAR_4, bool VAR_5)
{
 struct wlandevice *VAR_6 = VAR_2->ml_priv;

 return FUNC_0(VAR_6,
           VAR_0,
           VAR_3);
}
