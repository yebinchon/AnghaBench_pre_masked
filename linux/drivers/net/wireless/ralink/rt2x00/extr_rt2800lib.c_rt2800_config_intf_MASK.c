
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00intf_conf {int sync; void** bssid; void** mac; } ;
struct rt2x00_intf {int dummy; } ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void**,void**,int) ;
 int FUNC_4 (struct rt2x00_dev*,int ,void**,int) ;
 int FUNC_5 (struct rt2x00_dev*,int ) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_7 (int *,int ,int) ;

void FUNC_8(struct rt2x00_dev *VAR_16, struct rt2x00_intf *VAR_17,
   struct rt2x00intf_conf *VAR_18, const unsigned int VAR_19)
{
 u32 VAR_20;
 bool VAR_21 = 0;

 if (VAR_19 & VAR_4) {



  VAR_20 = FUNC_5(VAR_16, VAR_0);
  FUNC_7(&VAR_20, VAR_1, VAR_18->sync);
  FUNC_6(VAR_16, VAR_0, VAR_20);

  if (VAR_18->sync == VAR_15) {



   VAR_20 = FUNC_5(VAR_16, VAR_10);
   FUNC_7(&VAR_20, VAR_12, 0);
   FUNC_7(&VAR_20, VAR_11, 1);
   FUNC_7(&VAR_20, VAR_13, 32);
   FUNC_7(&VAR_20, VAR_14, 0);
   FUNC_6(VAR_16, VAR_10, VAR_20);
  } else {
   VAR_20 = FUNC_5(VAR_16, VAR_10);
   FUNC_7(&VAR_20, VAR_12, 4);
   FUNC_7(&VAR_20, VAR_11, 2);
   FUNC_7(&VAR_20, VAR_13, 32);
   FUNC_7(&VAR_20, VAR_14, 16);
   FUNC_6(VAR_16, VAR_10, VAR_20);
  }
 }

 if (VAR_19 & VAR_3) {
  if (VAR_19 & VAR_4 &&
      VAR_18->sync == VAR_15) {




   FUNC_3(VAR_18->bssid, VAR_18->mac, sizeof(VAR_18->mac));
   VAR_21 = 1;
  }

  if (!FUNC_1((const u8 *)VAR_18->mac)) {
   VAR_20 = FUNC_2(VAR_18->mac[1]);
   FUNC_7(&VAR_20, VAR_6, 0xff);
   VAR_18->mac[1] = FUNC_0(VAR_20);
  }

  FUNC_4(VAR_16, VAR_5,
           VAR_18->mac, sizeof(VAR_18->mac));
 }

 if ((VAR_19 & VAR_2) || VAR_21) {
  if (!FUNC_1((const u8 *)VAR_18->bssid)) {
   VAR_20 = FUNC_2(VAR_18->bssid[1]);
   FUNC_7(&VAR_20, VAR_9, 3);
   FUNC_7(&VAR_20, VAR_8, 0);
   VAR_18->bssid[1] = FUNC_0(VAR_20);
  }

  FUNC_4(VAR_16, VAR_7,
           VAR_18->bssid, sizeof(VAR_18->bssid));
 }
}
