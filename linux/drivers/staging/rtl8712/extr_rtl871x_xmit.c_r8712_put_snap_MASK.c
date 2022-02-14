
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_snap_hdr {int dsap; int ssap; int ctrl; int * oui; } ;
typedef int sint ;
typedef int __be16 ;


 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static sint FUNC_1(u8 *VAR_3, u16 VAR_4)
{
 struct ieee80211_snap_hdr *VAR_5;
 const u8 *VAR_6;

 VAR_5 = (struct ieee80211_snap_hdr *)VAR_3;
 VAR_5->dsap = 0xaa;
 VAR_5->ssap = 0xaa;
 VAR_5->ctrl = 0x03;
 if (VAR_4 == 0x8137 || VAR_4 == 0x80f3)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_1;
 VAR_5->oui[0] = VAR_6[0];
 VAR_5->oui[1] = VAR_6[1];
 VAR_5->oui[2] = VAR_6[2];
 *(__be16 *)(VAR_3 + VAR_2) = FUNC_0(VAR_4);
 return VAR_2 + sizeof(u16);
}
