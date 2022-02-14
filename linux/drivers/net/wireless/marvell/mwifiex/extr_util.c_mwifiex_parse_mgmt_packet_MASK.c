
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rxpd {int nf; int snr; } ;
struct mwifiex_private {int adapter; } ;
struct ieee80211_hdr {int* addr2; int frame_control; } ;


 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_private*,int*,int ,int ) ;
 int FUNC_2 (int ,int ,char*,...) ;

__attribute__((used)) static int
FUNC_3(struct mwifiex_private *VAR_3, u8 *VAR_4, u16 VAR_5,
     struct rxpd *VAR_6)
{
 u16 VAR_7;
 u8 VAR_8, VAR_9, *VAR_10;
 struct ieee80211_hdr *VAR_11 = (void *)VAR_4;

 VAR_7 = (FUNC_0(VAR_11->frame_control) & VAR_0);

 switch (VAR_7) {
 case 130:
  VAR_8 = *(VAR_4 + sizeof(struct ieee80211_hdr));
  switch (VAR_8) {
  case 128:
   VAR_9 = *(VAR_4 + sizeof(struct ieee80211_hdr)
     + 1);
   if (VAR_9 == VAR_2) {
    VAR_10 = VAR_11->addr2;
    FUNC_2(VAR_3->adapter, VAR_1,
         "TDLS discovery response %pM nf=%d, snr=%d\n",
         VAR_10, VAR_6->nf, VAR_6->snr);
    FUNC_1(VAR_3,
             VAR_10,
             VAR_6->snr,
             VAR_6->nf);
   }
   break;
  case 129:

   FUNC_2(VAR_3->adapter, VAR_1,
        "drop BACK action frames");
   return -1;
  default:
   FUNC_2(VAR_3->adapter, VAR_1,
        "unknown public action frame category %d\n",
        VAR_8);
  }
  break;
 default:
  FUNC_2(VAR_3->adapter, VAR_1,
      "unknown mgmt frame subtype %#x\n", VAR_7);
  return 0;
 }

 return 0;
}
