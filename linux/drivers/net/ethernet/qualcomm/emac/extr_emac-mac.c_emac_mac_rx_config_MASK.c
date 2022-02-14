
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct emac_adapter {int rfd_burst; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct emac_adapter *VAR_27)
{
 u32 VAR_28;

 VAR_28 = (VAR_27->rfd_burst << VAR_9) &
        VAR_8;
 VAR_28 |= (VAR_26 | VAR_0);

 FUNC_1(VAR_28, VAR_27->base + VAR_1);

 VAR_28 = FUNC_0(VAR_27->base + VAR_2);
 VAR_28 &= ~(VAR_6 | VAR_11 |
   VAR_14);
 VAR_28 |= (VAR_5 << VAR_7) |
  (VAR_10 << VAR_12) |
  (VAR_13 << VAR_15);
 FUNC_1(VAR_28, VAR_27->base + VAR_2);

 VAR_28 = FUNC_0(VAR_27->base + VAR_3);
 VAR_28 &= ~(VAR_21 | VAR_24);
 VAR_28 |= (VAR_20 << VAR_22) |
  (VAR_23 << VAR_25);
 FUNC_1(VAR_28, VAR_27->base + VAR_3);

 VAR_28 = FUNC_0(VAR_27->base + VAR_4);
 VAR_28 &= ~(VAR_19 | VAR_17);
 VAR_28 |= VAR_16 << VAR_18;
 FUNC_1(VAR_28, VAR_27->base + VAR_4);
}
