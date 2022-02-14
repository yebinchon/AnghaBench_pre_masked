
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct wlandevice {int dummy; } ;
struct wiphy {int dummy; } ;
struct net_device {struct wlandevice* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct wlandevice*,int ,int,char*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_3, struct net_device *VAR_4,
     u8 VAR_5, bool VAR_6, const u8 *VAR_7)
{
 struct wlandevice *VAR_8 = VAR_4->ml_priv;
 u32 VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;





 if (VAR_5 >= VAR_2)
  return -VAR_1;


 VAR_9 = FUNC_0(VAR_5 + 1);
 VAR_11 = FUNC_1(VAR_8, VAR_9, 13, "0000000000000");

 if (VAR_11)
  VAR_10 = -VAR_0;

 return VAR_10;
}
