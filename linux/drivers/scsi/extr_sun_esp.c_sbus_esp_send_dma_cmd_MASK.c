
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct esp {scalar_t__ rev; int prev_hme_dmacsr; scalar_t__ dmarev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (struct esp*,int,int ) ;
 int FUNC_5 (struct esp*,int) ;

__attribute__((used)) static void FUNC_6(struct esp *VAR_13, u32 VAR_14, u32 VAR_15,
      u32 VAR_16, int VAR_17, u8 VAR_18)
{
 u32 VAR_19;

 FUNC_0(!(VAR_18 & VAR_6));

 FUNC_4(VAR_13, (VAR_15 >> 0) & 0xff, VAR_7);
 FUNC_4(VAR_13, (VAR_15 >> 8) & 0xff, VAR_8);
 if (VAR_13->rev == VAR_9) {
  FUNC_4(VAR_13, (VAR_15 >> 16) & 0xff, VAR_11);
  FUNC_4(VAR_13, 0, VAR_10);

  FUNC_5(VAR_13, VAR_18);

  VAR_19 = VAR_13->prev_hme_dmacsr;
  VAR_19 |= VAR_4 | VAR_3;
  if (VAR_17)
   VAR_19 |= VAR_5;
  else
   VAR_19 &= ~VAR_5;
  VAR_13->prev_hme_dmacsr = VAR_19;

  FUNC_3(VAR_16, VAR_1);
  FUNC_3(VAR_14, VAR_0);
  FUNC_3(VAR_19, VAR_2);
 } else {
  VAR_19 = FUNC_2(VAR_2);
  VAR_19 |= VAR_3;
  if (VAR_17)
   VAR_19 |= VAR_5;
  else
   VAR_19 &= ~VAR_5;
  FUNC_3(VAR_19, VAR_2);
  if (VAR_13->dmarev == VAR_12) {
   u32 VAR_20 = FUNC_1(VAR_14 + VAR_16 + 16U);
   FUNC_3(VAR_20 - VAR_14, VAR_1);
  }
  FUNC_3(VAR_14, VAR_0);

  FUNC_5(VAR_13, VAR_18);
 }

}
