
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct bgmac {int feature_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct bgmac*,int,int ,int ) ;
 int FUNC_1 (struct bgmac*,int,int,int) ;
 int FUNC_2 (struct bgmac*) ;
 int FUNC_3 (struct bgmac*,int ) ;
 int FUNC_4 (struct bgmac*,int ,int ) ;
 int FUNC_5 (struct bgmac*,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct bgmac *VAR_21)
{
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;

 if (VAR_21->feature_flags & VAR_12)
  VAR_22 = VAR_6;
 else
  VAR_22 = VAR_5;

 VAR_23 = FUNC_3(VAR_21, VAR_3);
 FUNC_1(VAR_21, ~(VAR_7 | VAR_4),
        VAR_22, 1);
 FUNC_6(2);
 VAR_23 |= VAR_7 | VAR_4;
 FUNC_5(VAR_21, VAR_3, VAR_23);

 VAR_24 = (FUNC_3(VAR_21, VAR_8) & VAR_9) >>
  VAR_10;
 if (VAR_21->feature_flags & VAR_11 || VAR_24 != 0)
  FUNC_4(VAR_21, VAR_0, VAR_1);
 if (!(VAR_21->feature_flags & VAR_11) && VAR_24 == 2)
  FUNC_0(VAR_21, 1, ~0,
          VAR_2);

 if (VAR_21->feature_flags & (VAR_13 |
        VAR_14)) {
  u32 VAR_25;

  if (VAR_21->feature_flags & VAR_13)
   VAR_25 = 0x2300e1;
  else
   VAR_25 = 0x03cb04cb;

  FUNC_5(VAR_21, VAR_16, VAR_25);
  FUNC_5(VAR_21, VAR_17, 0x27fff);
 }

 if (VAR_21->feature_flags & VAR_15) {
  u32 VAR_26;
  u16 VAR_27;
  u8 VAR_28;

  VAR_26 = FUNC_3(VAR_21, VAR_18);
  VAR_26 &= ~VAR_19;
  VAR_27 = FUNC_2(VAR_21) / 1000000;
  VAR_28 = (VAR_27 * 128 / 1000) - 3;
  VAR_26 |= (VAR_28 << VAR_20);
  FUNC_5(VAR_21, VAR_18, VAR_26);
 }
}
