
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct vnt_private {int mc_list_count; TYPE_1__* usb; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct vnt_private*,int ,int ,int ,int,int*) ;
 int FUNC_2 (struct vnt_private*,int ,int ,int) ;
 int FUNC_3 (struct vnt_private*,int ) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_9,
     unsigned int VAR_10,
     unsigned int *VAR_11, u64 VAR_12)
{
 struct vnt_private *VAR_13 = VAR_9->priv;
 u8 VAR_14 = 0;
 int VAR_15;

 *VAR_11 &= VAR_0 | VAR_2 | VAR_1;

 VAR_15 = FUNC_1(VAR_13, VAR_5, VAR_3,
       VAR_4, sizeof(u8), &VAR_14);

 if (!VAR_15)
  VAR_14 = VAR_8 | VAR_6;

 FUNC_0(&VAR_13->usb->dev, "rx mode in = %x\n", VAR_14);

 if (VAR_10 & VAR_0) {
  if (*VAR_11 & VAR_0) {
   if (VAR_13->mc_list_count > 2)
    FUNC_3(VAR_13, ~0);
   else
    FUNC_3(VAR_13, VAR_12);

   VAR_14 |= VAR_8 | VAR_6;
  } else {
   VAR_14 &= ~(VAR_8 | VAR_6);
  }
 }

 if (VAR_10 & (VAR_2 | VAR_1)) {
  if (*VAR_11 & (VAR_2 | VAR_1))
   VAR_14 &= ~VAR_7;
  else
   VAR_14 |= VAR_7;
 }

 FUNC_2(VAR_13, VAR_4, VAR_3, VAR_14);

 FUNC_0(&VAR_13->usb->dev, "rx mode out= %x\n", VAR_14);
}
