
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef unsigned char u8 ;
struct wlan_bssid_ex {unsigned char* IEs; int IELength; } ;
struct sta_priv {int tim_bitmap; } ;
struct mlme_ext_info {struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct sta_priv stapriv; } ;
typedef int sint ;
typedef unsigned char __le16 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char FUNC_1 (int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 unsigned char* FUNC_5 (unsigned char*,int ,int*,int) ;
 unsigned char* FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct adapter *VAR_5)
{
 struct sta_priv *VAR_6 = &VAR_5->stapriv;
 struct mlme_ext_priv *VAR_7 = &VAR_5->mlmeextpriv;
 struct mlme_ext_info *VAR_8 = &VAR_7->mlmext_info;
 struct wlan_bssid_ex *VAR_9 = &VAR_8->network;
 unsigned char *VAR_10 = VAR_9->IEs;





 if (1) {
  u8 *VAR_11, *VAR_12, *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
  __le16 VAR_15;
  uint VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

  VAR_15 = FUNC_1(VAR_6->tim_bitmap);

  VAR_11 = FUNC_5(
   VAR_10 + VAR_1,
   VAR_4,
   &VAR_18,
   VAR_9->IELength - VAR_1
  );
  if (VAR_11 != ((void*)0) && VAR_18 > 0) {
   VAR_18 += 2;

   VAR_13 = VAR_11 + VAR_18;

   VAR_19 = (sint)(VAR_11 - VAR_10);

   VAR_20 = VAR_9->IELength - VAR_19 - VAR_18;


   VAR_12 = VAR_11;
  } else {
   VAR_18 = 0;


   VAR_16 = VAR_1;


   VAR_11 = FUNC_5(
    VAR_10 + VAR_0,
    VAR_2,
    &VAR_17,
    (VAR_9->IELength - VAR_0)
   );
   if (VAR_11 != ((void*)0))
    VAR_16 += VAR_17 + 2;


   VAR_11 = FUNC_5(
    VAR_10 + VAR_0,
    VAR_3, &VAR_17,
    (VAR_9->IELength - VAR_0)
   );
   if (VAR_11 != ((void*)0))
    VAR_16 += VAR_17 + 2;


   VAR_16 += 3;

   VAR_13 = VAR_10 + VAR_16;

   VAR_20 = VAR_9->IELength - VAR_16 - VAR_18;


   VAR_12 = VAR_10 + VAR_16;
  }

  if (VAR_20 > 0) {
   VAR_14 = FUNC_6(VAR_20);
   if (VAR_14 && VAR_13)
    FUNC_4(VAR_14, VAR_13, VAR_20);
  }

  *VAR_12++ = VAR_4;

  if ((VAR_6->tim_bitmap & 0xff00) && (VAR_6->tim_bitmap & 0x00fe))
   VAR_18 = 5;
  else
   VAR_18 = 4;

  *VAR_12++ = VAR_18;

  *VAR_12++ = 0;
  *VAR_12++ = 1;

  if (VAR_6->tim_bitmap & FUNC_0(0))
   *VAR_12++ = FUNC_0(0);
  else
   *VAR_12++ = 0;

  if (VAR_18 == 4) {
   __le16 VAR_21;

   if (VAR_6->tim_bitmap & 0xff00)
    VAR_21 = FUNC_1(VAR_6->tim_bitmap >> 8);
   else
    VAR_21 = VAR_15;

   *VAR_12++ = FUNC_3(VAR_21);

  } else if (VAR_18 == 5) {
   FUNC_4(VAR_12, &VAR_15, 2);
   VAR_12 += 2;
  }


  if (VAR_14) {
   FUNC_4(VAR_12, VAR_14, VAR_20);

   FUNC_2(VAR_14);
  }

  VAR_16 = (uint)(VAR_12 - VAR_10);
  VAR_9->IELength = VAR_16 + VAR_20;
 }
}
