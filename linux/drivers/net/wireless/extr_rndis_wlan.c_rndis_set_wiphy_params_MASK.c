
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int rts_threshold; int frag_threshold; } ;
struct usbnet {int dummy; } ;
struct rndis_wlan_private {struct usbnet* usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbnet*,int ) ;
 int FUNC_1 (struct usbnet*,int ) ;
 struct rndis_wlan_private* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_2, u32 VAR_3)
{
 struct rndis_wlan_private *VAR_4 = FUNC_2(VAR_2);
 struct usbnet *VAR_5 = VAR_4->usbdev;
 int VAR_6;

 if (VAR_3 & VAR_0) {
  VAR_6 = FUNC_0(VAR_5, VAR_2->frag_threshold);
  if (VAR_6 < 0)
   return VAR_6;
 }

 if (VAR_3 & VAR_1) {
  VAR_6 = FUNC_1(VAR_5, VAR_2->rts_threshold);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}
