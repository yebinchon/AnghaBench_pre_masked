
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct emac_adapter {int tpd_burst; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct emac_adapter *VAR_13)
{
 u32 VAR_14;

 FUNC_1((VAR_0 >> 3) &
        VAR_4, VAR_13->base + VAR_2);

 VAR_14 = (VAR_13->tpd_burst << VAR_7) &
        VAR_6;

 VAR_14 |= VAR_12 | VAR_5;
 VAR_14 |= (0x0100 << VAR_9) &
  VAR_8;

 FUNC_1(VAR_14, VAR_13->base + VAR_1);
 FUNC_0(VAR_13->base + VAR_3,
     (VAR_10 | VAR_11), 0);
}
