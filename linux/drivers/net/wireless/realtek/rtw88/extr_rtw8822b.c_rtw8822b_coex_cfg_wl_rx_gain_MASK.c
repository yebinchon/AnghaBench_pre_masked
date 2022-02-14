
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rtw_coex_dm {int cur_wl_rx_low_gain_en; } ;
struct rtw_coex {struct rtw_coex_dm dm; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 size_t FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rtw_dev*,int,int const) ;
 int FUNC_2 (struct rtw_dev*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_5, bool VAR_6)
{
 struct rtw_coex *VAR_7 = &VAR_5->coex;
 struct rtw_coex_dm *VAR_8 = &VAR_7->dm;

 static const u32 VAR_9[] = {
  0xff000003, 0xbd120003, 0xbe100003, 0xbf080003, 0xbf060003,
  0xbf050003, 0xbc140003, 0xbb160003, 0xba180003, 0xb91a0003,
  0xb81c0003, 0xb71e0003, 0xb4200003, 0xb5220003, 0xb4240003,
  0xb3260003, 0xb2280003, 0xb12a0003, 0xb02c0003, 0xaf2e0003,
  0xae300003, 0xad320003, 0xac340003, 0xab360003, 0x8d380003,
  0x8c3a0003, 0x8b3c0003, 0x8a3e0003, 0x6e400003, 0x6d420003,
  0x6c440003, 0x6b460003, 0x6a480003, 0x694a0003, 0x684c0003,
  0x674e0003, 0x66500003, 0x65520003, 0x64540003, 0x64560003,
  0x007e0403
 };


 static const u32 VAR_10[] = {
  0xff000003, 0xf4120003, 0xf5100003, 0xf60e0003, 0xf70c0003,
  0xf80a0003, 0xf3140003, 0xf2160003, 0xf1180003, 0xf01a0003,
  0xef1c0003, 0xee1e0003, 0xed200003, 0xec220003, 0xeb240003,
  0xea260003, 0xe9280003, 0xe82a0003, 0xe72c0003, 0xe62e0003,
  0xe5300003, 0xc8320003, 0xc7340003, 0xc6360003, 0xc5380003,
  0xc43a0003, 0xc33c0003, 0xc23e0003, 0xc1400003, 0xc0420003,
  0xa5440003, 0xa4460003, 0xa3480003, 0xa24a0003, 0xa14c0003,
  0x834e0003, 0x82500003, 0x81520003, 0x80540003, 0x65560003,
  0x007e0403
 };
 u8 VAR_11;

 if (VAR_6 == VAR_8->cur_wl_rx_low_gain_en)
  return;

 VAR_8->cur_wl_rx_low_gain_en = VAR_6;

 if (VAR_8->cur_wl_rx_low_gain_en) {
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9); VAR_11++)
   FUNC_1(VAR_5, VAR_0, VAR_9[VAR_11]);


  FUNC_2(VAR_5, VAR_1, VAR_4, 0x2, 0x1);
  FUNC_2(VAR_5, VAR_1, VAR_3, 0x3f, 0x3f);
  FUNC_2(VAR_5, VAR_2, VAR_4, 0x2, 0x1);
  FUNC_2(VAR_5, VAR_2, VAR_3, 0x3f, 0x3f);
 } else {
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_10); VAR_11++)
   FUNC_1(VAR_5, 0x81c, VAR_10[VAR_11]);


  FUNC_2(VAR_5, VAR_1, VAR_3, 0x3f, 0x4);
  FUNC_2(VAR_5, VAR_1, VAR_4, 0x2, 0x0);
  FUNC_2(VAR_5, VAR_2, VAR_3, 0x3f, 0x4);
  FUNC_2(VAR_5, VAR_2, VAR_4, 0x2, 0x0);
 }
}
