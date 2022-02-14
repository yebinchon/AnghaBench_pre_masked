
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct rtw_dev {struct rtw_chip_info* chip; } ;
struct rtw_chip_info {scalar_t__ tx_pkt_desc_sz; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtw_dev*,scalar_t__) ;
 int FUNC_1 (struct rtw_dev*,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct rtw_dev*,int ) ;
 int FUNC_3 (struct rtw_dev*,int ,scalar_t__) ;
 int FUNC_4 (struct rtw_dev*,int ,int const*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct rtw_dev *VAR_4, const u8 *VAR_5,
    u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct rtw_chip_info *VAR_9 = VAR_4->chip;
 u32 VAR_10 = VAR_9->tx_pkt_desc_sz;
 u8 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15 = 0x1000;
 u32 VAR_16;
 int VAR_17;

 VAR_12 = 0;
 VAR_11 = 1;
 VAR_13 = VAR_8;

 VAR_16 = FUNC_2(VAR_4, VAR_3);
 VAR_16 |= VAR_0;
 FUNC_3(VAR_4, VAR_3, VAR_16);

 while (VAR_13) {
  if (VAR_13 >= VAR_15)
   VAR_14 = VAR_15;
  else
   VAR_14 = VAR_13;

  VAR_17 = FUNC_4(VAR_4, (u16)(VAR_6 >> 7),
     VAR_5 + VAR_12, VAR_14);
  if (VAR_17)
   return VAR_17;

  VAR_17 = FUNC_1(VAR_4, VAR_2 +
           VAR_6 + VAR_10,
           VAR_7 + VAR_12, VAR_14,
           VAR_11);
  if (VAR_17)
   return VAR_17;

  VAR_11 = 0;
  VAR_12 += VAR_14;
  VAR_13 -= VAR_14;
 }

 if (!FUNC_0(VAR_4, VAR_7))
  return -VAR_1;

 return 0;
}
