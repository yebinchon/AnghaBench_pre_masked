
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wlandevice {int dummy; } ;
struct wiphy {int rts_threshold; int frag_threshold; } ;
struct prism2_wiphy_private {struct wlandevice* wlandev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wlandevice*,int ,int) ;
 struct prism2_wiphy_private* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_5, u32 VAR_6)
{
 struct prism2_wiphy_private *VAR_7 = FUNC_1(VAR_5);
 struct wlandevice *VAR_8 = VAR_7->wlandev;
 u32 VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 if (VAR_6 & VAR_4) {
  if (VAR_5->rts_threshold == -1)
   VAR_9 = 2347;
  else
   VAR_9 = VAR_5->rts_threshold;

  VAR_10 = FUNC_0(VAR_8,
      VAR_1,
      VAR_9);
  if (VAR_10) {
   VAR_11 = -VAR_2;
   goto exit;
  }
 }

 if (VAR_6 & VAR_3) {
  if (VAR_5->frag_threshold == -1)
   VAR_9 = 2346;
  else
   VAR_9 = VAR_5->frag_threshold;

  VAR_10 = FUNC_0(VAR_8,
      VAR_0,
      VAR_9);
  if (VAR_10) {
   VAR_11 = -VAR_2;
   goto exit;
  }
 }

exit:
 return VAR_11;
}
