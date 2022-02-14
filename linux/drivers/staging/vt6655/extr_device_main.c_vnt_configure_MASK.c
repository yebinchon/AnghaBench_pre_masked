
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct vnt_private {int mc_list_count; TYPE_1__* pcid; scalar_t__ PortOffset; int lock; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__,int*) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_8,
     unsigned int VAR_9,
     unsigned int *VAR_10, u64 VAR_11)
{
 struct vnt_private *VAR_12 = VAR_8->priv;
 u8 VAR_13 = 0;

 *VAR_10 &= VAR_0 | VAR_2 | VAR_1;

 FUNC_2(VAR_12->PortOffset + VAR_4, &VAR_13);

 FUNC_5(&VAR_12->pcid->dev, "rx mode in = %x\n", VAR_13);

 if (VAR_9 & VAR_0) {
  if (*VAR_10 & VAR_0) {
   unsigned long VAR_14;

   FUNC_6(&VAR_12->lock, VAR_14);

   if (VAR_12->mc_list_count > 2) {
    FUNC_1(VAR_12->PortOffset);

    FUNC_4(VAR_12->PortOffset +
          VAR_3, 0xffffffff);
    FUNC_4(VAR_12->PortOffset +
         VAR_3 + 4, 0xffffffff);

    FUNC_0(VAR_12->PortOffset);
   } else {
    FUNC_1(VAR_12->PortOffset);

    FUNC_4(VAR_12->PortOffset +
          VAR_3, (u32)VAR_11);
    FUNC_4(VAR_12->PortOffset +
          VAR_3 + 4,
          (u32)(VAR_11 >> 32));

    FUNC_0(VAR_12->PortOffset);
   }

   FUNC_7(&VAR_12->lock, VAR_14);

   VAR_13 |= VAR_7 | VAR_5;
  } else {
   VAR_13 &= ~(VAR_7 | VAR_5);
  }
 }

 if (VAR_9 & (VAR_2 | VAR_1)) {
  VAR_13 |= VAR_7 | VAR_5;

  if (*VAR_10 & (VAR_2 | VAR_1))
   VAR_13 &= ~VAR_6;
  else
   VAR_13 |= VAR_6;
 }

 FUNC_3(VAR_12->PortOffset + VAR_4, VAR_13);

 FUNC_5(&VAR_12->pcid->dev, "rx mode out= %x\n", VAR_13);
}
