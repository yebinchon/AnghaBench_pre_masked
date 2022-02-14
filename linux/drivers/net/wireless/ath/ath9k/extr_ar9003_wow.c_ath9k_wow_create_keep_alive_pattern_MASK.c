
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath_hw {int txchainmask; int curchan; } ;
struct ath_common {int curbssid; int macaddr; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct ath_hw*,int,int) ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (int*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_10)
{
 struct ath_common *VAR_11 = FUNC_5(VAR_10);
 u8 VAR_12[VAR_1], VAR_13[VAR_1];
 u32 VAR_14[13] = {0};
 u32 VAR_15[VAR_6];
 u8 VAR_16;
 u32 VAR_17;

 FUNC_6(VAR_12, VAR_11->macaddr, VAR_1);
 FUNC_6(VAR_13, VAR_11->curbssid, VAR_1);


 VAR_14[0] = (VAR_3 | (VAR_9 << 16));
 VAR_14[1] = 0;
 VAR_14[4] = 0;
 VAR_14[7] = (VAR_10->txchainmask) << 2;
 VAR_14[2] = 0xf << 16;

 if (FUNC_3(VAR_10->curchan))
  VAR_14[3] = 0x1b;
 else
  VAR_14[3] = 0xb;

 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++)
  FUNC_4(VAR_10, (VAR_0 + VAR_16 * 4), VAR_14[VAR_16]);

 VAR_15[0] = (VAR_5 << 2) | (VAR_4 << 4) |
         (VAR_8 << 8) | (VAR_2 << 16);
 VAR_15[1] = (VAR_13[3] << 24) | (VAR_13[2] << 16) |
         (VAR_13[1] << 8) | (VAR_13[0]);
 VAR_15[2] = (VAR_12[1] << 24) | (VAR_12[0] << 16) |
         (VAR_13[5] << 8) | (VAR_13[4]);
 VAR_15[3] = (VAR_12[5] << 24) | (VAR_12[4] << 16) |
         (VAR_12[3] << 8) | (VAR_12[2]);
 VAR_15[4] = (VAR_13[3] << 24) | (VAR_13[2] << 16) |
         (VAR_13[1] << 8) | (VAR_13[0]);
 VAR_15[5] = (VAR_13[5] << 8) | (VAR_13[4]);

 if (FUNC_0(VAR_10) || FUNC_1(VAR_10)) {




  FUNC_4(VAR_10, (VAR_0 + (12 * 4)), 0);
  VAR_17 = FUNC_2(13);
 } else {
  VAR_17 = FUNC_2(12);
 }

 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++)
  FUNC_4(VAR_10, (VAR_17 + VAR_16*4), VAR_15[VAR_16]);
}
