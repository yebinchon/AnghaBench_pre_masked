
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl_80211_hdr_4addr {int* addr4; int* addr2; int* addr1; int seq_ctl; int frame_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct rtl_80211_hdr_4addr *VAR_5,
        u8 *VAR_6, u8 *VAR_7, u8 *VAR_8)
{
 u8 *VAR_9, VAR_10 = 0;
 size_t VAR_11;
 u16 VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_2(VAR_5->frame_ctl);
 VAR_13 = ((VAR_12 & (VAR_3 | VAR_2)) ==
         (VAR_3 | VAR_2));




 VAR_14 = (FUNC_1(VAR_12) == VAR_4) &&
         (FUNC_0(VAR_12) & 0x80);
 VAR_11 = 22;
 if (VAR_13)
  VAR_11 += 6;
 if (VAR_14) {
  VAR_9 = (u8 *)&VAR_5->addr4;
  if (VAR_13)
   VAR_9 += 6;
  VAR_10 = *VAR_9 & 0x0f;
  VAR_11 += 2;
 }
 VAR_7[0] = 0x1;


 VAR_7[1] = VAR_10;
 FUNC_3(VAR_7 + 2, VAR_5->addr2, VAR_1);
 FUNC_3(VAR_7 + 8, VAR_6, VAR_0);
 VAR_9 = (u8 *)VAR_5;
 VAR_8[0] = VAR_9[0] & 0x8f;
 VAR_8[1] = VAR_9[1] & 0xc7;
 FUNC_3(VAR_8 + 2, VAR_5->addr1, 3 * VAR_1);
 VAR_9 = (u8 *)&VAR_5->seq_ctl;
 VAR_8[20] = VAR_9[0] & 0x0f;
 VAR_8[21] = 0;
 FUNC_4(VAR_8 + 22, 0, 8);
 if (VAR_13)
  FUNC_3(VAR_8 + 22, VAR_5->addr4, VAR_1);
 if (VAR_14) {
  VAR_8[VAR_13 ? 28 : 22] = VAR_10;

 }

 return VAR_11;
}
